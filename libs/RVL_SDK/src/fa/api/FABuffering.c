int FABuffering(char pf) { // Could be returning an int..? not sure though.
    int result = pfstub_buffering(pf); 
    result = ((-result | result) >> 0x1F);
    return result;
}
