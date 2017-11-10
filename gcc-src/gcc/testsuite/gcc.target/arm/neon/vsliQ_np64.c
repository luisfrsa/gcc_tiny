/* Test the `vsliQ_np64' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_crypto_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_crypto } */

#include "arm_neon.h"

void test_vsliQ_np64 (void)
{
  poly64x2_t out_poly64x2_t;
  poly64x2_t arg0_poly64x2_t;
  poly64x2_t arg1_poly64x2_t;

  out_poly64x2_t = vsliq_n_p64 (arg0_poly64x2_t, arg1_poly64x2_t, 1);
}

/* { dg-final { scan-assembler "vsli\.64\[ 	\]+\[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+, #\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */