
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005e16f0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  double dVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  undefined8 local_10;
  
  DAT_0071f680 = 0;
  fVar11 = (float10)thunk_FUN_00603580();
  uVar9 = DAT_0071d770;
  local_10 = (double)fVar11;
  if (DAT_007206c8 != 0) {
    DAT_0071d778 = 0;
    if (DAT_0071d774 != (undefined4 *)0x0) {
      puVar7 = DAT_0071d774;
      for (uVar8 = DAT_0071d770 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar7 = 0;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
    }
    pcVar4 = s_BEGIN_FRAME_0068208c;
    cVar1 = s_BEGIN_FRAME_0068208c[0];
    if (DAT_0071d774 != (undefined4 *)0x0) {
      for (; (cVar1 != '\0' && (DAT_0071d778 < (int)DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1)
      {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        *(char *)((int)DAT_0071d774 + DAT_0071d778) = cVar1;
        cVar1 = *pcVar4;
      }
    }
  }
  if (param_1[0x53] == 0) {
    (**(code **)(*(int *)param_1[0x3f] + 0x3c))();
    FUN_005d7ce0(param_1[0x4a]);
    fVar11 = (float10)thunk_FUN_00603580();
    _DAT_007206a8 = (float)(fVar11 - (float10)local_10);
    (**(code **)(*param_1 + 0xac))();
    if ((DAT_007206c8 != 0) &&
       (pcVar4 = s_BEGIN_EXECUTE_0068207c, cVar1 = s_BEGIN_EXECUTE_0068207c[0],
       DAT_0071d774 != (undefined4 *)0x0)) {
      for (; (cVar1 != '\0' && (DAT_0071d778 < (int)DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1)
      {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        *(char *)((int)DAT_0071d774 + DAT_0071d778) = cVar1;
        cVar1 = *pcVar4;
      }
    }
    piVar5 = (int *)param_1[0x3c];
    while (piVar5 != (int *)0x0) {
      if (((*(byte *)(piVar5 + 4) & 2) != 0) && (piVar5 != (int *)param_1[0x3f])) {
        fVar11 = (float10)thunk_FUN_00603580();
        local_10 = (double)fVar11;
        (**(code **)(*piVar5 + 0x3c))();
        fVar11 = (float10)thunk_FUN_00603580();
        *(double *)(piVar5 + 10) = (double)(fVar11 - (float10)local_10);
        (**(code **)(*piVar5 + 0x30))();
        fVar11 = (float10)thunk_FUN_00603580();
        fVar12 = (float10)thunk_FUN_00603580();
        *(double *)(piVar5 + 8) = (double)(fVar12 - (float10)(double)fVar11);
        *(double *)(piVar5 + 6) = (double)(fVar12 - (float10)local_10);
      }
      piVar5 = (int *)FUN_005d2730();
    }
    if ((DAT_007206c8 != 0) &&
       (pcVar4 = s_END_EXECUTE_0068206c, cVar1 = s_END_EXECUTE_0068206c[0],
       DAT_0071d774 != (undefined4 *)0x0)) {
      for (; (cVar1 != '\0' && (DAT_0071d778 < (int)DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1)
      {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        *(char *)((int)DAT_0071d774 + DAT_0071d778) = cVar1;
        cVar1 = *pcVar4;
      }
    }
    (**(code **)(*(int *)param_1[0x3f] + 0x3c))();
    (**(code **)(*param_1 + 0xb0))();
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
  }
  else {
    (**(code **)(*(int *)param_1[0x3f] + 0x3c))();
    (**(code **)(*param_1 + 0xb0))();
  }
  if (param_1[0x3e] != 0) {
    iVar10 = 1;
    while( true ) {
      if (param_1[0x4f] == 0) {
        iVar10 = FUN_005ac1a0(&local_10);
      }
      if (iVar10 != 0) break;
      switch((short)local_10) {
      case 0x201:
      case 0x202:
      case 0x204:
      case 0x205:
        iVar10 = 0;
        fVar11 = (float10)thunk_FUN_00603580();
        *(double *)(param_1 + 0x5e) = (double)fVar11;
      case 0x200:
        fVar11 = (float10)thunk_FUN_00603580();
        uVar9 = param_1[0x49];
        *(double *)(param_1 + 0x5e) = (double)fVar11;
        if ((uVar9 & 4) == 0) {
          param_1[0x4c] = (int)local_10._2_2_;
          param_1[0x4d] = (int)local_10._4_2_;
        }
        else {
          iVar6 = __ftol();
          param_1[0x4c] = iVar6;
          iVar6 = __ftol();
          dVar3 = local_10;
          param_1[0x4d] = iVar6;
          local_10._6_2_ = SUB82(dVar3,6);
          local_10._0_6_ =
               CONCAT24((short)param_1[0x4d],CONCAT22((short)param_1[0x4c],(short)local_10));
        }
        if ((uVar9 & 8) == 0) {
          piVar5 = (int *)FUN_005e1340(param_1[0x4c],param_1[0x4d]);
        }
        else {
          piVar5 = (int *)param_1[0x3e];
        }
        if ((piVar5 != (int *)0x0) && (param_1[0x53] == 0)) {
          FUN_005b5bb0((int)&local_10 + 2,(int)&local_10 + 4);
          (**(code **)(*piVar5 + 0x34))(&local_10);
        }
        break;
      default:
        FUN_005b5bb0((int)&local_10 + 2,(int)&local_10 + 4);
        if (((*(byte *)(param_1 + 0x49) & 0x60) == 0) && ((short)local_10 == 0x100)) {
          fVar11 = (float10)thunk_FUN_00603580();
          *(double *)(param_1 + 0x5e) = (double)fVar11;
          if (local_10._6_2_ == 0x13) {
            uVar9 = param_1[0x53];
            param_1[0x53] = uVar9 ^ 1;
            if ((uVar9 ^ 1) == 0) {
              FUN_004e1230(1);
              fVar11 = (float10)thunk_FUN_00603580();
              *(double *)(param_1 + 0x5a) = (double)(fVar11 - (float10)*(double *)(param_1 + 0x5a));
            }
            else {
              FUN_004e1230(0);
              fVar11 = (float10)thunk_FUN_00603580();
              *(double *)(param_1 + 0x5a) = (double)fVar11;
            }
          }
          else if (param_1[0x53] != 0) {
            (**(code **)(*param_1 + 0xbc))((int)local_10._6_2_);
          }
        }
        if (((short)local_10 == 0x104) && (local_10._6_2_ == 0x73)) {
          (**(code **)(*param_1 + 0xb4))();
        }
        (**(code **)(*param_1 + 0xc0))(&local_10);
      }
    }
    if ((*(byte *)(param_1[0x3e] + 0x10) & 4) != 0) {
      uVar2 = *(undefined4 *)(param_1[0x3f] + 0xc);
      FUN_005b62a0();
      if ((*(byte *)(param_1 + 0x49) & 8) == 0) {
        iVar10 = FUN_005e1340(param_1[0x4c],param_1[0x4d]);
        if (iVar10 == 0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = *(undefined4 **)(iVar10 + 0x34);
        }
      }
      else {
        puVar7 = *(undefined4 **)(param_1[0x3e] + 0x34);
      }
      if ((*(byte *)(param_1 + 0x49) & 0x20) == 0) {
        if (puVar7 == (undefined4 *)0x0) {
          FUN_005b5830();
          iVar10 = param_1[0x4e];
          iVar6 = param_1[0x4c];
          if (iVar10 < 4) {
            FUN_005b7390(uVar2,param_1[0x4d],iVar6 - iVar10,iVar10 + iVar6,5,0);
            FUN_005b75d0(uVar2,param_1[0x4c],param_1[0x4d] - param_1[0x4e],
                         param_1[0x4e] + param_1[0x4d],5,0);
            FUN_005b5840();
          }
          else {
            FUN_005b7390(uVar2,param_1[0x4d] + 1,iVar6 - iVar10,iVar10 + 1 + iVar6,5,0);
            FUN_005b7390(uVar2,param_1[0x4d],param_1[0x4c] - param_1[0x4e],
                         param_1[0x4e] + 1 + param_1[0x4c],5,0);
            FUN_005b75d0(uVar2,param_1[0x4c] + 1,param_1[0x4d] - param_1[0x4e],
                         param_1[0x4e] + 1 + param_1[0x4d],5,0);
            FUN_005b75d0(uVar2,param_1[0x4c],param_1[0x4d] - param_1[0x4e],
                         param_1[0x4e] + 1 + param_1[0x4d],5,0);
            FUN_005b5840();
          }
        }
        else {
          FUN_005b8030(uVar2,param_1[0x4c] - puVar7[1],param_1[0x4d] - puVar7[2],*puVar7,0);
        }
      }
    }
  }
  if ((DAT_007206c8 != 0) &&
     (pcVar4 = s_END_FRAME_00682060, cVar1 = s_END_FRAME_00682060[0],
     DAT_0071d774 != (undefined4 *)0x0)) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < (int)DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *(char *)((int)DAT_0071d774 + DAT_0071d778) = cVar1;
      cVar1 = *pcVar4;
    }
  }
  if (((byte)DAT_00701dec & 0x80) != 0) {
    FUN_005d7ce0(param_1[0x4a]);
  }
  fVar11 = (float10)thunk_FUN_00603580();
  local_10 = (double)fVar11;
  if ((*(byte *)(param_1 + 0x49) & 0x20) == 0) {
    FUN_005d7f70();
  }
  fVar11 = (float10)thunk_FUN_00603580();
  _DAT_007206ac = (float)(fVar11 - (float10)local_10);
  if (param_1[0x31] != param_1[0x30]) {
    do {
      FUN_005db0f0(param_1[param_1[0x31] + 0x32]);
      iVar10 = (param_1[0x31] + 1) % 10;
      param_1[0x31] = iVar10;
    } while (iVar10 != param_1[0x30]);
  }
  if ((param_1[0x40] != param_1[0x47]) || (param_1[0x41] != param_1[0x48])) {
    FUN_005e11e0(param_1[0x47],param_1[0x48],param_1[0x42],param_1[0x43]);
  }
  return;
}

