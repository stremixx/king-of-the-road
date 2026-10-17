
void FUN_0046c6d0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int unaff_ESI;
  
  puVar4 = param_1;
  uVar1 = param_1[2];
  uVar2 = *param_1;
  piVar3 = (int *)param_1[param_1[10] + 6];
  cVar5 = (char)piVar3[2];
  if (cVar5 == '\0') {
    uVar7 = piVar3[5];
    param_1[3] = uVar7;
    param_1[4] = (uVar7 - uVar1) + uVar2;
    param_1[5] = param_1[3] + *piVar3;
  }
  else if (('\x01' < cVar5) && (cVar5 < '\x04')) {
    uVar6 = *piVar3 + uVar1;
    param_1 = (uint *)0xf;
    uVar7 = uVar1;
    if ((uVar1 + 0xf <= uVar2) && (uVar7 = uVar2 - 3, uVar6 < uVar2 + 0xc)) {
      uVar7 = uVar6 - 0xf;
    }
    if (uVar6 < uVar7 + 0xf) {
      param_1 = (uint *)(uVar6 - uVar7);
    }
    (**(code **)(*(int *)piVar3[5] + 4))(uVar7 - uVar1,param_1,(int)puVar4 + 0x2dU);
    puVar4[3] = (int)puVar4 + 0x2dU;
    puVar4[4] = (uVar2 - uVar7) + 0x2d + (int)puVar4;
    puVar4[5] = unaff_ESI + 0x2d + (int)puVar4;
    return;
  }
  return;
}

