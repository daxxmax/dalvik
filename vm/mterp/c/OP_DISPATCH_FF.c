HANDLE_OPCODE(OP_DISPATCH_FF)
    /*
     * In portable interp, most unused opcodes will fall through to here.
     */
    LOGE("unknown opcode 0x%02x\n", INST_INST(inst));
    dvmAbort();
    FINISH(1);
OP_END