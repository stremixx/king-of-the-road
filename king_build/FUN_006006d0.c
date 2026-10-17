
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_006006d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  undefined1 uStack_11;
  undefined4 local_10;
  int local_c [3];
  
  if (DAT_00722d3c == (int *)0x0) {
    return 0xffffffff;
  }
  piVar3 = (int *)0x0;
  local_10 = 0;
  while( true ) {
    while( true ) {
      local_c[0] = 0;
      local_c[1] = 0;
      iVar1 = (**(code **)(*DAT_00722d3c + 100))
                        (DAT_00722d3c,local_c,local_c + 1,1,piVar3,&local_10);
      if (iVar1 == -0x7788ff42) {
        if (piVar3 != (int *)0x0) {
          FUN_00631d5c(piVar3);
        }
        return 0xffffffff;
      }
      if (iVar1 != -0x7788ffe2) break;
      if (piVar3 != (int *)0x0) {
        FUN_00631d5c(piVar3);
      }
      piVar3 = (int *)FUN_00631d33(local_10);
    }
    if (iVar1 < 0) {
      uVar2 = FUN_006001c0(iVar1,&DAT_0068c120);
      FUN_00401010(1,100,s_C__Nek_Vrappl_Gi_Srmidp_D1gate_c_00683184,
                   s__Id__D1gate_cpp_2001_6_25_14_48__00682bd0,0x201,s_Receive_error_006831a8,uVar2)
      ;
      goto LAB_006008a3;
    }
    if (local_c[0] != 0) break;
    if (*piVar3 == 3) {
      if (piVar3[1] == 1) {
        param_1[3] = piVar3[2];
        fVar5 = (float10)thunk_FUN_00603580();
        *(double *)(param_1 + 4) = (double)fVar5;
        *param_1 = 1;
        FUN_00602240(0,0);
LAB_006008a3:
        if (piVar3 != (int *)0x0) {
          FUN_00631d5c(piVar3);
        }
        return 0;
      }
    }
    else if ((*piVar3 == 5) && (piVar3[1] == 1)) {
      param_1[3] = piVar3[2];
      fVar5 = (float10)thunk_FUN_00603580();
      *(double *)(param_1 + 4) = (double)fVar5;
      *param_1 = 2;
      FUN_00602240(0,0);
      goto LAB_006008a3;
    }
  }
  local_c[2] = local_c[0];
  if ((DAT_00722ca8 & 1) == 0) {
    DAT_00722ca8 = DAT_00722ca8 | 1;
    FUN_00478a20(&uStack_11);
    FUN_0061c439(&LAB_006008c0);
  }
  iVar4 = DAT_00722cd4;
  iVar1 = DAT_00722cd0;
  FUN_0046ecd0(DAT_00722cd4,DAT_00722cd4,DAT_00722cd0,param_1,0);
  DAT_00722cd4 = DAT_00722cd4 + (iVar1 - iVar4);
  FUN_006002d0(&DAT_00722cd0,piVar3,local_10);
  iVar1 = DAT_00722cd0;
  iVar4 = DAT_00722cd4 - DAT_00722cd0;
  param_1[3] = local_c[2];
  fVar5 = (float10)thunk_FUN_00603580();
  *(double *)(param_1 + 4) = (double)fVar5;
  *param_1 = 4;
  FUN_00602240(iVar1,iVar4);
  goto LAB_006008a3;
}

