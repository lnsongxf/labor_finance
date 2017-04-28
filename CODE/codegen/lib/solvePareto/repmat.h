/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * repmat.h
 *
 * Code generation for function 'repmat'
 *
 */

#ifndef REPMAT_H
#define REPMAT_H

/* Include files */
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "solvePareto_types.h"

/* Function Declarations */
extern void repmat(const double a_data[], const int a_size[1], double varargin_2,
                   emxArray_real_T *b);

#endif

/* End of code generation (repmat.h) */
