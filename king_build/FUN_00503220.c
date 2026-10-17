
undefined4 __thiscall FUN_00503220(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_d0;
  undefined4 local_cc [12];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int *piStack_68;
  undefined4 local_5c;
  
  FUN_005eebf0();
  puVar5 = &DAT_00701550;
  puVar6 = local_cc;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_84 = *(undefined4 *)(param_1 + 0x8f4);
  local_80 = *(undefined4 *)(param_1 + 0x8f8);
  piVar1 = *(int **)(param_1 + 0x1a10);
  local_78 = *param_2;
  local_7c = *(undefined4 *)(param_1 + 0x8fc);
  local_74 = param_2[1];
  local_70 = param_2[2];
  local_5c = 0;
  local_d0 = 0;
  if (piVar1 != (int *)0x0) {
    bVar2 = (**(code **)(*piVar1 + 0x34))(0,&local_d0);
    bVar3 = bVar2 & 2;
    if ((bVar3 != 0) && (piStack_68 == (int *)0x0)) {
      *(undefined4 *)(param_1 + 0x3c54) = 1;
      piStack_68 = piVar1;
    }
    if ((bVar2 & 1) == 1) {
      if (bVar3 == 2) {
        *param_3 = (int)piStack_68;
      }
      else {
        *param_3 = (int)piVar1;
      }
      *param_2 = uStack_9c;
      param_2[1] = uStack_98;
      param_2[2] = uStack_94;
      return 0;
    }
    if (bVar3 == 2) {
      *param_3 = (int)piStack_68;
      return 1;
    }
  }
  *param_3 = (int)piVar1;
  return 1;
}

