#include <vector>
                                          
/** Property class representing CIL Extra Sections (II.25.4.5). 
 *  
 * \note parsing/unparsing is handled by the using class (i.e., SgAsmCilMethoDef)
 */                                          
class SgAsmCilMethodData : public SgAsmCilNode
{
public:
  enum : std::uint8_t
  {
    CorILMethod_Sect_EHTable    = 0x01,
    CorILMethod_Sect_OptILTable = 0x02,
    CorILMethod_Sect_FatFormat  = 0x40,
    CorILMethod_Sect_MoreSects  = 0x80, 
  };
  
private:
  //~ [[using Rosebud: rosetta]]
  //~ std::uint32_t usedDataSize = 0; // this could be the dataSize as used in parsing
  
  [[using Rosebud: rosetta, accessors(get_Clauses), mutators(), large]]
  std::vector<SgAsmCilExceptionData*> clauses = {};
  
  [[using Rosebud: rosetta]]
  std::uint32_t rawHeader = 0;

public:
  std::uint8_t get_kind() const
  {
    return p_rawHeader & 0xff;
  }

  bool isEHTable() const
  {
    return (get_kind() & CorILMethod_Sect_EHTable) == CorILMethod_Sect_EHTable;
  }
  
  bool isOptILTable() const
  {
    return (get_kind() & CorILMethod_Sect_OptILTable) == CorILMethod_Sect_OptILTable;
  }
  
  bool usesFatFormat() const
  {
    return (get_kind() & CorILMethod_Sect_FatFormat) == CorILMethod_Sect_FatFormat;
  }
  
  bool hasMoreSections() const
  {
    return (get_kind() & CorILMethod_Sect_MoreSects) == CorILMethod_Sect_MoreSects;
  }
};
  
