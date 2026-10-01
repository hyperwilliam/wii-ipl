#include <stddef.h>

char* lbl_81690A48[] = {
    "prfile2:ERR pfk_create_task() invalid param\n"
};

char* lbl_81690A78[] = {
    "prfile2:ERR pfk_create_task() failed to create thread\n"
};

char* lbl_81690AB0[] = {
    "prfile2:ERR pfk_start_task() invalid tsk_id\n"
};

char* lbl_81690AE0[] = {
    "prfile2:ERR pfk_get_task_id() invalid param\n"
};

char* lbl_81690B10[] = {
    "INFO failed to OSGetCurrentThread\n"
};

char* lbl_81690B38[] = {
    "prfile2:ERR pfk_create_mailbox() Invalid Param\n" // why is this uppercase but not some of the others???
};

char* lbl_81690C80[] = {
    "prfile2:ERR pfk_delete_semaphore() Invalid Param\n" // why is this uppercase but not some of the others???
};

char* lbl_81690CB4[] = {
    "prfile2:ERR pfk_get_semaphore() Invalid Param\n" // why is this uppercase but not some of the others???
};

char* lbl_81690CE4[] = {
    "prfile2:ERR pfk_release_semaphore() Invalid Param\n" // why is this uppercase but not some of the others???
};


int pfk_release_semaphore(int input) { // close to accurate, but not matching :(
    if (input == 0) {
        OSReport(lbl_81690CE4);
        return -2;
    }
    OSSignalSemaphore(input);
    return 0;
}

int pfk_get_semaphore(int input) { // close to accurate, but not matching :(
    if (input == 0) {
        OSReport(lbl_81690CB4);
        return -2;
    }
    OSWaitSemaphore(input);
    return 0;
}

int pfk_delete_semaphore(int input) { // close to accurate, but not matching :(
    if (input == 0) {
        OSReport(lbl_81690C80);
        return -2;
    }
    return 0;
}
