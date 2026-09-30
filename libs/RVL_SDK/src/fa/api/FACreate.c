int FACreate(int pf) { // Could be returning an int..? not sure though.
    int result = pfstub_create(pf); 
    if (!result) {
        result = 0;
    }
    return result;
}
