
void __thiscall FUN_005856b0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100 [12];
  int local_d0 [52];
  
  FUN_005eebf0();
  iVar1 = param_2[0x35];
  iVar2 = *param_2;
  piVar5 = local_d0;
  piVar3 = param_2;
  for (iVar4 = 0x34; piVar3 = piVar3 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = *piVar3;
    piVar5 = piVar5 + 1;
  }
  piVar3 = local_100 + 2;
  iVar4 = 4;
  do {
    piVar3[-2] = 0;
    piVar3[-1] = 0;
    *piVar3 = 0;
    piVar3 = piVar3 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar3 = param_2 + 0x36;
  piVar5 = local_100;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar5 = piVar5 + 1;
  }
  local_10c = param_2[0x42];
  local_108 = param_2[0x43];
  local_118 = param_2[0x45];
  local_104 = param_2[0x44];
  local_114 = param_2[0x46];
  local_110 = param_2[0x47];
  if ((DAT_006f549c != 0) && (iVar4 = DAT_006f549c + -4, iVar4 != 0)) {
    while (*(int *)(iVar4 + 0x32c) != iVar2) {
      if (*(int *)(iVar4 + 8) == 0) {
        return;
      }
      iVar4 = *(int *)(iVar4 + 8) + -4;
      if (iVar4 == 0) {
        return;
      }
    }
    (**(code **)(*param_1 + 0xa8))(local_d0,iVar4 + -0x178,iVar1,local_100,&local_10c,&local_118);
  }
  return;
}

