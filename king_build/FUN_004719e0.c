
void __thiscall FUN_004719e0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_8;
  
  piVar1 = (int *)(param_1 + 0x10);
  if (param_2 != piVar1) {
    puVar6 = (undefined4 *)*param_2;
    iVar2 = param_2[1];
    puVar7 = (undefined4 *)*piVar1;
    uVar3 = (iVar2 - (int)puVar6) / 0xc;
    if ((uint)((*(int *)(param_1 + 0x18) - (int)puVar7) / 0xc) < uVar3) {
      iVar5 = FUN_00459420(uVar3,puVar6,iVar2);
      iVar2 = (*(int *)(param_1 + 0x18) - *piVar1) / 0xc;
      if (iVar2 != 0) {
        FUN_0044b440(*piVar1,iVar2 * 0xc);
      }
      *piVar1 = iVar5;
      *(uint *)(param_1 + 0x18) = iVar5 + uVar3 * 0xc;
    }
    else {
      uVar4 = (*(int *)(param_1 + 0x14) - (int)puVar7) / 0xc;
      if (uVar4 < uVar3) {
        local_8 = (int)(uVar4 * 0xc) / 0xc;
        if (0 < local_8) {
          do {
            *puVar7 = *puVar6;
            puVar7[1] = puVar6[1];
            puVar7[2] = puVar6[2];
            local_8 = local_8 + -1;
            puVar6 = puVar6 + 3;
            puVar7 = puVar7 + 3;
          } while (local_8 != 0);
        }
        FUN_0046f490(*param_2 + ((*(int *)(param_1 + 0x14) - *piVar1) / 0xc) * 0xc,param_2[1],
                     *(int *)(param_1 + 0x14),param_2);
      }
      else {
        FUN_0047c830(puVar6,iVar2,puVar7,param_2,0);
      }
    }
    *(uint *)(param_1 + 0x14) = *piVar1 + uVar3 * 0xc;
  }
  FUN_00484790(piVar1);
  *(undefined1 *)(param_1 + 0x360) = 1;
  return;
}

