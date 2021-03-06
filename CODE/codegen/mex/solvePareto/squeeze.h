/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * squeeze.h
 *
 * Code generation for function 'squeeze'
 *
 */

#ifndef SQUEEZE_H
#define SQUEEZE_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "solvePareto_types.h"

/* Function Declarations */
extern void squeeze(const emlrtStack *sp, const emxArray_real_T *a,
                    emxArray_real_T *b);

#endif

/* End of code generation (squeeze.h) */
