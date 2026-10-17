
void FUN_006386c9(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *puVar4;
  
  FUN_0061f6cc();
  FUN_006318f2(10);
  puVar4 = *(undefined4 **)(extraout_ECX + 0x70);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  while (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar4;
    piVar3 = (int *)puVar4[2];
    iVar2 = (**(code **)(*piVar3 + 0xd0))();
    puVar4 = puVar1;
    if (iVar2 != 0) {
      AddTail(piVar3);
    }
  }
  puVar4 = *(undefined4 **)(unaff_EBP + -0x24);
  while (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar4;
    if (((int *)puVar4[2])[0x1e] == 0) {
      (**(code **)(*(int *)puVar4[2] + 0x58))();
      puVar4 = puVar1;
    }
    else {
      piVar3 = (int *)FUN_00634939();
      (**(code **)(*piVar3 + 0x58))();
      puVar4 = puVar1;
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00631951();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

