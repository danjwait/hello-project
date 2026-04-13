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

void HiComponent ::SAY_HI_cmdHandler(FwOpcodeType opCode, U32 cmdSeq, const Fw::CmdStringArg& greeting) {
    // Copy the command string intpu into an event string for the SayHiEvent
    Fw::TextLogString eventGreeting(greeting.toChar());
    // Emit the SayHiEvent with the copied string
    this->log_ACTIVITY_HI_SayHiEvent(eventGreeting);
    // Increment the greeting counter
    this->tlmWrite_GreetingCount(++this->m_greetingCount);
    // Respond to command system
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
}

}  // namespace HiNamespace
