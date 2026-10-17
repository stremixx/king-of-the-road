
int FUN_00465d30(int param_1,int param_2,int param_3)

{
  if (*(double *)(param_1 + 8) <= *(double *)(param_2 + 8)) {
    if (*(double *)(param_3 + 8) < *(double *)(param_1 + 8)) {
      return param_1;
    }
    if (*(double *)(param_3 + 8) < *(double *)(param_2 + 8)) {
      return param_3;
    }
  }
  else if (*(double *)(param_2 + 8) <= *(double *)(param_3 + 8)) {
    if (*(double *)(param_1 + 8) <= *(double *)(param_3 + 8)) {
      return param_1;
    }
    return param_3;
  }
  return param_2;
}

