// ======================================================================
// \title  HiComponent.cpp
// \author djwait
// \brief  cpp file for HiComponent component implementation class
// ======================================================================

#include "HiNamespace/Components/HiComponent/HiComponent.hpp"

namespace HiNamespace {

// ----------------------------------------------------------------------
// Component construction and destruction
// ----------------------------------------------------------------------

HiComponent ::HiComponent(const char* const compName) : HiComponentComponentBase(compName) {}

HiComponent ::~HiComponent() {}

// ----------------------------------------------------------------------
// Handler implementations for commands
// ----------------------------------------------------------------------

void HiComponent ::TODO_cmdHandler(FwOpcodeType opCode, U32 cmdSeq) {
    // TODO
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
}

}  // namespace HiNamespace
