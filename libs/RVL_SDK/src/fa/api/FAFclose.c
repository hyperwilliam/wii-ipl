int FAFclose(int pf) { // Could be returning an int..? not sure though.
    int result = pfstub_fclose(pf); 
    result = ((-result | result) >> 0x1F);
    return result;
}
