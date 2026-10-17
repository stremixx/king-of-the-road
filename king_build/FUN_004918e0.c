
void __thiscall FUN_004918e0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
    piVar1 = (int *)*param_1;
    if (((piVar1[1] == 0) &&
        (((piVar1 != (int *)*param_2 || (param_1[2] != param_2[2])) || (param_1[1] != param_2[1]))))
       && (piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0xc))(1);
    }
  }
  if ((undefined4 *)*param_2 != (undefined4 *)0x0) {
    iVar2 = (*(code *)**(undefined4 **)*param_2)();
    piVar1 = (int *)*param_2;
    if (iVar2 != 0xc) {
      uVar3 = (**(code **)(*piVar1 + 4))(s_Environment_0066f60c);
      FUN_004a5670(2,1,uVar3);
      return;
    }
    *param_1 = (int)piVar1;
    param_1[2] = param_2[2];
    piVar1[1] = piVar1[1] + 1;
    param_1[1] = 0;
    return;
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

