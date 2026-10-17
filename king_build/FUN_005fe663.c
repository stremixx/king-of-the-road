
undefined8 __fastcall
FUN_005fe663(undefined4 param_1,undefined4 param_2,uint *param_3,int param_4,undefined4 param_5,
            int param_6,int param_7,int param_8)

{
  undefined4 in_EAX;
  uint uVar1;
  int extraout_EDX;
  int iVar2;
  undefined4 local_10;
  undefined4 local_8;
  
  for (local_10 = 0; local_10 < param_7; local_10 = local_10 + 1) {
    local_8 = param_4;
    iVar2 = 0;
    while (iVar2 < param_6) {
      uVar1 = *param_3;
      if ((uVar1 & 0x80) == 0) {
        uVar1 = uVar1 & 0x7f;
        FUN_005fe63e(local_8,(int)param_3 + 1,uVar1);
        iVar2 = iVar2 + uVar1;
        local_8 = local_8 + uVar1;
        param_3 = (uint *)(extraout_EDX + uVar1);
      }
      else {
        param_3 = (uint *)((int)param_3 + 1);
        iVar2 = iVar2 + (uVar1 & 0x7f);
        local_8 = local_8 + (uVar1 & 0x7f);
      }
    }
    param_4 = param_4 + param_8;
  }
  return CONCAT44(param_2,in_EAX);
}

