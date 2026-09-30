int FACreatedir(int pf) { // Could be returning an int..? not sure though.
    int result = pfstub_createdir(pf); 
    result = ((-result | result) >> 0x1F);
    return result;
}
