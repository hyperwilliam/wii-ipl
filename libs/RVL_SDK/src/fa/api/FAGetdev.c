int FAGetdev(char pf) { // Could be returning an int..? not sure though.
    int result = pfstub_devinf(pf); 
    result = ((-result | result) >> 0x1F);
    return result;
}
