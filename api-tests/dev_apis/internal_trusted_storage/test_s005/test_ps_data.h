/** @file
 * Copyright (c) 2019, Arm Limited or ps affiliates. All rights reserved.
 * SPDX-License-Identifier : Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
**/
#ifndef _TEST_S005_PS_DATA_TESTS_H_
#define _TEST_S005_PS_DATA_TESTS_H_

#include "val_protected_storage.h"

#define SST_FUNCTION           val->ps_function
#define psa_sst_uid_t          psa_ps_uid_t
#define psa_sst_create_flags_t psa_ps_create_flags_t

typedef struct {
    char                   test_desc[100];
    enum ps_function_code  api;
    psa_ps_status_t        status;
} test_data;

static struct psa_ps_info_t info;
static test_data s005_data[] = {
{
 "This is dummy for index0", 0, 0
},
{
 "Create a valid storage entity ", VAL_PS_SET, PSA_PS_SUCCESS
},
{
 "validate the data using get api", VAL_PS_GET, PSA_PS_SUCCESS
},
{
 "Index not used",0,0
},
{
 "validate the data attributes get_info api", VAL_PS_GET_INFO, PSA_PS_SUCCESS
},
{
 "Index not used",0,0
},
{
 "Index not used",0,0
},
{
 "Remove the valid storage entity ", VAL_PS_REMOVE, PSA_PS_SUCCESS
},
};
#endif /* _TEST_S004_PS_DATA_TESTS_H_ */