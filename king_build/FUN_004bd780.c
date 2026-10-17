
void __thiscall FUN_004bd780(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar4 = 0xf8;
  do {
    uVar1 = *(uint *)(param_1 + -0xa0 + uVar4);
    if (uVar1 != 0) {
      iVar2 = *(int *)(param_1 + 0x2c);
      uVar3 = *(uint *)(uVar4 + iVar2);
      if (uVar1 < 0x4b0) {
        if (uVar3 < 10) {
          *(undefined4 *)(iVar2 + 0x48 + (uVar3 + iVar5) * 4) =
               *(undefined4 *)(param_1 + -0xac + uVar4);
          *(uint *)(iVar2 + 0xa0 + (*(int *)(uVar4 + iVar2) + iVar5) * 4) = uVar1;
LAB_004bd7e8:
          *(int *)(uVar4 + iVar2) = *(int *)(uVar4 + iVar2) + 1;
        }
      }
      else if (uVar3 < 10) {
        *(undefined4 *)(iVar2 + 0x48 + (uVar3 + iVar5) * 4) =
             *(undefined4 *)(param_1 + -0xac + uVar4);
        *(undefined4 *)(iVar2 + 0xa0 + (iVar5 + *(int *)(uVar4 + iVar2)) * 4) = 0x4b0;
        goto LAB_004bd7e8;
      }
    }
    uVar4 = uVar4 + 4;
    iVar5 = iVar5 + 0xb;
    if (0xff < uVar4) {
      FUN_005f2be0(param_2,param_3);
      return;
    }
  } while( true );
}

