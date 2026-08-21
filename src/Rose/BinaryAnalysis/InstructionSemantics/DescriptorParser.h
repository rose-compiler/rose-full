#ifndef ROSE_BinaryAnalysis_InstructionSemantics_DescriptorParser_H
#define ROSE_BinaryAnalysis_InstructionSemantics_DescriptorParser_H

#include <Rose/BinaryAnalysis/InstructionSemantics/BaseSemantics/BasicTypes.h>
#include <Rose/BinaryAnalysis/InstructionSemantics/BaseSemantics/SValue.h>

#include <cstddef>
#include <string>
#include <vector>

namespace Rose {
namespace BinaryAnalysis {
namespace InstructionSemantics {

using BaseSemantics::ValueKind;

/** A parsed JVM descriptor type.
 *
 *  The original descriptor text is retained because ValueKind alone cannot
 *  distinguish among different object and array types.
 */
struct DescriptorType {
    ValueKind kind = ValueKind::Invalid;
    std::string descriptor;

    bool isVoid() const {
        return kind == ValueKind::Invalid && descriptor == "V";
    }

    bool isReference() const {
        return kind == ValueKind::ObjectReference ||
               kind == ValueKind::ArrayReference;
    }

    bool isCategory2() const {
        return kind == ValueKind::Integer64 ||
               kind == ValueKind::Float64;
    }
};

/** A parsed JVM method descriptor. */
struct MethodDescriptor {
    std::vector<DescriptorType> arguments;
    DescriptorType returnType;

    /** Number of local-variable slots occupied by explicit arguments.
     *
     *  The receiver of an instance method is not included.
     */
    size_t argumentSlotCount() const;
};

/** Parser for JVM field and method descriptors. */
class DescriptorParser {
public:
    /** Parse one complete JVM field descriptor. */
    static DescriptorType parseFieldDescriptor(const std::string&);

    /** Parse one complete JVM method descriptor. */
    static MethodDescriptor parseMethodDescriptor(const std::string&);

private:
    /** Parse one descriptor type at @p pos and advance @p pos. */
    static DescriptorType parseType(const std::string&, size_t &pos, bool allowVoid);
};

} // namespace InstructionSemantics
} // namespace BinaryAnalysis
} // namespace Rose

#endif
