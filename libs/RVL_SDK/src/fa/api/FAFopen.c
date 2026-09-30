int FAFopen(int pf) { // Could be returning an int..? not sure though.
    int result = pfstub_fopen(pf); 
    if (!result) {
        result = 0;
    }
    return result;
}
