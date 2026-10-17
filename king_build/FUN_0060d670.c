
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0060d670(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  DWORD DVar4;
  undefined4 unaff_retaddr;
  undefined4 uVar5;
  
  if (*(int *)(DAT_006cdbcc + 0x514) == 2) {
    DVar4 = __ftol();
  }
  else {
    DVar4 = timeGetTime();
  }
  piVar1 = *(int **)(*param_1 + 0x54);
  iVar2 = *piVar1;
  fVar3 = _DAT_00651f70 * (float)piVar1[7] + (_DAT_0064b240 - _DAT_00651f70) * (float)piVar1[8];
  piVar1[7] = (int)fVar3;
  *(float *)(iVar2 + 0x48) = fVar3;
  if ((fVar3 < _DAT_00651f4c) || (_DAT_00651f50 < fVar3)) {
    if (*(int *)(iVar2 + 0x70) == 0) goto LAB_0060d6f9;
    uVar5 = 0;
  }
  else {
    if (*(int *)(iVar2 + 0x70) == 0) goto LAB_0060d6f9;
    uVar5 = 1;
  }
  FUN_006129a0(uVar5);
LAB_0060d6f9:
  (**(code **)(**(int **)(*param_1 + 4) + 0x18))(DVar4);
  FUN_0060c910();
  (**(code **)(**(int **)(*param_1 + 4) + 0x3c))(unaff_retaddr,param_2);
  return;
}

