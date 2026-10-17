
void FUN_005ea940(int param_1,int *param_2,int param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_1 != 0) && (param_5 != (int *)0x0)) && (param_2 != (int *)0x0)) {
    iVar1 = 100 - *(int *)(param_3 + 0x70);
    param_5[0x842] = iVar1;
    if (100 < iVar1) {
      param_5[0x842] = 100;
    }
    if (param_5[0x842] < 0) {
      param_5[0x842] = 0;
    }
    param_5[0x852] = *(int *)(param_3 + 0x78);
    param_5[0x853] = *(int *)(param_3 + 0x7c);
    param_5[0x846] = *(int *)(param_3 + 0x20);
    param_5[0x847] = *(int *)(param_3 + 0x24);
    param_5[0x844] = *(int *)(param_3 + 0x28);
    param_5[0x845] = *(int *)(param_3 + 0x2c);
    FUN_005ad390(*(undefined4 *)(param_3 + 0x18),*(undefined4 *)(param_3 + 0x1c),
                 *(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x14),
                 *(undefined4 *)(param_3 + 0x48));
    FUN_005ad500(*(undefined4 *)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x34),
                 *(undefined4 *)(param_3 + 0x38),*(undefined4 *)(param_3 + 0x3c),
                 *(undefined4 *)(param_3 + 0x40),*(undefined4 *)(param_3 + 0x44));
    param_5[0x875] = *(int *)(param_3 + 0x74);
    param_5[0x872] = *(int *)(param_3 + 0x80);
    param_5[0x873] = *(int *)(param_3 + 0x84);
    FUN_005eaae0(param_5);
    if (DAT_0071f864 != 0) {
      if (param_5[0x876] == 0) {
        if (param_5[0x877] == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = 2;
        }
      }
      else {
        uVar2 = 1;
      }
      FUN_005af7d0(uVar2);
      if (*(int *)(param_1 + 100) == 0) {
        (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x16,2);
      }
      else {
        (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x16,3);
      }
    }
    (**(code **)(*param_5 + 8))(param_2[9]);
    (**(code **)(*param_2 + 0x30))(param_3,param_5);
    if (DAT_0071f864 != 0) {
      (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,7,0);
    }
  }
  return;
}

