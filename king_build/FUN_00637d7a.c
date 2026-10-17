
void __thiscall FUN_00637d7a(int *param_1,int param_2,int *param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  LRESULT LVar4;
  int *piVar5;
  
  FUN_006333b8();
  uVar2 = FUN_00632d9a();
  piVar5 = param_1;
  if ((uVar2 & 0x40000000) == 0) {
    piVar5 = (int *)FUN_006349e4();
  }
  if (param_2 != 0) {
    param_3 = param_1;
  }
  if ((piVar5 == param_3) ||
     ((piVar3 = (int *)FUN_006349e4(), piVar5 == piVar3 &&
      (LVar4 = SendMessageA((HWND)param_3[7],0x36d,0x40,0), LVar4 != 0)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  piVar5[9] = piVar5[9] & 0xffffffdf;
  if (bVar1) {
    piVar5[9] = piVar5[9] | 0x20;
  }
  FUN_006376a7((-(uint)bVar1 & 0xfffffffc) + 8);
  piVar5 = (int *)FUN_00638162();
  if (piVar5 == (int *)0x0) {
    (**(code **)(*param_1 + 0xc0))();
    piVar5 = (int *)FUN_00638162();
    if (piVar5 == (int *)0x0) {
      return;
    }
  }
  if ((param_2 != 0) && (param_4 == 0)) {
    (**(code **)(*piVar5 + 0xe4))(1,piVar5,piVar5);
  }
  (**(code **)(*piVar5 + 0xe8))(param_2,param_1);
  return;
}

