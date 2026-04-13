// ======================================================================
// \title  HiComponent.hpp
// \author djwait
// \brief  hpp file for HiComponent component implementation class
// ======================================================================

#ifndef HiNamespace_HiComponent_HPP
#define HiNamespace_HiComponent_HPP

#include "HiNamespace/Components/HiComponent/HiComponentComponentAc.hpp"

namespace HiNamespace {

class HiComponent final : public HiComponentComponentBase {
  public:
    // ----------------------------------------------------------------------
    // Component construction and destruction
    // ----------------------------------------------------------------------

    //! Construct HiComponent object
    HiComponent(const char* const compName  //!< The component name
    );

    //! Destroy HiComponent object
    ~HiComponent();

  private:
    // ----------------------------------------------------------------------
    // Handler implementations for commands
    // ----------------------------------------------------------------------

    //! Handler implementation for command TODO
    //!
    //! TODO
    void TODO_cmdHandler(FwOpcodeType opCode,  //!< The opcode
                         U32 cmdSeq            //!< The command sequence number
                         ) override;
};

}  // namespace HiNamespace

#endif
