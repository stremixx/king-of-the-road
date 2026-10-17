
undefined4 __thiscall FUN_006028c0(int *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1[2];
  iVar3 = param_1[1];
  iVar4 = (**(code **)(*param_1 + 4))();
  if (iVar2 - iVar3 < iVar4) {
    return 5;
  }
  iVar2 = param_1[6];
  if (iVar2 == param_1[2] - param_1[1]) {
    return 1;
  }
  if (param_1[2] - param_1[1] <= iVar2) {
    return 4;
  }
  bVar1 = *(byte *)(iVar2 + param_1[1]);
  *param_2 = (uint)bVar1;
  switch((uint)bVar1) {
  case 7:
  case 0x2a:
  case 0x2d:
  case 0x78:
    return 0;
  default:
    return 3;
  }
}

