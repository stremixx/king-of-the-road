
void __thiscall FUN_005454f0(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined1 local_64 [100];
  
  uVar1 = *param_2;
  if ((0x5577 < uVar1) || ((int)uVar1 < 0)) {
    FUN_0061c369(local_64,s__Vehicle__receiveMember____ul__l_00678ef4,uVar1,0x5578);
    FUN_004e1e9c(local_64);
  }
  uVar3 = param_2[1];
  puVar4 = param_2 + 2;
  puVar5 = (uint *)(uVar1 + param_1);
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)puVar5 = (char)*puVar4;
    puVar4 = (uint *)((int)puVar4 + 1);
    puVar5 = (uint *)((int)puVar5 + 1);
  }
  return;
}

