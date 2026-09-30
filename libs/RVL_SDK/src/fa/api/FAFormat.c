int FAFormat(char pf) { // Could be returning an int..? not sure though.
    int result = pfstub_format(pf); 
    result = ((-result | result) >> 0x1F);
    return result;
}
