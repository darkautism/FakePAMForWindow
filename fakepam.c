#include <security/pam_appl.h>

static char * fkp = "This is fake pam";
static char ** fkpa = {
    0
};

int pam_acct_mgmt(pam_handle_t *pamh, int flags) {
    return PAM_SUCCESS;
}

int pam_authenticate(pam_handle_t *pamh, int flags) {
    return PAM_SUCCESS;
}

int pam_chauthtok(pam_handle_t *pamh, int flags){
    return PAM_SUCCESS;
}

const char *pam_strerror(pam_handle_t *pamh, int errnum) {
    return fkp;
}

int pam_end(pam_handle_t *pamh, int pam_status) {
    return PAM_SUCCESS;
}

int pam_get_item(const pam_handle_t *pamh, int item_type, const void **item) {
    return PAM_SUCCESS;
}

const char *pam_getenv(pam_handle_t *pamh, const char *name) {
    return fkp;
}
char **pam_getenvlist(pam_handle_t *pamh) {
    return fkpa;
}

int pam_set_item(pam_handle_t *pamh, int item_type, const void *item) {
    return PAM_SUCCESS;
}

int pam_start(const char *service_name, const char *user, const struct pam_conv *pam_conversation, pam_handle_t **pamh) {
    return PAM_SUCCESS;
}

int pam_putenv(pam_handle_t *pamh, const char *name_value) {
    return PAM_SUCCESS;
}

int pam_setcred(pam_handle_t *pamh, int flags) {
    return PAM_SUCCESS;
}

int pam_close_session(pam_handle_t *pamh, int flags) {
    return PAM_SUCCESS;
}

int pam_open_session(pam_handle_t *pamh, int flags) {
    return PAM_SUCCESS;
}