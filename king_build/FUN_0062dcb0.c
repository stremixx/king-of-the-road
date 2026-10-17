
void FUN_0062dcb0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  FUN_0062e200(param_1 + -0x101,5);
  FUN_0062e200(param_2 + -1,5);
  FUN_0062e200(param_3 + -4,4);
  iVar1 = 0;
  if (0 < param_3) {
    do {
      FUN_0062e200(*(undefined2 *)(&DAT_0077bf4e + (uint)(byte)(&DAT_006894fc)[iVar1] * 4),3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3);
  }
  FUN_0062dd30(&DAT_0077bfec,param_1 + -1);
  FUN_0062dd30(&DAT_0077d250,param_2 + -1);
  return;
}

