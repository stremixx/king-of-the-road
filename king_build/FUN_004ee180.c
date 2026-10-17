
void __fastcall FUN_004ee180(int param_1)

{
  int iVar1;
  CHAR local_12c [300];
  
  *(undefined4 *)(param_1 + 0x2778) = 2;
  iVar1 = (&DAT_00697028)[*(int *)(param_1 + 0x8cc) * 0x25c] + 1;
  *(int *)(param_1 + 0xdd4) = iVar1;
  *(int *)(param_1 + 0x3340) = iVar1;
  if (7 < iVar1) {
    wsprintfA(local_12c,s_Attempt_attach_SemiTrailer_with___006734e4,
              (&DAT_00697028)[*(int *)(param_1 + 0x8cc) * 0x25c],8);
    FUN_004e1e9c(local_12c);
  }
  FUN_004ee200(0);
  return;
}

