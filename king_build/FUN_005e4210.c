
undefined4 __thiscall FUN_005e4210(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *unaff_ESI;
  char *pcVar6;
  int *piStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  int *piStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 *puStack_20;
  undefined4 local_c;
  int *local_8;
  int local_4;
  
  piVar3 = param_2;
  local_4 = 400;
  do {
    iVar5 = 0;
    local_8 = param_1;
    if (*param_1 == 0) {
      puStack_20 = &local_c;
      puStack_28 = &param_2;
      uStack_24 = 4;
      piStack_2c = piVar3;
      param_2 = (int *)0x0;
      piStack_30 = (int *)0x5e4247;
      (**(code **)(*piVar3 + 0x10))();
    }
    else {
      puStack_20 = &local_c;
      puStack_28 = &param_2;
      uStack_24 = 4;
      piStack_2c = piVar3;
      param_2 = (int *)0x1;
      piStack_30 = (int *)0x5e4266;
      (**(code **)(*piVar3 + 0x10))();
      do {
        iVar2 = *(int *)(*param_1 + iVar5);
        if (iVar2 == 0) {
          piStack_30 = (int *)&stack0xffffffe4;
          puStack_38 = &local_c;
          uStack_34 = 4;
          piStack_3c = piVar3;
          local_c = 0xffffffff;
          (**(code **)(*piVar3 + 0x10))();
        }
        else {
          local_c = *(undefined4 *)(iVar2 + 4);
          piStack_30 = (int *)&stack0xffffffe4;
          puStack_38 = &local_c;
          uStack_34 = 4;
          piStack_3c = piVar3;
          (**(code **)(*piVar3 + 0x10))();
          iVar4 = -1;
          pcVar6 = *(char **)(*(int *)(iVar2 + 0xc) + 0xfb0);
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          (**(code **)(*piVar3 + 0x10))(piVar3,&stack0xffffffe4,4,&piStack_2c);
          (**(code **)(*piVar3 + 0x10))
                    (piVar3,*(undefined4 *)(*(int *)(iVar2 + 0xc) + 0xfb0),piStack_2c,&piStack_3c);
          piStack_30 = piVar3;
          uStack_34 = 0x5e42ee;
          FUN_005e3d20();
          param_1 = unaff_ESI;
        }
        iVar5 = iVar5 + 4;
      } while (iVar5 < 2000);
    }
    piStack_30 = (int *)&stack0xffffffe4;
    puStack_38 = &local_c;
    uStack_34 = 4;
    piStack_3c = piVar3;
    local_c = 0xfffffffe;
    (**(code **)(*piVar3 + 0x10))();
    param_1 = param_1 + 1;
    local_4 = local_4 + -1;
    if (local_4 == 0) {
      return 0;
    }
  } while( true );
}

