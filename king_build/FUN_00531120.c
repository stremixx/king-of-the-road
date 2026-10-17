
void __fastcall FUN_00531120(int param_1)

{
  int iVar1;
  
  FUN_004ddd70();
  DAT_00695c18 = 0;
  FUN_0061c369(&DAT_00695c1c,s_None_Room_00672340);
  iVar1 = FUN_0053ee80(*(undefined4 *)(param_1 + 0x268));
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 0x268) + 100))();
    (**(code **)(**(int **)(param_1 + 0x268) + 0x6c))(0);
    *(undefined4 *)(*(int *)(param_1 + 0x268) + 0x51dc) = 0;
    *(uint *)(*(int *)(param_1 + 0x268) + 0x51a4) =
         *(uint *)(*(int *)(param_1 + 0x268) + 0x51a4) & 0xffffffcb;
    *(undefined4 *)(param_1 + 0x268) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x270) = 0;
    if (((DAT_00695bd0 != 0) || (DAT_00671d80 != 0)) || (DAT_00695bd4 != 0)) {
      FUN_004e9620();
      FUN_004e95c6();
    }
  }
  return;
}

