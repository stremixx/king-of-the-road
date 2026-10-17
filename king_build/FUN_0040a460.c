
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0040a460(uint *param_1)

{
  if (((((-1 < (int)*param_1) && (*param_1 < (uint)(DAT_0068be9c - DAT_0068be98 >> 2))) ||
       ((-1 < (int)param_1[1] && (param_1[1] < (uint)(DAT_0068be64 - DAT_0068be60 >> 2))))) &&
      (((_DAT_0064a678 <= *(double *)(param_1 + 2) && (*(double *)(param_1 + 2) <= _DAT_0064a670))
       && (-1 < (int)param_1[4])))) && (-1 < (int)param_1[5])) {
    return 1;
  }
  return 0;
}

