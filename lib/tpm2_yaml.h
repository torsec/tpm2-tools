/* SPDX-License-Identifier: BSD-3-Clause */

#ifndef LIB_TPM2_YAML_H_
#define LIB_TPM2_YAML_H_

#include "tpm2_util.h"

typedef struct tpm2_yaml tpm2_yaml;

tpm2_yaml *tpm2_yaml_new(void);

void tpm2_yaml_free(tpm2_yaml *y);

tool_rc tpm2_yaml_tpm2b_name(const TPM2B_NAME *name, tpm2_yaml *y);

tool_rc tpm2_yaml_tpmt_public(tpm2_yaml *y, const TPMT_PUBLIC *public);

tool_rc tpm2_yaml_dump(tpm2_yaml *y, FILE *f);

#endif /* LIB_TPM2_YAML_H_ */
