
void __thiscall FUN_00572d00(uint param_1,code *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = *(int *)(param_1 + 0xa0) != 0;
  if (bVar1) {
    uVar2 = *(undefined4 *)(param_1 + 0x60);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x60);
  }
  FUN_005e10c0(uVar2,bVar1);
  bVar1 = (*(byte *)(param_1 + 0xa0) & 3) == 0;
  if (bVar1) {
    uVar2 = *(undefined4 *)(param_1 + 100);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 100);
  }
  FUN_005e10c0(uVar2,!bVar1);
  bVar1 = (*(byte *)(param_1 + 0xa0) & 0xc) == 0;
  if (bVar1) {
    uVar2 = *(undefined4 *)(param_1 + 0x68);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x68);
  }
  FUN_005e10c0(uVar2,!bVar1);
  bVar1 = (*(byte *)(param_1 + 0xa0) & 0x30) == 0;
  if (bVar1) {
    uVar2 = *(undefined4 *)(param_1 + 0x6c);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x6c);
  }
  FUN_005e10c0(uVar2,!bVar1);
  (*param_2)(-(uint)(param_1 != 0x100) & param_1,param_3);
  return;
}

