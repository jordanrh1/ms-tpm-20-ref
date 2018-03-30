/* Microsoft Reference Implementation for TPM 2.0
 *
 *  The copyright in this software is being made available under the BSD License,
 *  included below. This software may be subject to other third party and
 *  contributor rights, including patent rights, and no such rights are granted
 *  under this license.
 *
 *  Copyright (c) Microsoft Corporation
 *
 *  All rights reserved.
 *
 *  BSD License
 *
 *  Redistribution and use in source and binary forms, with or without modification,
 *  are permitted provided that the following conditions are met:
 *
 *  Redistributions of source code must retain the above copyright notice, this list
 *  of conditions and the following disclaimer.
 *
 *  Redistributions in binary form must reproduce the above copyright notice, this
 *  list of conditions and the following disclaimer in the documentation and/or
 *  other materials provided with the distribution.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS ""AS IS""
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 *  ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 *  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 *  ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 *  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/*(Auto-generated)
 *  Created by TpmStructures; Version 3.0 June 16, 2017
 *  Date: Oct 16, 2017  Time: 12:56:59AM
 */
#ifdef TPM_CC_EventSequenceComplete // Command must be defined
#ifndef _EVENTSEQUENCECOMPLETE_FP_H_
#define _EVENTSEQUENCECOMPLETE_FP_H_

// Input structure definition
typedef struct {
    TPMI_DH_PCR                         pcrHandle;
    TPMI_DH_OBJECT                      sequenceHandle;
    TPM2B_MAX_BUFFER                    buffer;
} EventSequenceComplete_In;

// Output structure definition
typedef struct {
    TPML_DIGEST_VALUES                  results;
} EventSequenceComplete_Out;

// Response code modifiers
#define RC_EventSequenceComplete_pcrHandle  (TPM_RC_H + TPM_RC_1)
#define RC_EventSequenceComplete_sequenceHandle (TPM_RC_H + TPM_RC_2)
#define RC_EventSequenceComplete_buffer (TPM_RC_P + TPM_RC_1)

// Function prototype
TPM_RC
TPM2_EventSequenceComplete(
    EventSequenceComplete_In            *in,
    EventSequenceComplete_Out           *out
);

#endif  // _EVENTSEQUENCECOMPLETE_FP_H_
#endif  // TPM_CC_EventSequenceComplete
