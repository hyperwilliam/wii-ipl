int FAMount(char pf) { // Could be returning an int..? not sure though.
    int result = pfstub_mount(pf); 
    result = ((-result | result) >> 0x1F);
    return result;
}
