
void FUN_00463fb0(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  
  puVar4 = param_1;
  if (param_1 != param_2) {
    while (puVar4 = puVar4 + 1, puVar4 != param_2) {
      uVar2 = *puVar4;
      if (uVar2 < *param_1) {
        iVar6 = (int)puVar4 - (int)param_1 >> 2;
        if (0 < iVar6) {
          puVar5 = puVar4 + 1;
          do {
            puVar1 = (uint *)((int)puVar4 + (-4 - (int)(puVar4 + 1)) + (int)puVar5);
            puVar5 = puVar5 + -1;
            iVar6 = iVar6 + -1;
            *puVar5 = *puVar1;
          } while (iVar6 != 0);
        }
        *param_1 = uVar2;
      }
      else {
        uVar3 = puVar4[-1];
        puVar5 = puVar4;
        while (uVar2 < uVar3) {
          *puVar5 = uVar3;
          uVar3 = puVar5[-2];
          puVar5 = puVar5 + -1;
        }
        *puVar5 = uVar2;
      }
    }
  }
  return;
}

