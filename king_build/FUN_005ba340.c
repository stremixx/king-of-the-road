
void __fastcall FUN_005ba340(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if ((*(byte *)(param_1 + 0x34) & 2) != 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_005d6df0(*(int *)(param_1 + 0x2c));
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfffffffd;
      return;
    }
    piVar1 = *(int **)(param_1 + 0x48);
    if (piVar1 != (int *)0x0) {
      piVar2 = *(int **)(param_1 + 0x4c);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        *(undefined4 *)(param_1 + 0x4c) = 0;
        FUN_005ba120(*(undefined4 *)(param_1 + 0x48));
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfffffffd;
        return;
      }
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfffffffd;
  }
  return;
}

