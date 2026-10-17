
undefined4 FUN_004b66a0(int *param_1,int *param_2)

{
  int iVar1;
  
  if (((*param_1 == *param_2) && (param_1[2] == param_2[2])) && (param_1[1] == param_2[1])) {
    return 1;
  }
  if ((((char)param_1[2] == '\t') && ((char)param_2[2] == '\t')) &&
     (iVar1 = FUN_0061d520(*(undefined4 *)(*param_1 + 0xc),*(undefined4 *)(*param_2 + 0xc)),
     iVar1 == 0)) {
    return 1;
  }
  return 0;
}

