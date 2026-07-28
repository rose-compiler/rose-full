//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Implementation for SgAsmCilMethodData            -- MACHINE GENERATED; DO NOT MODIFY --
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <featureTests.h>
#if defined(ROSE_ENABLE_BINARY_ANALYSIS)
#define ROSE_SgAsmCilMethodData_IMPL
#include <SgAsmCilMethodData.h>

std::vector<SgAsmCilExceptionData*> const&
SgAsmCilMethodData::get_Clauses() const {
    return p_clauses;
}

std::vector<SgAsmCilExceptionData*>&
SgAsmCilMethodData::get_Clauses() {
    return p_clauses;
}

std::uint32_t const&
SgAsmCilMethodData::get_rawHeader() const {
    return p_rawHeader;
}

void
SgAsmCilMethodData::set_rawHeader(std::uint32_t const& x) {
    this->p_rawHeader = x;
    set_isModified(true);
}

SgAsmCilMethodData::~SgAsmCilMethodData() {
    destructorHelper();
}

SgAsmCilMethodData::SgAsmCilMethodData()
    : p_clauses({}) {}

void
SgAsmCilMethodData::initializeProperties() {
    p_clauses = {};
}

#endif // defined(ROSE_ENABLE_BINARY_ANALYSIS)
