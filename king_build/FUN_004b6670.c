
uint FUN_004b6670(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((char)param_1[2] != '\t') {
    return (uint)param_1 & 0xffffff00;
  }
  iVar1 = FUN_0061d520(param_2,*(undefined4 *)(*param_1 + 0xc));
  return (uint)(iVar1 == 0);
}

