
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004c41c0(int param_1)

{
  float10 fVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  float10 fVar5;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar2 = FUN_005e10f0(*(int *)(param_1 + 0x44));
    if (iVar2 == 0) goto LAB_004c439c;
  }
  fVar5 = (float10)FUN_005a9410(0,0);
  fVar1 = (float10)_DAT_0064a798;
  if (fVar1 <= fVar5) {
    *(float *)(*(int *)(param_1 + 0x28) + 0xc) = _DAT_0064b1e4 * _DAT_0064b75c;
    *(float *)(*(int *)(param_1 + 0x2c) + 0xc) = _DAT_0064b1e4 * _DAT_0064b340;
    *(float *)(*(int *)(param_1 + 0x30) + 0xc) = _DAT_0064b1e4 * _DAT_0064b340;
    (**(code **)(**(int **)(param_1 + 0x28) + 0x18))(1);
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x18))(1);
    (**(code **)(**(int **)(param_1 + 0x30) + 0x18))(1);
    iVar2 = **(int **)(param_1 + 0x34);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x18))(0);
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x18))(0);
    (**(code **)(**(int **)(param_1 + 0x30) + 0x18))(0);
    iVar2 = **(int **)(param_1 + 0x34);
  }
  (**(code **)(iVar2 + 0x18))(fVar1 <= fVar5);
  if (DAT_006706fc == 0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x18))(0);
  }
  if (DAT_006706f8 == 0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x18))(0);
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x18))(0);
    (**(code **)(**(int **)(param_1 + 0x30) + 0x18))(0);
  }
  if (DAT_006f2320 == 0) {
    (**(code **)**(undefined4 **)(param_1 + 0x28))
              ((float)*(double *)(*(int *)(param_1 + 0x40) + 0xb90));
  }
  iVar2 = FUN_0060d7c0();
  if (iVar2 == 0) {
    if (DAT_006f2320 == 0) {
      puVar3 = *(undefined4 **)(param_1 + 0x30);
LAB_004c42f7:
      (**(code **)*puVar3)((float)*(double *)(*(int *)(param_1 + 0x40) + 0xb90));
    }
  }
  else if (DAT_006f2320 == 0) {
    puVar3 = *(undefined4 **)(param_1 + 0x2c);
    goto LAB_004c42f7;
  }
  FUN_004c0b20();
  if (DAT_006f2320 == 0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x14))(*(undefined4 *)(param_1 + 0x20));
  }
  iVar2 = FUN_0060d7c0();
  if (iVar2 == 0) {
    if (DAT_006f2320 == 0) {
      piVar4 = *(int **)(param_1 + 0x30);
LAB_004c4349:
      (**(code **)(*piVar4 + 0x14))(*(undefined4 *)(param_1 + 0x20));
    }
  }
  else if (DAT_006f2320 == 0) {
    piVar4 = *(int **)(param_1 + 0x2c);
    goto LAB_004c4349;
  }
  FUN_0062a170();
  if (DAT_006f2320 == 0) {
    (**(code **)**(undefined4 **)(param_1 + 0x34))
              ((float)*(double *)(*(int *)(param_1 + 0x40) + 0xb90));
  }
  FUN_004c0b20();
  if (DAT_006f2320 == 0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x1c))(*(undefined4 *)(param_1 + 0x24));
  }
  FUN_0062a170();
LAB_004c439c:
  FUN_005d29a0(1);
  return;
}

