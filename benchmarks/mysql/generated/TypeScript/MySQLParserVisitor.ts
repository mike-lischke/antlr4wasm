// Generated from MySQLParser.g4 by ANTLR 4.13.0

/*
 * Copyright (c) 2020, 2023, Oracle and/or its affiliates.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2.0,
 * as published by the Free Software Foundation.
 *
 * This program is also distributed with certain software (including
 * but not limited to OpenSSL) that is licensed under separate terms, as
 * designated in a particular file or component or in included license
 * documentation. The authors of MySQL hereby grant you an additional
 * permission to link the program and your derivative works with the
 * separately licensed software that they have included with MySQL.
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See
 * the GNU General Public License, version 2.0, for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 */

/* eslint-disable @typescript-eslint/no-unused-vars */
/* eslint-disable no-useless-escape, no-lone-blocks */

/* cspell: disable */

import { SqlMode } from "../../MySQLRecognizerCommon.js";


import { ParseTreeVisitor } from "src/antlr4-runtime.js";

import { QueryContext } from "./MySQLParser";
import { SimpleStatementContext } from "./MySQLParser";
import { AlterStatementContext } from "./MySQLParser";
import { AlterDatabaseContext } from "./MySQLParser";
import { AlterDatabaseOptionContext } from "./MySQLParser";
import { AlterEventContext } from "./MySQLParser";
import { AlterLogfileGroupContext } from "./MySQLParser";
import { AlterLogfileGroupOptionsContext } from "./MySQLParser";
import { AlterLogfileGroupOptionContext } from "./MySQLParser";
import { AlterServerContext } from "./MySQLParser";
import { AlterTableContext } from "./MySQLParser";
import { AlterTableActionsContext } from "./MySQLParser";
import { AlterCommandListContext } from "./MySQLParser";
import { AlterCommandsModifierListContext } from "./MySQLParser";
import { StandaloneAlterCommandsContext } from "./MySQLParser";
import { AlterPartitionContext } from "./MySQLParser";
import { AlterListContext } from "./MySQLParser";
import { AlterCommandsModifierContext } from "./MySQLParser";
import { AlterListItemContext } from "./MySQLParser";
import { PlaceContext } from "./MySQLParser";
import { RestrictContext } from "./MySQLParser";
import { AlterOrderListContext } from "./MySQLParser";
import { AlterAlgorithmOptionContext } from "./MySQLParser";
import { AlterLockOptionContext } from "./MySQLParser";
import { IndexLockAndAlgorithmContext } from "./MySQLParser";
import { WithValidationContext } from "./MySQLParser";
import { RemovePartitioningContext } from "./MySQLParser";
import { AllOrPartitionNameListContext } from "./MySQLParser";
import { AlterTablespaceContext } from "./MySQLParser";
import { AlterUndoTablespaceContext } from "./MySQLParser";
import { UndoTableSpaceOptionsContext } from "./MySQLParser";
import { UndoTableSpaceOptionContext } from "./MySQLParser";
import { AlterTablespaceOptionsContext } from "./MySQLParser";
import { AlterTablespaceOptionContext } from "./MySQLParser";
import { ChangeTablespaceOptionContext } from "./MySQLParser";
import { AlterViewContext } from "./MySQLParser";
import { ViewTailContext } from "./MySQLParser";
import { ViewQueryBlockContext } from "./MySQLParser";
import { ViewCheckOptionContext } from "./MySQLParser";
import { AlterInstanceStatementContext } from "./MySQLParser";
import { CreateStatementContext } from "./MySQLParser";
import { CreateDatabaseContext } from "./MySQLParser";
import { CreateDatabaseOptionContext } from "./MySQLParser";
import { CreateTableContext } from "./MySQLParser";
import { TableElementListContext } from "./MySQLParser";
import { TableElementContext } from "./MySQLParser";
import { DuplicateAsQeContext } from "./MySQLParser";
import { AsCreateQueryExpressionContext } from "./MySQLParser";
import { QueryExpressionOrParensContext } from "./MySQLParser";
import { QueryExpressionWithOptLockingClausesContext } from "./MySQLParser";
import { CreateRoutineContext } from "./MySQLParser";
import { CreateProcedureContext } from "./MySQLParser";
import { CreateFunctionContext } from "./MySQLParser";
import { CreateUdfContext } from "./MySQLParser";
import { RoutineCreateOptionContext } from "./MySQLParser";
import { RoutineAlterOptionsContext } from "./MySQLParser";
import { RoutineOptionContext } from "./MySQLParser";
import { CreateIndexContext } from "./MySQLParser";
import { IndexNameAndTypeContext } from "./MySQLParser";
import { CreateIndexTargetContext } from "./MySQLParser";
import { CreateLogfileGroupContext } from "./MySQLParser";
import { LogfileGroupOptionsContext } from "./MySQLParser";
import { LogfileGroupOptionContext } from "./MySQLParser";
import { CreateServerContext } from "./MySQLParser";
import { ServerOptionsContext } from "./MySQLParser";
import { ServerOptionContext } from "./MySQLParser";
import { CreateTablespaceContext } from "./MySQLParser";
import { CreateUndoTablespaceContext } from "./MySQLParser";
import { TsDataFileNameContext } from "./MySQLParser";
import { TsDataFileContext } from "./MySQLParser";
import { TablespaceOptionsContext } from "./MySQLParser";
import { TablespaceOptionContext } from "./MySQLParser";
import { TsOptionInitialSizeContext } from "./MySQLParser";
import { TsOptionUndoRedoBufferSizeContext } from "./MySQLParser";
import { TsOptionAutoextendSizeContext } from "./MySQLParser";
import { TsOptionMaxSizeContext } from "./MySQLParser";
import { TsOptionExtentSizeContext } from "./MySQLParser";
import { TsOptionNodegroupContext } from "./MySQLParser";
import { TsOptionEngineContext } from "./MySQLParser";
import { TsOptionWaitContext } from "./MySQLParser";
import { TsOptionCommentContext } from "./MySQLParser";
import { TsOptionFileblockSizeContext } from "./MySQLParser";
import { TsOptionEncryptionContext } from "./MySQLParser";
import { TsOptionEngineAttributeContext } from "./MySQLParser";
import { CreateViewContext } from "./MySQLParser";
import { ViewReplaceOrAlgorithmContext } from "./MySQLParser";
import { ViewAlgorithmContext } from "./MySQLParser";
import { ViewSuidContext } from "./MySQLParser";
import { CreateTriggerContext } from "./MySQLParser";
import { TriggerFollowsPrecedesClauseContext } from "./MySQLParser";
import { CreateEventContext } from "./MySQLParser";
import { CreateRoleContext } from "./MySQLParser";
import { CreateSpatialReferenceContext } from "./MySQLParser";
import { SrsAttributeContext } from "./MySQLParser";
import { DropStatementContext } from "./MySQLParser";
import { DropDatabaseContext } from "./MySQLParser";
import { DropEventContext } from "./MySQLParser";
import { DropFunctionContext } from "./MySQLParser";
import { DropProcedureContext } from "./MySQLParser";
import { DropIndexContext } from "./MySQLParser";
import { DropLogfileGroupContext } from "./MySQLParser";
import { DropLogfileGroupOptionContext } from "./MySQLParser";
import { DropServerContext } from "./MySQLParser";
import { DropTableContext } from "./MySQLParser";
import { DropTableSpaceContext } from "./MySQLParser";
import { DropTriggerContext } from "./MySQLParser";
import { DropViewContext } from "./MySQLParser";
import { DropRoleContext } from "./MySQLParser";
import { DropSpatialReferenceContext } from "./MySQLParser";
import { DropUndoTablespaceContext } from "./MySQLParser";
import { RenameTableStatementContext } from "./MySQLParser";
import { RenamePairContext } from "./MySQLParser";
import { TruncateTableStatementContext } from "./MySQLParser";
import { ImportStatementContext } from "./MySQLParser";
import { CallStatementContext } from "./MySQLParser";
import { DeleteStatementContext } from "./MySQLParser";
import { PartitionDeleteContext } from "./MySQLParser";
import { DeleteStatementOptionContext } from "./MySQLParser";
import { DoStatementContext } from "./MySQLParser";
import { HandlerStatementContext } from "./MySQLParser";
import { HandlerReadOrScanContext } from "./MySQLParser";
import { InsertStatementContext } from "./MySQLParser";
import { InsertLockOptionContext } from "./MySQLParser";
import { InsertFromConstructorContext } from "./MySQLParser";
import { FieldsContext } from "./MySQLParser";
import { InsertValuesContext } from "./MySQLParser";
import { InsertQueryExpressionContext } from "./MySQLParser";
import { ValueListContext } from "./MySQLParser";
import { ValuesContext } from "./MySQLParser";
import { ValuesReferenceContext } from "./MySQLParser";
import { InsertUpdateListContext } from "./MySQLParser";
import { LoadStatementContext } from "./MySQLParser";
import { DataOrXmlContext } from "./MySQLParser";
import { XmlRowsIdentifiedByContext } from "./MySQLParser";
import { LoadDataFileTailContext } from "./MySQLParser";
import { LoadDataFileTargetListContext } from "./MySQLParser";
import { FieldOrVariableListContext } from "./MySQLParser";
import { ReplaceStatementContext } from "./MySQLParser";
import { SelectStatementContext } from "./MySQLParser";
import { SelectStatementWithIntoContext } from "./MySQLParser";
import { QueryExpressionContext } from "./MySQLParser";
import { QueryExpressionBodyContext } from "./MySQLParser";
import { QueryExpressionParensContext } from "./MySQLParser";
import { QueryPrimaryContext } from "./MySQLParser";
import { QuerySpecificationContext } from "./MySQLParser";
import { SubqueryContext } from "./MySQLParser";
import { QuerySpecOptionContext } from "./MySQLParser";
import { LimitClauseContext } from "./MySQLParser";
import { SimpleLimitClauseContext } from "./MySQLParser";
import { LimitOptionsContext } from "./MySQLParser";
import { LimitOptionContext } from "./MySQLParser";
import { IntoClauseContext } from "./MySQLParser";
import { ProcedureAnalyseClauseContext } from "./MySQLParser";
import { HavingClauseContext } from "./MySQLParser";
import { WindowClauseContext } from "./MySQLParser";
import { WindowDefinitionContext } from "./MySQLParser";
import { WindowSpecContext } from "./MySQLParser";
import { WindowSpecDetailsContext } from "./MySQLParser";
import { WindowFrameClauseContext } from "./MySQLParser";
import { WindowFrameUnitsContext } from "./MySQLParser";
import { WindowFrameExtentContext } from "./MySQLParser";
import { WindowFrameStartContext } from "./MySQLParser";
import { WindowFrameBetweenContext } from "./MySQLParser";
import { WindowFrameBoundContext } from "./MySQLParser";
import { WindowFrameExclusionContext } from "./MySQLParser";
import { WithClauseContext } from "./MySQLParser";
import { CommonTableExpressionContext } from "./MySQLParser";
import { GroupByClauseContext } from "./MySQLParser";
import { OlapOptionContext } from "./MySQLParser";
import { OrderClauseContext } from "./MySQLParser";
import { DirectionContext } from "./MySQLParser";
import { FromClauseContext } from "./MySQLParser";
import { TableReferenceListContext } from "./MySQLParser";
import { TableValueConstructorContext } from "./MySQLParser";
import { ExplicitTableContext } from "./MySQLParser";
import { RowValueExplicitContext } from "./MySQLParser";
import { SelectOptionContext } from "./MySQLParser";
import { LockingClauseListContext } from "./MySQLParser";
import { LockingClauseContext } from "./MySQLParser";
import { LockStrenghContext } from "./MySQLParser";
import { LockedRowActionContext } from "./MySQLParser";
import { SelectItemListContext } from "./MySQLParser";
import { SelectItemContext } from "./MySQLParser";
import { SelectAliasContext } from "./MySQLParser";
import { WhereClauseContext } from "./MySQLParser";
import { TableReferenceContext } from "./MySQLParser";
import { EscapedTableReferenceContext } from "./MySQLParser";
import { JoinedTableContext } from "./MySQLParser";
import { NaturalJoinTypeContext } from "./MySQLParser";
import { InnerJoinTypeContext } from "./MySQLParser";
import { OuterJoinTypeContext } from "./MySQLParser";
import { TableFactorContext } from "./MySQLParser";
import { SingleTableContext } from "./MySQLParser";
import { SingleTableParensContext } from "./MySQLParser";
import { DerivedTableContext } from "./MySQLParser";
import { TableReferenceListParensContext } from "./MySQLParser";
import { TableFunctionContext } from "./MySQLParser";
import { ColumnsClauseContext } from "./MySQLParser";
import { JtColumnContext } from "./MySQLParser";
import { OnEmptyOrErrorContext } from "./MySQLParser";
import { OnEmptyOrErrorJsonTableContext } from "./MySQLParser";
import { OnEmptyContext } from "./MySQLParser";
import { OnErrorContext } from "./MySQLParser";
import { JsonOnResponseContext } from "./MySQLParser";
import { UnionOptionContext } from "./MySQLParser";
import { TableAliasContext } from "./MySQLParser";
import { IndexHintListContext } from "./MySQLParser";
import { IndexHintContext } from "./MySQLParser";
import { IndexHintTypeContext } from "./MySQLParser";
import { KeyOrIndexContext } from "./MySQLParser";
import { ConstraintKeyTypeContext } from "./MySQLParser";
import { IndexHintClauseContext } from "./MySQLParser";
import { IndexListContext } from "./MySQLParser";
import { IndexListElementContext } from "./MySQLParser";
import { UpdateStatementContext } from "./MySQLParser";
import { TransactionOrLockingStatementContext } from "./MySQLParser";
import { TransactionStatementContext } from "./MySQLParser";
import { BeginWorkContext } from "./MySQLParser";
import { StartTransactionOptionListContext } from "./MySQLParser";
import { SavepointStatementContext } from "./MySQLParser";
import { LockStatementContext } from "./MySQLParser";
import { LockItemContext } from "./MySQLParser";
import { LockOptionContext } from "./MySQLParser";
import { XaStatementContext } from "./MySQLParser";
import { XaConvertContext } from "./MySQLParser";
import { XidContext } from "./MySQLParser";
import { ReplicationStatementContext } from "./MySQLParser";
import { ResetOptionContext } from "./MySQLParser";
import { SourceResetOptionsContext } from "./MySQLParser";
import { ReplicationLoadContext } from "./MySQLParser";
import { ChangeReplicationSourceContext } from "./MySQLParser";
import { ChangeSourceContext } from "./MySQLParser";
import { SourceDefinitionsContext } from "./MySQLParser";
import { SourceDefinitionContext } from "./MySQLParser";
import { ChangeReplicationSourceAutoPositionContext } from "./MySQLParser";
import { ChangeReplicationSourceHostContext } from "./MySQLParser";
import { ChangeReplicationSourceBindContext } from "./MySQLParser";
import { ChangeReplicationSourceUserContext } from "./MySQLParser";
import { ChangeReplicationSourcePasswordContext } from "./MySQLParser";
import { ChangeReplicationSourcePortContext } from "./MySQLParser";
import { ChangeReplicationSourceConnectRetryContext } from "./MySQLParser";
import { ChangeReplicationSourceRetryCountContext } from "./MySQLParser";
import { ChangeReplicationSourceDelayContext } from "./MySQLParser";
import { ChangeReplicationSourceSSLContext } from "./MySQLParser";
import { ChangeReplicationSourceSSLCAContext } from "./MySQLParser";
import { ChangeReplicationSourceSSLCApathContext } from "./MySQLParser";
import { ChangeReplicationSourceSSLCipherContext } from "./MySQLParser";
import { ChangeReplicationSourceSSLCLRContext } from "./MySQLParser";
import { ChangeReplicationSourceSSLCLRpathContext } from "./MySQLParser";
import { ChangeReplicationSourceSSLKeyContext } from "./MySQLParser";
import { ChangeReplicationSourceSSLVerifyServerCertContext } from "./MySQLParser";
import { ChangeReplicationSourceTLSVersionContext } from "./MySQLParser";
import { ChangeReplicationSourceTLSCiphersuitesContext } from "./MySQLParser";
import { ChangeReplicationSourceSSLCertContext } from "./MySQLParser";
import { ChangeReplicationSourcePublicKeyContext } from "./MySQLParser";
import { ChangeReplicationSourceGetSourcePublicKeyContext } from "./MySQLParser";
import { ChangeReplicationSourceHeartbeatPeriodContext } from "./MySQLParser";
import { ChangeReplicationSourceCompressionAlgorithmContext } from "./MySQLParser";
import { ChangeReplicationSourceZstdCompressionLevelContext } from "./MySQLParser";
import { PrivilegeCheckDefContext } from "./MySQLParser";
import { TablePrimaryKeyCheckDefContext } from "./MySQLParser";
import { AssignGtidsToAnonymousTransactionsDefinitionContext } from "./MySQLParser";
import { SourceTlsCiphersuitesDefContext } from "./MySQLParser";
import { SourceFileDefContext } from "./MySQLParser";
import { SourceLogFileContext } from "./MySQLParser";
import { SourceLogPosContext } from "./MySQLParser";
import { ServerIdListContext } from "./MySQLParser";
import { ChangeReplicationContext } from "./MySQLParser";
import { FilterDefinitionContext } from "./MySQLParser";
import { FilterDbListContext } from "./MySQLParser";
import { FilterTableListContext } from "./MySQLParser";
import { FilterStringListContext } from "./MySQLParser";
import { FilterWildDbTableStringContext } from "./MySQLParser";
import { FilterDbPairListContext } from "./MySQLParser";
import { StartReplicaStatementContext } from "./MySQLParser";
import { StopReplicaStatementContext } from "./MySQLParser";
import { ReplicaUntilContext } from "./MySQLParser";
import { UserOptionContext } from "./MySQLParser";
import { PasswordOptionContext } from "./MySQLParser";
import { DefaultAuthOptionContext } from "./MySQLParser";
import { PluginDirOptionContext } from "./MySQLParser";
import { ReplicaThreadOptionsContext } from "./MySQLParser";
import { ReplicaThreadOptionContext } from "./MySQLParser";
import { GroupReplicationContext } from "./MySQLParser";
import { GroupReplicationStartOptionsContext } from "./MySQLParser";
import { GroupReplicationStartOptionContext } from "./MySQLParser";
import { GroupReplicationUserContext } from "./MySQLParser";
import { GroupReplicationPasswordContext } from "./MySQLParser";
import { GroupReplicationPluginAuthContext } from "./MySQLParser";
import { ReplicaContext } from "./MySQLParser";
import { PreparedStatementContext } from "./MySQLParser";
import { ExecuteStatementContext } from "./MySQLParser";
import { ExecuteVarListContext } from "./MySQLParser";
import { CloneStatementContext } from "./MySQLParser";
import { DataDirSSLContext } from "./MySQLParser";
import { SslContext } from "./MySQLParser";
import { AccountManagementStatementContext } from "./MySQLParser";
import { AlterUserStatementContext } from "./MySQLParser";
import { AlterUserListContext } from "./MySQLParser";
import { AlterUserContext } from "./MySQLParser";
import { OldAlterUserContext } from "./MySQLParser";
import { UserFunctionContext } from "./MySQLParser";
import { CreateUserStatementContext } from "./MySQLParser";
import { CreateUserTailContext } from "./MySQLParser";
import { UserAttributesContext } from "./MySQLParser";
import { DefaultRoleClauseContext } from "./MySQLParser";
import { RequireClauseContext } from "./MySQLParser";
import { ConnectOptionsContext } from "./MySQLParser";
import { AccountLockPasswordExpireOptionsContext } from "./MySQLParser";
import { UserAttributeContext } from "./MySQLParser";
import { DropUserStatementContext } from "./MySQLParser";
import { GrantStatementContext } from "./MySQLParser";
import { GrantTargetListContext } from "./MySQLParser";
import { GrantOptionsContext } from "./MySQLParser";
import { ExceptRoleListContext } from "./MySQLParser";
import { WithRolesContext } from "./MySQLParser";
import { GrantAsContext } from "./MySQLParser";
import { VersionedRequireClauseContext } from "./MySQLParser";
import { RenameUserStatementContext } from "./MySQLParser";
import { RevokeStatementContext } from "./MySQLParser";
import { AclTypeContext } from "./MySQLParser";
import { RoleOrPrivilegesListContext } from "./MySQLParser";
import { RoleOrPrivilegeContext } from "./MySQLParser";
import { GrantIdentifierContext } from "./MySQLParser";
import { RequireListContext } from "./MySQLParser";
import { RequireListElementContext } from "./MySQLParser";
import { GrantOptionContext } from "./MySQLParser";
import { SetRoleStatementContext } from "./MySQLParser";
import { RoleListContext } from "./MySQLParser";
import { RoleContext } from "./MySQLParser";
import { TableAdministrationStatementContext } from "./MySQLParser";
import { HistogramContext } from "./MySQLParser";
import { CheckOptionContext } from "./MySQLParser";
import { RepairTypeContext } from "./MySQLParser";
import { InstallUninstallStatementContext } from "./MySQLParser";
import { SetStatementContext } from "./MySQLParser";
import { StartOptionValueListContext } from "./MySQLParser";
import { TransactionCharacteristicsContext } from "./MySQLParser";
import { TransactionAccessModeContext } from "./MySQLParser";
import { IsolationLevelContext } from "./MySQLParser";
import { OptionValueListContinuedContext } from "./MySQLParser";
import { OptionValueNoOptionTypeContext } from "./MySQLParser";
import { OptionValueContext } from "./MySQLParser";
import { SetSystemVariableContext } from "./MySQLParser";
import { StartOptionValueListFollowingOptionTypeContext } from "./MySQLParser";
import { OptionValueFollowingOptionTypeContext } from "./MySQLParser";
import { SetExprOrDefaultContext } from "./MySQLParser";
import { ShowDatabasesStatementContext } from "./MySQLParser";
import { ShowTablesStatementContext } from "./MySQLParser";
import { ShowTriggersStatementContext } from "./MySQLParser";
import { ShowEventsStatementContext } from "./MySQLParser";
import { ShowTableStatusStatementContext } from "./MySQLParser";
import { ShowOpenTablesStatementContext } from "./MySQLParser";
import { ShowPluginsStatementContext } from "./MySQLParser";
import { ShowEngineLogsStatementContext } from "./MySQLParser";
import { ShowEngineMutexStatementContext } from "./MySQLParser";
import { ShowEngineStatusStatementContext } from "./MySQLParser";
import { ShowColumnsStatementContext } from "./MySQLParser";
import { ShowBinaryLogsStatementContext } from "./MySQLParser";
import { ShowReplicasStatementContext } from "./MySQLParser";
import { ShowBinlogEventsStatementContext } from "./MySQLParser";
import { ShowRelaylogEventsStatementContext } from "./MySQLParser";
import { ShowKeysStatementContext } from "./MySQLParser";
import { ShowEnginesStatementContext } from "./MySQLParser";
import { ShowCountWarningsStatementContext } from "./MySQLParser";
import { ShowCountErrorsStatementContext } from "./MySQLParser";
import { ShowWarningsStatementContext } from "./MySQLParser";
import { ShowErrorsStatementContext } from "./MySQLParser";
import { ShowProfilesStatementContext } from "./MySQLParser";
import { ShowProfileStatementContext } from "./MySQLParser";
import { ShowStatusStatementContext } from "./MySQLParser";
import { ShowProcessListStatementContext } from "./MySQLParser";
import { ShowVariablesStatementContext } from "./MySQLParser";
import { ShowCharacterSetStatementContext } from "./MySQLParser";
import { ShowCollationStatementContext } from "./MySQLParser";
import { ShowPrivilegesStatementContext } from "./MySQLParser";
import { ShowGrantsStatementContext } from "./MySQLParser";
import { ShowCreateDatabaseStatementContext } from "./MySQLParser";
import { ShowCreateTableStatementContext } from "./MySQLParser";
import { ShowCreateViewStatementContext } from "./MySQLParser";
import { ShowMasterStatusStatementContext } from "./MySQLParser";
import { ShowReplicaStatusStatementContext } from "./MySQLParser";
import { ShowCreateProcedureStatementContext } from "./MySQLParser";
import { ShowCreateFunctionStatementContext } from "./MySQLParser";
import { ShowCreateTriggerStatementContext } from "./MySQLParser";
import { ShowCreateProcedureStatusStatementContext } from "./MySQLParser";
import { ShowCreateFunctionStatusStatementContext } from "./MySQLParser";
import { ShowCreateProcedureCodeStatementContext } from "./MySQLParser";
import { ShowCreateFunctionCodeStatementContext } from "./MySQLParser";
import { ShowCreateEventStatementContext } from "./MySQLParser";
import { ShowCreateUserStatementContext } from "./MySQLParser";
import { ShowCommandTypeContext } from "./MySQLParser";
import { EngineOrAllContext } from "./MySQLParser";
import { FromOrInContext } from "./MySQLParser";
import { InDbContext } from "./MySQLParser";
import { ProfileDefinitionsContext } from "./MySQLParser";
import { ProfileDefinitionContext } from "./MySQLParser";
import { OtherAdministrativeStatementContext } from "./MySQLParser";
import { KeyCacheListOrPartsContext } from "./MySQLParser";
import { KeyCacheListContext } from "./MySQLParser";
import { AssignToKeycacheContext } from "./MySQLParser";
import { AssignToKeycachePartitionContext } from "./MySQLParser";
import { CacheKeyListContext } from "./MySQLParser";
import { KeyUsageElementContext } from "./MySQLParser";
import { KeyUsageListContext } from "./MySQLParser";
import { FlushOptionContext } from "./MySQLParser";
import { LogTypeContext } from "./MySQLParser";
import { FlushTablesContext } from "./MySQLParser";
import { FlushTablesOptionsContext } from "./MySQLParser";
import { PreloadTailContext } from "./MySQLParser";
import { PreloadListContext } from "./MySQLParser";
import { PreloadKeysContext } from "./MySQLParser";
import { AdminPartitionContext } from "./MySQLParser";
import { ResourceGroupManagementContext } from "./MySQLParser";
import { CreateResourceGroupContext } from "./MySQLParser";
import { ResourceGroupVcpuListContext } from "./MySQLParser";
import { VcpuNumOrRangeContext } from "./MySQLParser";
import { ResourceGroupPriorityContext } from "./MySQLParser";
import { ResourceGroupEnableDisableContext } from "./MySQLParser";
import { AlterResourceGroupContext } from "./MySQLParser";
import { SetResourceGroupContext } from "./MySQLParser";
import { ThreadIdListContext } from "./MySQLParser";
import { DropResourceGroupContext } from "./MySQLParser";
import { UtilityStatementContext } from "./MySQLParser";
import { DescribeStatementContext } from "./MySQLParser";
import { ExplainStatementContext } from "./MySQLParser";
import { ExplainableStatementContext } from "./MySQLParser";
import { HelpCommandContext } from "./MySQLParser";
import { UseCommandContext } from "./MySQLParser";
import { RestartServerContext } from "./MySQLParser";
import { ExprOrContext } from "./MySQLParser";
import { ExprNotContext } from "./MySQLParser";
import { ExprIsContext } from "./MySQLParser";
import { ExprAndContext } from "./MySQLParser";
import { ExprXorContext } from "./MySQLParser";
import { PrimaryExprPredicateContext } from "./MySQLParser";
import { PrimaryExprCompareContext } from "./MySQLParser";
import { PrimaryExprAllAnyContext } from "./MySQLParser";
import { PrimaryExprIsNullContext } from "./MySQLParser";
import { CompOpContext } from "./MySQLParser";
import { PredicateContext } from "./MySQLParser";
import { PredicateExprInContext } from "./MySQLParser";
import { PredicateExprBetweenContext } from "./MySQLParser";
import { PredicateExprLikeContext } from "./MySQLParser";
import { PredicateExprRegexContext } from "./MySQLParser";
import { BitExprContext } from "./MySQLParser";
import { SimpleExprConvertContext } from "./MySQLParser";
import { SimpleExprCastContext } from "./MySQLParser";
import { SimpleExprUnaryContext } from "./MySQLParser";
import { SimpleExpressionRValueContext } from "./MySQLParser";
import { SimpleExprOdbcContext } from "./MySQLParser";
import { SimpleExprRuntimeFunctionContext } from "./MySQLParser";
import { SimpleExprFunctionContext } from "./MySQLParser";
import { SimpleExprCollateContext } from "./MySQLParser";
import { SimpleExprMatchContext } from "./MySQLParser";
import { SimpleExprWindowingFunctionContext } from "./MySQLParser";
import { SimpleExprBinaryContext } from "./MySQLParser";
import { SimpleExprColumnRefContext } from "./MySQLParser";
import { SimpleExprParamMarkerContext } from "./MySQLParser";
import { SimpleExprSumContext } from "./MySQLParser";
import { SimpleExprCastTimeContext } from "./MySQLParser";
import { SimpleExprConvertUsingContext } from "./MySQLParser";
import { SimpleExprSubQueryContext } from "./MySQLParser";
import { SimpleExprGroupingOperationContext } from "./MySQLParser";
import { SimpleExprNotContext } from "./MySQLParser";
import { SimpleExprValuesContext } from "./MySQLParser";
import { SimpleExprUserVariableAssignmentContext } from "./MySQLParser";
import { SimpleExprDefaultContext } from "./MySQLParser";
import { SimpleExprListContext } from "./MySQLParser";
import { SimpleExprIntervalContext } from "./MySQLParser";
import { SimpleExprCaseContext } from "./MySQLParser";
import { SimpleExprConcatContext } from "./MySQLParser";
import { SimpleExprLiteralContext } from "./MySQLParser";
import { ArrayCastContext } from "./MySQLParser";
import { JsonOperatorContext } from "./MySQLParser";
import { SumExprContext } from "./MySQLParser";
import { GroupingOperationContext } from "./MySQLParser";
import { WindowFunctionCallContext } from "./MySQLParser";
import { WindowingClauseContext } from "./MySQLParser";
import { LeadLagInfoContext } from "./MySQLParser";
import { StableIntegerContext } from "./MySQLParser";
import { ParamOrVarContext } from "./MySQLParser";
import { NullTreatmentContext } from "./MySQLParser";
import { JsonFunctionContext } from "./MySQLParser";
import { InSumExprContext } from "./MySQLParser";
import { IdentListArgContext } from "./MySQLParser";
import { IdentListContext } from "./MySQLParser";
import { FulltextOptionsContext } from "./MySQLParser";
import { RuntimeFunctionCallContext } from "./MySQLParser";
import { ReturningTypeContext } from "./MySQLParser";
import { GeometryFunctionContext } from "./MySQLParser";
import { TimeFunctionParametersContext } from "./MySQLParser";
import { FractionalPrecisionContext } from "./MySQLParser";
import { WeightStringLevelsContext } from "./MySQLParser";
import { WeightStringLevelListItemContext } from "./MySQLParser";
import { DateTimeTtypeContext } from "./MySQLParser";
import { TrimFunctionContext } from "./MySQLParser";
import { SubstringFunctionContext } from "./MySQLParser";
import { FunctionCallContext } from "./MySQLParser";
import { UdfExprListContext } from "./MySQLParser";
import { UdfExprContext } from "./MySQLParser";
import { UserVariableContext } from "./MySQLParser";
import { InExpressionUserVariableAssignmentContext } from "./MySQLParser";
import { RvalueSystemOrUserVariableContext } from "./MySQLParser";
import { LvalueVariableContext } from "./MySQLParser";
import { RvalueSystemVariableContext } from "./MySQLParser";
import { WhenExpressionContext } from "./MySQLParser";
import { ThenExpressionContext } from "./MySQLParser";
import { ElseExpressionContext } from "./MySQLParser";
import { CastTypeContext } from "./MySQLParser";
import { ExprListContext } from "./MySQLParser";
import { CharsetContext } from "./MySQLParser";
import { NotRuleContext } from "./MySQLParser";
import { Not2RuleContext } from "./MySQLParser";
import { IntervalContext } from "./MySQLParser";
import { IntervalTimeStampContext } from "./MySQLParser";
import { ExprListWithParenthesesContext } from "./MySQLParser";
import { ExprWithParenthesesContext } from "./MySQLParser";
import { SimpleExprWithParenthesesContext } from "./MySQLParser";
import { OrderListContext } from "./MySQLParser";
import { OrderExpressionContext } from "./MySQLParser";
import { GroupListContext } from "./MySQLParser";
import { GroupingExpressionContext } from "./MySQLParser";
import { ChannelContext } from "./MySQLParser";
import { CompoundStatementContext } from "./MySQLParser";
import { ReturnStatementContext } from "./MySQLParser";
import { IfStatementContext } from "./MySQLParser";
import { IfBodyContext } from "./MySQLParser";
import { ThenStatementContext } from "./MySQLParser";
import { CompoundStatementListContext } from "./MySQLParser";
import { CaseStatementContext } from "./MySQLParser";
import { ElseStatementContext } from "./MySQLParser";
import { LabeledBlockContext } from "./MySQLParser";
import { UnlabeledBlockContext } from "./MySQLParser";
import { LabelContext } from "./MySQLParser";
import { BeginEndBlockContext } from "./MySQLParser";
import { LabeledControlContext } from "./MySQLParser";
import { UnlabeledControlContext } from "./MySQLParser";
import { LoopBlockContext } from "./MySQLParser";
import { WhileDoBlockContext } from "./MySQLParser";
import { RepeatUntilBlockContext } from "./MySQLParser";
import { SpDeclarationsContext } from "./MySQLParser";
import { SpDeclarationContext } from "./MySQLParser";
import { VariableDeclarationContext } from "./MySQLParser";
import { ConditionDeclarationContext } from "./MySQLParser";
import { SpConditionContext } from "./MySQLParser";
import { SqlstateContext } from "./MySQLParser";
import { HandlerDeclarationContext } from "./MySQLParser";
import { HandlerConditionContext } from "./MySQLParser";
import { CursorDeclarationContext } from "./MySQLParser";
import { IterateStatementContext } from "./MySQLParser";
import { LeaveStatementContext } from "./MySQLParser";
import { GetDiagnosticsStatementContext } from "./MySQLParser";
import { SignalAllowedExprContext } from "./MySQLParser";
import { StatementInformationItemContext } from "./MySQLParser";
import { ConditionInformationItemContext } from "./MySQLParser";
import { SignalInformationItemNameContext } from "./MySQLParser";
import { SignalStatementContext } from "./MySQLParser";
import { ResignalStatementContext } from "./MySQLParser";
import { SignalInformationItemContext } from "./MySQLParser";
import { CursorOpenContext } from "./MySQLParser";
import { CursorCloseContext } from "./MySQLParser";
import { CursorFetchContext } from "./MySQLParser";
import { ScheduleContext } from "./MySQLParser";
import { ColumnDefinitionContext } from "./MySQLParser";
import { CheckOrReferencesContext } from "./MySQLParser";
import { CheckConstraintContext } from "./MySQLParser";
import { ConstraintEnforcementContext } from "./MySQLParser";
import { TableConstraintDefContext } from "./MySQLParser";
import { ConstraintNameContext } from "./MySQLParser";
import { FieldDefinitionContext } from "./MySQLParser";
import { ColumnAttributeContext } from "./MySQLParser";
import { ColumnFormatContext } from "./MySQLParser";
import { StorageMediaContext } from "./MySQLParser";
import { NowContext } from "./MySQLParser";
import { NowOrSignedLiteralContext } from "./MySQLParser";
import { GcolAttributeContext } from "./MySQLParser";
import { ReferencesContext } from "./MySQLParser";
import { DeleteOptionContext } from "./MySQLParser";
import { KeyListContext } from "./MySQLParser";
import { KeyPartContext } from "./MySQLParser";
import { KeyListWithExpressionContext } from "./MySQLParser";
import { KeyPartOrExpressionContext } from "./MySQLParser";
import { IndexTypeContext } from "./MySQLParser";
import { IndexOptionContext } from "./MySQLParser";
import { CommonIndexOptionContext } from "./MySQLParser";
import { VisibilityContext } from "./MySQLParser";
import { IndexTypeClauseContext } from "./MySQLParser";
import { FulltextIndexOptionContext } from "./MySQLParser";
import { SpatialIndexOptionContext } from "./MySQLParser";
import { DataTypeDefinitionContext } from "./MySQLParser";
import { DataTypeContext } from "./MySQLParser";
import { NcharContext } from "./MySQLParser";
import { RealTypeContext } from "./MySQLParser";
import { FieldLengthContext } from "./MySQLParser";
import { FieldOptionsContext } from "./MySQLParser";
import { CharsetWithOptBinaryContext } from "./MySQLParser";
import { AsciiContext } from "./MySQLParser";
import { UnicodeContext } from "./MySQLParser";
import { WsNumCodepointsContext } from "./MySQLParser";
import { TypeDatetimePrecisionContext } from "./MySQLParser";
import { FunctionDatetimePrecisionContext } from "./MySQLParser";
import { CharsetNameContext } from "./MySQLParser";
import { CollationNameContext } from "./MySQLParser";
import { CreateTableOptionsContext } from "./MySQLParser";
import { CreateTableOptionsEtcContext } from "./MySQLParser";
import { CreatePartitioningEtcContext } from "./MySQLParser";
import { CreateTableOptionsSpaceSeparatedContext } from "./MySQLParser";
import { CreateTableOptionContext } from "./MySQLParser";
import { TernaryOptionContext } from "./MySQLParser";
import { DefaultCollationContext } from "./MySQLParser";
import { DefaultEncryptionContext } from "./MySQLParser";
import { DefaultCharsetContext } from "./MySQLParser";
import { PartitionClauseContext } from "./MySQLParser";
import { PartitionDefKeyContext } from "./MySQLParser";
import { PartitionDefHashContext } from "./MySQLParser";
import { PartitionDefRangeListContext } from "./MySQLParser";
import { SubPartitionsContext } from "./MySQLParser";
import { PartitionKeyAlgorithmContext } from "./MySQLParser";
import { PartitionDefinitionsContext } from "./MySQLParser";
import { PartitionDefinitionContext } from "./MySQLParser";
import { PartitionValuesInContext } from "./MySQLParser";
import { PartitionOptionContext } from "./MySQLParser";
import { SubpartitionDefinitionContext } from "./MySQLParser";
import { PartitionValueItemListParenContext } from "./MySQLParser";
import { PartitionValueItemContext } from "./MySQLParser";
import { DefinerClauseContext } from "./MySQLParser";
import { IfExistsContext } from "./MySQLParser";
import { IfNotExistsContext } from "./MySQLParser";
import { IgnoreUnknownUserContext } from "./MySQLParser";
import { ProcedureParameterContext } from "./MySQLParser";
import { FunctionParameterContext } from "./MySQLParser";
import { CollateContext } from "./MySQLParser";
import { TypeWithOptCollateContext } from "./MySQLParser";
import { SchemaIdentifierPairContext } from "./MySQLParser";
import { ViewRefListContext } from "./MySQLParser";
import { UpdateListContext } from "./MySQLParser";
import { UpdateElementContext } from "./MySQLParser";
import { CharsetClauseContext } from "./MySQLParser";
import { FieldsClauseContext } from "./MySQLParser";
import { FieldTermContext } from "./MySQLParser";
import { LinesClauseContext } from "./MySQLParser";
import { LineTermContext } from "./MySQLParser";
import { UserListContext } from "./MySQLParser";
import { CreateUserListContext } from "./MySQLParser";
import { CreateUserContext } from "./MySQLParser";
import { CreateUserWithMfaContext } from "./MySQLParser";
import { IdentificationContext } from "./MySQLParser";
import { IdentifiedByPasswordContext } from "./MySQLParser";
import { IdentifiedByRandomPasswordContext } from "./MySQLParser";
import { IdentifiedWithPluginContext } from "./MySQLParser";
import { IdentifiedWithPluginAsAuthContext } from "./MySQLParser";
import { IdentifiedWithPluginByPasswordContext } from "./MySQLParser";
import { IdentifiedWithPluginByRandomPasswordContext } from "./MySQLParser";
import { InitialAuthContext } from "./MySQLParser";
import { RetainCurrentPasswordContext } from "./MySQLParser";
import { DiscardOldPasswordContext } from "./MySQLParser";
import { UserRegistrationContext } from "./MySQLParser";
import { FactorContext } from "./MySQLParser";
import { ReplacePasswordContext } from "./MySQLParser";
import { UserIdentifierOrTextContext } from "./MySQLParser";
import { UserContext } from "./MySQLParser";
import { LikeClauseContext } from "./MySQLParser";
import { LikeOrWhereContext } from "./MySQLParser";
import { OnlineOptionContext } from "./MySQLParser";
import { NoWriteToBinLogContext } from "./MySQLParser";
import { UsePartitionContext } from "./MySQLParser";
import { FieldIdentifierContext } from "./MySQLParser";
import { ColumnNameContext } from "./MySQLParser";
import { ColumnInternalRefContext } from "./MySQLParser";
import { ColumnInternalRefListContext } from "./MySQLParser";
import { ColumnRefContext } from "./MySQLParser";
import { InsertIdentifierContext } from "./MySQLParser";
import { IndexNameContext } from "./MySQLParser";
import { IndexRefContext } from "./MySQLParser";
import { TableWildContext } from "./MySQLParser";
import { SchemaNameContext } from "./MySQLParser";
import { SchemaRefContext } from "./MySQLParser";
import { ProcedureNameContext } from "./MySQLParser";
import { ProcedureRefContext } from "./MySQLParser";
import { FunctionNameContext } from "./MySQLParser";
import { FunctionRefContext } from "./MySQLParser";
import { TriggerNameContext } from "./MySQLParser";
import { TriggerRefContext } from "./MySQLParser";
import { ViewNameContext } from "./MySQLParser";
import { ViewRefContext } from "./MySQLParser";
import { TablespaceNameContext } from "./MySQLParser";
import { TablespaceRefContext } from "./MySQLParser";
import { LogfileGroupNameContext } from "./MySQLParser";
import { LogfileGroupRefContext } from "./MySQLParser";
import { EventNameContext } from "./MySQLParser";
import { EventRefContext } from "./MySQLParser";
import { UdfNameContext } from "./MySQLParser";
import { ServerNameContext } from "./MySQLParser";
import { ServerRefContext } from "./MySQLParser";
import { EngineRefContext } from "./MySQLParser";
import { TableNameContext } from "./MySQLParser";
import { FilterTableRefContext } from "./MySQLParser";
import { TableRefWithWildcardContext } from "./MySQLParser";
import { TableRefContext } from "./MySQLParser";
import { TableRefListContext } from "./MySQLParser";
import { TableAliasRefListContext } from "./MySQLParser";
import { ParameterNameContext } from "./MySQLParser";
import { LabelIdentifierContext } from "./MySQLParser";
import { LabelRefContext } from "./MySQLParser";
import { RoleIdentifierContext } from "./MySQLParser";
import { PluginRefContext } from "./MySQLParser";
import { ComponentRefContext } from "./MySQLParser";
import { ResourceGroupRefContext } from "./MySQLParser";
import { WindowNameContext } from "./MySQLParser";
import { PureIdentifierContext } from "./MySQLParser";
import { IdentifierContext } from "./MySQLParser";
import { IdentifierListContext } from "./MySQLParser";
import { IdentifierListWithParenthesesContext } from "./MySQLParser";
import { QualifiedIdentifierContext } from "./MySQLParser";
import { SimpleIdentifierContext } from "./MySQLParser";
import { DotIdentifierContext } from "./MySQLParser";
import { Ulong_numberContext } from "./MySQLParser";
import { Real_ulong_numberContext } from "./MySQLParser";
import { Ulonglong_numberContext } from "./MySQLParser";
import { Real_ulonglong_numberContext } from "./MySQLParser";
import { SignedLiteralContext } from "./MySQLParser";
import { SignedLiteralOrNullContext } from "./MySQLParser";
import { LiteralContext } from "./MySQLParser";
import { LiteralOrNullContext } from "./MySQLParser";
import { NullAsLiteralContext } from "./MySQLParser";
import { StringListContext } from "./MySQLParser";
import { TextStringLiteralContext } from "./MySQLParser";
import { TextStringContext } from "./MySQLParser";
import { TextStringHashContext } from "./MySQLParser";
import { TextLiteralContext } from "./MySQLParser";
import { TextStringNoLinebreakContext } from "./MySQLParser";
import { TextStringLiteralListContext } from "./MySQLParser";
import { NumLiteralContext } from "./MySQLParser";
import { BoolLiteralContext } from "./MySQLParser";
import { NullLiteralContext } from "./MySQLParser";
import { Int64LiteralContext } from "./MySQLParser";
import { TemporalLiteralContext } from "./MySQLParser";
import { FloatOptionsContext } from "./MySQLParser";
import { StandardFloatOptionsContext } from "./MySQLParser";
import { PrecisionContext } from "./MySQLParser";
import { TextOrIdentifierContext } from "./MySQLParser";
import { LValueIdentifierContext } from "./MySQLParser";
import { RoleIdentifierOrTextContext } from "./MySQLParser";
import { SizeNumberContext } from "./MySQLParser";
import { ParenthesesContext } from "./MySQLParser";
import { EqualContext } from "./MySQLParser";
import { OptionTypeContext } from "./MySQLParser";
import { RvalueSystemVariableTypeContext } from "./MySQLParser";
import { SetVarIdentTypeContext } from "./MySQLParser";
import { JsonAttributeContext } from "./MySQLParser";
import { IdentifierKeywordContext } from "./MySQLParser";
import { IdentifierKeywordsAmbiguous1RolesAndLabelsContext } from "./MySQLParser";
import { IdentifierKeywordsAmbiguous2LabelsContext } from "./MySQLParser";
import { LabelKeywordContext } from "./MySQLParser";
import { IdentifierKeywordsAmbiguous3RolesContext } from "./MySQLParser";
import { IdentifierKeywordsUnambiguousContext } from "./MySQLParser";
import { RoleKeywordContext } from "./MySQLParser";
import { LValueKeywordContext } from "./MySQLParser";
import { IdentifierKeywordsAmbiguous4SystemVariablesContext } from "./MySQLParser";
import { RoleOrIdentifierKeywordContext } from "./MySQLParser";
import { RoleOrLabelKeywordContext } from "./MySQLParser";


/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by `MySQLParser`.
 *
 * @param <Result> The return type of the visit operation. Use `void` for
 * operations with no return type.
 */
export default class MySQLParserVisitor<Result> extends ParseTreeVisitor<Result> {
    /**
     * Visit a parse tree produced by `MySQLParser.query`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitQuery?: (ctx: QueryContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.simpleStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleStatement?: (ctx: SimpleStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterStatement?: (ctx: AlterStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterDatabase`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterDatabase?: (ctx: AlterDatabaseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterDatabaseOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterDatabaseOption?: (ctx: AlterDatabaseOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterEvent`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterEvent?: (ctx: AlterEventContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterLogfileGroup`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterLogfileGroup?: (ctx: AlterLogfileGroupContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterLogfileGroupOptions`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterLogfileGroupOptions?: (ctx: AlterLogfileGroupOptionsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterLogfileGroupOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterLogfileGroupOption?: (ctx: AlterLogfileGroupOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterServer`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterServer?: (ctx: AlterServerContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterTable`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterTable?: (ctx: AlterTableContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterTableActions`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterTableActions?: (ctx: AlterTableActionsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterCommandList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterCommandList?: (ctx: AlterCommandListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterCommandsModifierList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterCommandsModifierList?: (ctx: AlterCommandsModifierListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.standaloneAlterCommands`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitStandaloneAlterCommands?: (ctx: StandaloneAlterCommandsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterPartition`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterPartition?: (ctx: AlterPartitionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterList?: (ctx: AlterListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterCommandsModifier`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterCommandsModifier?: (ctx: AlterCommandsModifierContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterListItem`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterListItem?: (ctx: AlterListItemContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.place`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPlace?: (ctx: PlaceContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.restrict`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRestrict?: (ctx: RestrictContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterOrderList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterOrderList?: (ctx: AlterOrderListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterAlgorithmOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterAlgorithmOption?: (ctx: AlterAlgorithmOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterLockOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterLockOption?: (ctx: AlterLockOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.indexLockAndAlgorithm`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIndexLockAndAlgorithm?: (ctx: IndexLockAndAlgorithmContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.withValidation`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitWithValidation?: (ctx: WithValidationContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.removePartitioning`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRemovePartitioning?: (ctx: RemovePartitioningContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.allOrPartitionNameList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAllOrPartitionNameList?: (ctx: AllOrPartitionNameListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterTablespace`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterTablespace?: (ctx: AlterTablespaceContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterUndoTablespace`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterUndoTablespace?: (ctx: AlterUndoTablespaceContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.undoTableSpaceOptions`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUndoTableSpaceOptions?: (ctx: UndoTableSpaceOptionsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.undoTableSpaceOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUndoTableSpaceOption?: (ctx: UndoTableSpaceOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterTablespaceOptions`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterTablespaceOptions?: (ctx: AlterTablespaceOptionsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterTablespaceOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterTablespaceOption?: (ctx: AlterTablespaceOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeTablespaceOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeTablespaceOption?: (ctx: ChangeTablespaceOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterView`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterView?: (ctx: AlterViewContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.viewTail`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitViewTail?: (ctx: ViewTailContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.viewQueryBlock`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitViewQueryBlock?: (ctx: ViewQueryBlockContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.viewCheckOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitViewCheckOption?: (ctx: ViewCheckOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterInstanceStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterInstanceStatement?: (ctx: AlterInstanceStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateStatement?: (ctx: CreateStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createDatabase`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateDatabase?: (ctx: CreateDatabaseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createDatabaseOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateDatabaseOption?: (ctx: CreateDatabaseOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createTable`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateTable?: (ctx: CreateTableContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tableElementList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTableElementList?: (ctx: TableElementListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tableElement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTableElement?: (ctx: TableElementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.duplicateAsQe`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDuplicateAsQe?: (ctx: DuplicateAsQeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.asCreateQueryExpression`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAsCreateQueryExpression?: (ctx: AsCreateQueryExpressionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.queryExpressionOrParens`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitQueryExpressionOrParens?: (ctx: QueryExpressionOrParensContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.queryExpressionWithOptLockingClauses`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitQueryExpressionWithOptLockingClauses?: (ctx: QueryExpressionWithOptLockingClausesContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createRoutine`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateRoutine?: (ctx: CreateRoutineContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createProcedure`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateProcedure?: (ctx: CreateProcedureContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createFunction`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateFunction?: (ctx: CreateFunctionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createUdf`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateUdf?: (ctx: CreateUdfContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.routineCreateOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRoutineCreateOption?: (ctx: RoutineCreateOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.routineAlterOptions`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRoutineAlterOptions?: (ctx: RoutineAlterOptionsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.routineOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRoutineOption?: (ctx: RoutineOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createIndex`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateIndex?: (ctx: CreateIndexContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.indexNameAndType`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIndexNameAndType?: (ctx: IndexNameAndTypeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createIndexTarget`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateIndexTarget?: (ctx: CreateIndexTargetContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createLogfileGroup`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateLogfileGroup?: (ctx: CreateLogfileGroupContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.logfileGroupOptions`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLogfileGroupOptions?: (ctx: LogfileGroupOptionsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.logfileGroupOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLogfileGroupOption?: (ctx: LogfileGroupOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createServer`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateServer?: (ctx: CreateServerContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.serverOptions`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitServerOptions?: (ctx: ServerOptionsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.serverOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitServerOption?: (ctx: ServerOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createTablespace`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateTablespace?: (ctx: CreateTablespaceContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createUndoTablespace`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateUndoTablespace?: (ctx: CreateUndoTablespaceContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tsDataFileName`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTsDataFileName?: (ctx: TsDataFileNameContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tsDataFile`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTsDataFile?: (ctx: TsDataFileContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tablespaceOptions`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTablespaceOptions?: (ctx: TablespaceOptionsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tablespaceOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTablespaceOption?: (ctx: TablespaceOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tsOptionInitialSize`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTsOptionInitialSize?: (ctx: TsOptionInitialSizeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tsOptionUndoRedoBufferSize`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTsOptionUndoRedoBufferSize?: (ctx: TsOptionUndoRedoBufferSizeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tsOptionAutoextendSize`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTsOptionAutoextendSize?: (ctx: TsOptionAutoextendSizeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tsOptionMaxSize`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTsOptionMaxSize?: (ctx: TsOptionMaxSizeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tsOptionExtentSize`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTsOptionExtentSize?: (ctx: TsOptionExtentSizeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tsOptionNodegroup`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTsOptionNodegroup?: (ctx: TsOptionNodegroupContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tsOptionEngine`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTsOptionEngine?: (ctx: TsOptionEngineContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tsOptionWait`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTsOptionWait?: (ctx: TsOptionWaitContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tsOptionComment`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTsOptionComment?: (ctx: TsOptionCommentContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tsOptionFileblockSize`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTsOptionFileblockSize?: (ctx: TsOptionFileblockSizeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tsOptionEncryption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTsOptionEncryption?: (ctx: TsOptionEncryptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tsOptionEngineAttribute`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTsOptionEngineAttribute?: (ctx: TsOptionEngineAttributeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createView`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateView?: (ctx: CreateViewContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.viewReplaceOrAlgorithm`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitViewReplaceOrAlgorithm?: (ctx: ViewReplaceOrAlgorithmContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.viewAlgorithm`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitViewAlgorithm?: (ctx: ViewAlgorithmContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.viewSuid`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitViewSuid?: (ctx: ViewSuidContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createTrigger`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateTrigger?: (ctx: CreateTriggerContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.triggerFollowsPrecedesClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTriggerFollowsPrecedesClause?: (ctx: TriggerFollowsPrecedesClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createEvent`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateEvent?: (ctx: CreateEventContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createRole`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateRole?: (ctx: CreateRoleContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createSpatialReference`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateSpatialReference?: (ctx: CreateSpatialReferenceContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.srsAttribute`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSrsAttribute?: (ctx: SrsAttributeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.dropStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDropStatement?: (ctx: DropStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.dropDatabase`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDropDatabase?: (ctx: DropDatabaseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.dropEvent`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDropEvent?: (ctx: DropEventContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.dropFunction`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDropFunction?: (ctx: DropFunctionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.dropProcedure`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDropProcedure?: (ctx: DropProcedureContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.dropIndex`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDropIndex?: (ctx: DropIndexContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.dropLogfileGroup`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDropLogfileGroup?: (ctx: DropLogfileGroupContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.dropLogfileGroupOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDropLogfileGroupOption?: (ctx: DropLogfileGroupOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.dropServer`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDropServer?: (ctx: DropServerContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.dropTable`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDropTable?: (ctx: DropTableContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.dropTableSpace`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDropTableSpace?: (ctx: DropTableSpaceContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.dropTrigger`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDropTrigger?: (ctx: DropTriggerContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.dropView`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDropView?: (ctx: DropViewContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.dropRole`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDropRole?: (ctx: DropRoleContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.dropSpatialReference`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDropSpatialReference?: (ctx: DropSpatialReferenceContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.dropUndoTablespace`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDropUndoTablespace?: (ctx: DropUndoTablespaceContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.renameTableStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRenameTableStatement?: (ctx: RenameTableStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.renamePair`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRenamePair?: (ctx: RenamePairContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.truncateTableStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTruncateTableStatement?: (ctx: TruncateTableStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.importStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitImportStatement?: (ctx: ImportStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.callStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCallStatement?: (ctx: CallStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.deleteStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDeleteStatement?: (ctx: DeleteStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.partitionDelete`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPartitionDelete?: (ctx: PartitionDeleteContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.deleteStatementOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDeleteStatementOption?: (ctx: DeleteStatementOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.doStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDoStatement?: (ctx: DoStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.handlerStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitHandlerStatement?: (ctx: HandlerStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.handlerReadOrScan`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitHandlerReadOrScan?: (ctx: HandlerReadOrScanContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.insertStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitInsertStatement?: (ctx: InsertStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.insertLockOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitInsertLockOption?: (ctx: InsertLockOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.insertFromConstructor`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitInsertFromConstructor?: (ctx: InsertFromConstructorContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.fields`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFields?: (ctx: FieldsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.insertValues`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitInsertValues?: (ctx: InsertValuesContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.insertQueryExpression`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitInsertQueryExpression?: (ctx: InsertQueryExpressionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.valueList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitValueList?: (ctx: ValueListContext) => Result;
    /**
     * Visit a parse tree produced by the `values`
     * labeled alternative in `MySQLParser.exprexprexprexprexprboolPriboolPriboolPriboolPripredicateOperationspredicateOperationspredicateOperationspredicateOperationssimpleExprsimpleExprsimpleExprsimpleExprsimpleExprsimpleExprsimpleExprsimpleExprsimpleExprsimpleExprsimpleExprsimpleExprsimpleExprsimpleExprsimpleExprsimpleExprsimpleExprsimpleExprsimpleExprsimpleExprsimpleExprsimpleExprsimpleExprsimpleExprsimpleExprsimpleExprsimpleExprpartitionTypeDefpartitionTypeDefpartitionTypeDef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitValues?: (ctx: ValuesContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.valuesReference`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitValuesReference?: (ctx: ValuesReferenceContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.insertUpdateList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitInsertUpdateList?: (ctx: InsertUpdateListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.loadStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLoadStatement?: (ctx: LoadStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.dataOrXml`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDataOrXml?: (ctx: DataOrXmlContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.xmlRowsIdentifiedBy`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitXmlRowsIdentifiedBy?: (ctx: XmlRowsIdentifiedByContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.loadDataFileTail`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLoadDataFileTail?: (ctx: LoadDataFileTailContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.loadDataFileTargetList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLoadDataFileTargetList?: (ctx: LoadDataFileTargetListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.fieldOrVariableList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFieldOrVariableList?: (ctx: FieldOrVariableListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.replaceStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitReplaceStatement?: (ctx: ReplaceStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.selectStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSelectStatement?: (ctx: SelectStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.selectStatementWithInto`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSelectStatementWithInto?: (ctx: SelectStatementWithIntoContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.queryExpression`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitQueryExpression?: (ctx: QueryExpressionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.queryExpressionBody`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitQueryExpressionBody?: (ctx: QueryExpressionBodyContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.queryExpressionParens`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitQueryExpressionParens?: (ctx: QueryExpressionParensContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.queryPrimary`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitQueryPrimary?: (ctx: QueryPrimaryContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.querySpecification`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitQuerySpecification?: (ctx: QuerySpecificationContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.subquery`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSubquery?: (ctx: SubqueryContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.querySpecOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitQuerySpecOption?: (ctx: QuerySpecOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.limitClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLimitClause?: (ctx: LimitClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.simpleLimitClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleLimitClause?: (ctx: SimpleLimitClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.limitOptions`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLimitOptions?: (ctx: LimitOptionsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.limitOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLimitOption?: (ctx: LimitOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.intoClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIntoClause?: (ctx: IntoClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.procedureAnalyseClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitProcedureAnalyseClause?: (ctx: ProcedureAnalyseClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.havingClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitHavingClause?: (ctx: HavingClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.windowClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitWindowClause?: (ctx: WindowClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.windowDefinition`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitWindowDefinition?: (ctx: WindowDefinitionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.windowSpec`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitWindowSpec?: (ctx: WindowSpecContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.windowSpecDetails`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitWindowSpecDetails?: (ctx: WindowSpecDetailsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.windowFrameClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitWindowFrameClause?: (ctx: WindowFrameClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.windowFrameUnits`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitWindowFrameUnits?: (ctx: WindowFrameUnitsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.windowFrameExtent`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitWindowFrameExtent?: (ctx: WindowFrameExtentContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.windowFrameStart`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitWindowFrameStart?: (ctx: WindowFrameStartContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.windowFrameBetween`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitWindowFrameBetween?: (ctx: WindowFrameBetweenContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.windowFrameBound`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitWindowFrameBound?: (ctx: WindowFrameBoundContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.windowFrameExclusion`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitWindowFrameExclusion?: (ctx: WindowFrameExclusionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.withClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitWithClause?: (ctx: WithClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.commonTableExpression`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCommonTableExpression?: (ctx: CommonTableExpressionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.groupByClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitGroupByClause?: (ctx: GroupByClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.olapOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitOlapOption?: (ctx: OlapOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.orderClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitOrderClause?: (ctx: OrderClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.direction`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDirection?: (ctx: DirectionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.fromClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFromClause?: (ctx: FromClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tableReferenceList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTableReferenceList?: (ctx: TableReferenceListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tableValueConstructor`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTableValueConstructor?: (ctx: TableValueConstructorContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.explicitTable`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitExplicitTable?: (ctx: ExplicitTableContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.rowValueExplicit`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRowValueExplicit?: (ctx: RowValueExplicitContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.selectOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSelectOption?: (ctx: SelectOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.lockingClauseList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLockingClauseList?: (ctx: LockingClauseListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.lockingClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLockingClause?: (ctx: LockingClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.lockStrengh`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLockStrengh?: (ctx: LockStrenghContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.lockedRowAction`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLockedRowAction?: (ctx: LockedRowActionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.selectItemList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSelectItemList?: (ctx: SelectItemListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.selectItem`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSelectItem?: (ctx: SelectItemContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.selectAlias`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSelectAlias?: (ctx: SelectAliasContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.whereClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitWhereClause?: (ctx: WhereClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tableReference`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTableReference?: (ctx: TableReferenceContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.escapedTableReference`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitEscapedTableReference?: (ctx: EscapedTableReferenceContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.joinedTable`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitJoinedTable?: (ctx: JoinedTableContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.naturalJoinType`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitNaturalJoinType?: (ctx: NaturalJoinTypeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.innerJoinType`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitInnerJoinType?: (ctx: InnerJoinTypeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.outerJoinType`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitOuterJoinType?: (ctx: OuterJoinTypeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tableFactor`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTableFactor?: (ctx: TableFactorContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.singleTable`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSingleTable?: (ctx: SingleTableContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.singleTableParens`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSingleTableParens?: (ctx: SingleTableParensContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.derivedTable`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDerivedTable?: (ctx: DerivedTableContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tableReferenceListParens`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTableReferenceListParens?: (ctx: TableReferenceListParensContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tableFunction`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTableFunction?: (ctx: TableFunctionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.columnsClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitColumnsClause?: (ctx: ColumnsClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.jtColumn`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitJtColumn?: (ctx: JtColumnContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.onEmptyOrError`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitOnEmptyOrError?: (ctx: OnEmptyOrErrorContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.onEmptyOrErrorJsonTable`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitOnEmptyOrErrorJsonTable?: (ctx: OnEmptyOrErrorJsonTableContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.onEmpty`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitOnEmpty?: (ctx: OnEmptyContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.onError`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitOnError?: (ctx: OnErrorContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.jsonOnResponse`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitJsonOnResponse?: (ctx: JsonOnResponseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.unionOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUnionOption?: (ctx: UnionOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tableAlias`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTableAlias?: (ctx: TableAliasContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.indexHintList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIndexHintList?: (ctx: IndexHintListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.indexHint`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIndexHint?: (ctx: IndexHintContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.indexHintType`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIndexHintType?: (ctx: IndexHintTypeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.keyOrIndex`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitKeyOrIndex?: (ctx: KeyOrIndexContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.constraintKeyType`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitConstraintKeyType?: (ctx: ConstraintKeyTypeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.indexHintClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIndexHintClause?: (ctx: IndexHintClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.indexList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIndexList?: (ctx: IndexListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.indexListElement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIndexListElement?: (ctx: IndexListElementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.updateStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUpdateStatement?: (ctx: UpdateStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.transactionOrLockingStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTransactionOrLockingStatement?: (ctx: TransactionOrLockingStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.transactionStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTransactionStatement?: (ctx: TransactionStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.beginWork`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitBeginWork?: (ctx: BeginWorkContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.startTransactionOptionList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitStartTransactionOptionList?: (ctx: StartTransactionOptionListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.savepointStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSavepointStatement?: (ctx: SavepointStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.lockStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLockStatement?: (ctx: LockStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.lockItem`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLockItem?: (ctx: LockItemContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.lockOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLockOption?: (ctx: LockOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.xaStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitXaStatement?: (ctx: XaStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.xaConvert`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitXaConvert?: (ctx: XaConvertContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.xid`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitXid?: (ctx: XidContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.replicationStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitReplicationStatement?: (ctx: ReplicationStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.resetOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitResetOption?: (ctx: ResetOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.sourceResetOptions`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSourceResetOptions?: (ctx: SourceResetOptionsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.replicationLoad`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitReplicationLoad?: (ctx: ReplicationLoadContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSource`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSource?: (ctx: ChangeReplicationSourceContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeSource`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeSource?: (ctx: ChangeSourceContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.sourceDefinitions`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSourceDefinitions?: (ctx: SourceDefinitionsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.sourceDefinition`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSourceDefinition?: (ctx: SourceDefinitionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSourceAutoPosition`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSourceAutoPosition?: (ctx: ChangeReplicationSourceAutoPositionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSourceHost`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSourceHost?: (ctx: ChangeReplicationSourceHostContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSourceBind`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSourceBind?: (ctx: ChangeReplicationSourceBindContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSourceUser`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSourceUser?: (ctx: ChangeReplicationSourceUserContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSourcePassword`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSourcePassword?: (ctx: ChangeReplicationSourcePasswordContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSourcePort`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSourcePort?: (ctx: ChangeReplicationSourcePortContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSourceConnectRetry`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSourceConnectRetry?: (ctx: ChangeReplicationSourceConnectRetryContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSourceRetryCount`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSourceRetryCount?: (ctx: ChangeReplicationSourceRetryCountContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSourceDelay`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSourceDelay?: (ctx: ChangeReplicationSourceDelayContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSourceSSL`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSourceSSL?: (ctx: ChangeReplicationSourceSSLContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSourceSSLCA`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSourceSSLCA?: (ctx: ChangeReplicationSourceSSLCAContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSourceSSLCApath`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSourceSSLCApath?: (ctx: ChangeReplicationSourceSSLCApathContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSourceSSLCipher`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSourceSSLCipher?: (ctx: ChangeReplicationSourceSSLCipherContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSourceSSLCLR`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSourceSSLCLR?: (ctx: ChangeReplicationSourceSSLCLRContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSourceSSLCLRpath`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSourceSSLCLRpath?: (ctx: ChangeReplicationSourceSSLCLRpathContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSourceSSLKey`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSourceSSLKey?: (ctx: ChangeReplicationSourceSSLKeyContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSourceSSLVerifyServerCert`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSourceSSLVerifyServerCert?: (ctx: ChangeReplicationSourceSSLVerifyServerCertContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSourceTLSVersion`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSourceTLSVersion?: (ctx: ChangeReplicationSourceTLSVersionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSourceTLSCiphersuites`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSourceTLSCiphersuites?: (ctx: ChangeReplicationSourceTLSCiphersuitesContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSourceSSLCert`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSourceSSLCert?: (ctx: ChangeReplicationSourceSSLCertContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSourcePublicKey`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSourcePublicKey?: (ctx: ChangeReplicationSourcePublicKeyContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSourceGetSourcePublicKey`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSourceGetSourcePublicKey?: (ctx: ChangeReplicationSourceGetSourcePublicKeyContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSourceHeartbeatPeriod`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSourceHeartbeatPeriod?: (ctx: ChangeReplicationSourceHeartbeatPeriodContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSourceCompressionAlgorithm`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSourceCompressionAlgorithm?: (ctx: ChangeReplicationSourceCompressionAlgorithmContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplicationSourceZstdCompressionLevel`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplicationSourceZstdCompressionLevel?: (ctx: ChangeReplicationSourceZstdCompressionLevelContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.privilegeCheckDef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPrivilegeCheckDef?: (ctx: PrivilegeCheckDefContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tablePrimaryKeyCheckDef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTablePrimaryKeyCheckDef?: (ctx: TablePrimaryKeyCheckDefContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.assignGtidsToAnonymousTransactionsDefinition`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAssignGtidsToAnonymousTransactionsDefinition?: (ctx: AssignGtidsToAnonymousTransactionsDefinitionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.sourceTlsCiphersuitesDef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSourceTlsCiphersuitesDef?: (ctx: SourceTlsCiphersuitesDefContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.sourceFileDef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSourceFileDef?: (ctx: SourceFileDefContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.sourceLogFile`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSourceLogFile?: (ctx: SourceLogFileContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.sourceLogPos`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSourceLogPos?: (ctx: SourceLogPosContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.serverIdList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitServerIdList?: (ctx: ServerIdListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.changeReplication`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChangeReplication?: (ctx: ChangeReplicationContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.filterDefinition`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFilterDefinition?: (ctx: FilterDefinitionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.filterDbList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFilterDbList?: (ctx: FilterDbListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.filterTableList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFilterTableList?: (ctx: FilterTableListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.filterStringList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFilterStringList?: (ctx: FilterStringListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.filterWildDbTableString`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFilterWildDbTableString?: (ctx: FilterWildDbTableStringContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.filterDbPairList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFilterDbPairList?: (ctx: FilterDbPairListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.startReplicaStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitStartReplicaStatement?: (ctx: StartReplicaStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.stopReplicaStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitStopReplicaStatement?: (ctx: StopReplicaStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.replicaUntil`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitReplicaUntil?: (ctx: ReplicaUntilContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.userOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUserOption?: (ctx: UserOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.passwordOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPasswordOption?: (ctx: PasswordOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.defaultAuthOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDefaultAuthOption?: (ctx: DefaultAuthOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.pluginDirOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPluginDirOption?: (ctx: PluginDirOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.replicaThreadOptions`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitReplicaThreadOptions?: (ctx: ReplicaThreadOptionsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.replicaThreadOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitReplicaThreadOption?: (ctx: ReplicaThreadOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.groupReplication`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitGroupReplication?: (ctx: GroupReplicationContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.groupReplicationStartOptions`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitGroupReplicationStartOptions?: (ctx: GroupReplicationStartOptionsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.groupReplicationStartOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitGroupReplicationStartOption?: (ctx: GroupReplicationStartOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.groupReplicationUser`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitGroupReplicationUser?: (ctx: GroupReplicationUserContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.groupReplicationPassword`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitGroupReplicationPassword?: (ctx: GroupReplicationPasswordContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.groupReplicationPluginAuth`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitGroupReplicationPluginAuth?: (ctx: GroupReplicationPluginAuthContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.replica`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitReplica?: (ctx: ReplicaContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.preparedStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPreparedStatement?: (ctx: PreparedStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.executeStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitExecuteStatement?: (ctx: ExecuteStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.executeVarList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitExecuteVarList?: (ctx: ExecuteVarListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.cloneStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCloneStatement?: (ctx: CloneStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.dataDirSSL`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDataDirSSL?: (ctx: DataDirSSLContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.ssl`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSsl?: (ctx: SslContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.accountManagementStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAccountManagementStatement?: (ctx: AccountManagementStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterUserStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterUserStatement?: (ctx: AlterUserStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterUserList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterUserList?: (ctx: AlterUserListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterUser`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterUser?: (ctx: AlterUserContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.oldAlterUser`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitOldAlterUser?: (ctx: OldAlterUserContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.userFunction`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUserFunction?: (ctx: UserFunctionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createUserStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateUserStatement?: (ctx: CreateUserStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createUserTail`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateUserTail?: (ctx: CreateUserTailContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.userAttributes`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUserAttributes?: (ctx: UserAttributesContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.defaultRoleClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDefaultRoleClause?: (ctx: DefaultRoleClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.requireClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRequireClause?: (ctx: RequireClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.connectOptions`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitConnectOptions?: (ctx: ConnectOptionsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.accountLockPasswordExpireOptions`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAccountLockPasswordExpireOptions?: (ctx: AccountLockPasswordExpireOptionsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.userAttribute`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUserAttribute?: (ctx: UserAttributeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.dropUserStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDropUserStatement?: (ctx: DropUserStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.grantStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitGrantStatement?: (ctx: GrantStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.grantTargetList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitGrantTargetList?: (ctx: GrantTargetListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.grantOptions`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitGrantOptions?: (ctx: GrantOptionsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.exceptRoleList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitExceptRoleList?: (ctx: ExceptRoleListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.withRoles`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitWithRoles?: (ctx: WithRolesContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.grantAs`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitGrantAs?: (ctx: GrantAsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.versionedRequireClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitVersionedRequireClause?: (ctx: VersionedRequireClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.renameUserStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRenameUserStatement?: (ctx: RenameUserStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.revokeStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRevokeStatement?: (ctx: RevokeStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.aclType`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAclType?: (ctx: AclTypeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.roleOrPrivilegesList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRoleOrPrivilegesList?: (ctx: RoleOrPrivilegesListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.roleOrPrivilege`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRoleOrPrivilege?: (ctx: RoleOrPrivilegeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.grantIdentifier`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitGrantIdentifier?: (ctx: GrantIdentifierContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.requireList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRequireList?: (ctx: RequireListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.requireListElement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRequireListElement?: (ctx: RequireListElementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.grantOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitGrantOption?: (ctx: GrantOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.setRoleStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSetRoleStatement?: (ctx: SetRoleStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.roleList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRoleList?: (ctx: RoleListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.role`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRole?: (ctx: RoleContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tableAdministrationStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTableAdministrationStatement?: (ctx: TableAdministrationStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.histogram`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitHistogram?: (ctx: HistogramContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.checkOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCheckOption?: (ctx: CheckOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.repairType`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRepairType?: (ctx: RepairTypeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.installUninstallStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitInstallUninstallStatement?: (ctx: InstallUninstallStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.setStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSetStatement?: (ctx: SetStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.startOptionValueList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitStartOptionValueList?: (ctx: StartOptionValueListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.transactionCharacteristics`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTransactionCharacteristics?: (ctx: TransactionCharacteristicsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.transactionAccessMode`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTransactionAccessMode?: (ctx: TransactionAccessModeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.isolationLevel`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIsolationLevel?: (ctx: IsolationLevelContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.optionValueListContinued`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitOptionValueListContinued?: (ctx: OptionValueListContinuedContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.optionValueNoOptionType`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitOptionValueNoOptionType?: (ctx: OptionValueNoOptionTypeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.optionValue`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitOptionValue?: (ctx: OptionValueContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.setSystemVariable`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSetSystemVariable?: (ctx: SetSystemVariableContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.startOptionValueListFollowingOptionType`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitStartOptionValueListFollowingOptionType?: (ctx: StartOptionValueListFollowingOptionTypeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.optionValueFollowingOptionType`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitOptionValueFollowingOptionType?: (ctx: OptionValueFollowingOptionTypeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.setExprOrDefault`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSetExprOrDefault?: (ctx: SetExprOrDefaultContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showDatabasesStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowDatabasesStatement?: (ctx: ShowDatabasesStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showTablesStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowTablesStatement?: (ctx: ShowTablesStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showTriggersStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowTriggersStatement?: (ctx: ShowTriggersStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showEventsStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowEventsStatement?: (ctx: ShowEventsStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showTableStatusStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowTableStatusStatement?: (ctx: ShowTableStatusStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showOpenTablesStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowOpenTablesStatement?: (ctx: ShowOpenTablesStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showPluginsStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowPluginsStatement?: (ctx: ShowPluginsStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showEngineLogsStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowEngineLogsStatement?: (ctx: ShowEngineLogsStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showEngineMutexStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowEngineMutexStatement?: (ctx: ShowEngineMutexStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showEngineStatusStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowEngineStatusStatement?: (ctx: ShowEngineStatusStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showColumnsStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowColumnsStatement?: (ctx: ShowColumnsStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showBinaryLogsStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowBinaryLogsStatement?: (ctx: ShowBinaryLogsStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showReplicasStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowReplicasStatement?: (ctx: ShowReplicasStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showBinlogEventsStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowBinlogEventsStatement?: (ctx: ShowBinlogEventsStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showRelaylogEventsStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowRelaylogEventsStatement?: (ctx: ShowRelaylogEventsStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showKeysStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowKeysStatement?: (ctx: ShowKeysStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showEnginesStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowEnginesStatement?: (ctx: ShowEnginesStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showCountWarningsStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowCountWarningsStatement?: (ctx: ShowCountWarningsStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showCountErrorsStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowCountErrorsStatement?: (ctx: ShowCountErrorsStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showWarningsStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowWarningsStatement?: (ctx: ShowWarningsStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showErrorsStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowErrorsStatement?: (ctx: ShowErrorsStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showProfilesStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowProfilesStatement?: (ctx: ShowProfilesStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showProfileStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowProfileStatement?: (ctx: ShowProfileStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showStatusStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowStatusStatement?: (ctx: ShowStatusStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showProcessListStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowProcessListStatement?: (ctx: ShowProcessListStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showVariablesStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowVariablesStatement?: (ctx: ShowVariablesStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showCharacterSetStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowCharacterSetStatement?: (ctx: ShowCharacterSetStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showCollationStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowCollationStatement?: (ctx: ShowCollationStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showPrivilegesStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowPrivilegesStatement?: (ctx: ShowPrivilegesStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showGrantsStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowGrantsStatement?: (ctx: ShowGrantsStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showCreateDatabaseStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowCreateDatabaseStatement?: (ctx: ShowCreateDatabaseStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showCreateTableStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowCreateTableStatement?: (ctx: ShowCreateTableStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showCreateViewStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowCreateViewStatement?: (ctx: ShowCreateViewStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showMasterStatusStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowMasterStatusStatement?: (ctx: ShowMasterStatusStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showReplicaStatusStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowReplicaStatusStatement?: (ctx: ShowReplicaStatusStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showCreateProcedureStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowCreateProcedureStatement?: (ctx: ShowCreateProcedureStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showCreateFunctionStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowCreateFunctionStatement?: (ctx: ShowCreateFunctionStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showCreateTriggerStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowCreateTriggerStatement?: (ctx: ShowCreateTriggerStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showCreateProcedureStatusStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowCreateProcedureStatusStatement?: (ctx: ShowCreateProcedureStatusStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showCreateFunctionStatusStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowCreateFunctionStatusStatement?: (ctx: ShowCreateFunctionStatusStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showCreateProcedureCodeStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowCreateProcedureCodeStatement?: (ctx: ShowCreateProcedureCodeStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showCreateFunctionCodeStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowCreateFunctionCodeStatement?: (ctx: ShowCreateFunctionCodeStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showCreateEventStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowCreateEventStatement?: (ctx: ShowCreateEventStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showCreateUserStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowCreateUserStatement?: (ctx: ShowCreateUserStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.showCommandType`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitShowCommandType?: (ctx: ShowCommandTypeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.engineOrAll`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitEngineOrAll?: (ctx: EngineOrAllContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.fromOrIn`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFromOrIn?: (ctx: FromOrInContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.inDb`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitInDb?: (ctx: InDbContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.profileDefinitions`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitProfileDefinitions?: (ctx: ProfileDefinitionsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.profileDefinition`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitProfileDefinition?: (ctx: ProfileDefinitionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.otherAdministrativeStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitOtherAdministrativeStatement?: (ctx: OtherAdministrativeStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.keyCacheListOrParts`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitKeyCacheListOrParts?: (ctx: KeyCacheListOrPartsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.keyCacheList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitKeyCacheList?: (ctx: KeyCacheListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.assignToKeycache`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAssignToKeycache?: (ctx: AssignToKeycacheContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.assignToKeycachePartition`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAssignToKeycachePartition?: (ctx: AssignToKeycachePartitionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.cacheKeyList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCacheKeyList?: (ctx: CacheKeyListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.keyUsageElement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitKeyUsageElement?: (ctx: KeyUsageElementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.keyUsageList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitKeyUsageList?: (ctx: KeyUsageListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.flushOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFlushOption?: (ctx: FlushOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.logType`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLogType?: (ctx: LogTypeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.flushTables`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFlushTables?: (ctx: FlushTablesContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.flushTablesOptions`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFlushTablesOptions?: (ctx: FlushTablesOptionsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.preloadTail`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPreloadTail?: (ctx: PreloadTailContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.preloadList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPreloadList?: (ctx: PreloadListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.preloadKeys`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPreloadKeys?: (ctx: PreloadKeysContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.adminPartition`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAdminPartition?: (ctx: AdminPartitionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.resourceGroupManagement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitResourceGroupManagement?: (ctx: ResourceGroupManagementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createResourceGroup`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateResourceGroup?: (ctx: CreateResourceGroupContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.resourceGroupVcpuList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitResourceGroupVcpuList?: (ctx: ResourceGroupVcpuListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.vcpuNumOrRange`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitVcpuNumOrRange?: (ctx: VcpuNumOrRangeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.resourceGroupPriority`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitResourceGroupPriority?: (ctx: ResourceGroupPriorityContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.resourceGroupEnableDisable`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitResourceGroupEnableDisable?: (ctx: ResourceGroupEnableDisableContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.alterResourceGroup`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAlterResourceGroup?: (ctx: AlterResourceGroupContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.setResourceGroup`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSetResourceGroup?: (ctx: SetResourceGroupContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.threadIdList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitThreadIdList?: (ctx: ThreadIdListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.dropResourceGroup`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDropResourceGroup?: (ctx: DropResourceGroupContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.utilityStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUtilityStatement?: (ctx: UtilityStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.describeStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDescribeStatement?: (ctx: DescribeStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.explainStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitExplainStatement?: (ctx: ExplainStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.explainableStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitExplainableStatement?: (ctx: ExplainableStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.helpCommand`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitHelpCommand?: (ctx: HelpCommandContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.useCommand`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUseCommand?: (ctx: UseCommandContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.restartServer`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRestartServer?: (ctx: RestartServerContext) => Result;
    /**
     * Visit a parse tree produced by the `exprOr`
     * labeled alternative in `MySQLParser.expr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitExprOr?: (ctx: ExprOrContext) => Result;
    /**
     * Visit a parse tree produced by the `exprNot`
     * labeled alternative in `MySQLParser.expr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitExprNot?: (ctx: ExprNotContext) => Result;
    /**
     * Visit a parse tree produced by the `exprIs`
     * labeled alternative in `MySQLParser.expr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitExprIs?: (ctx: ExprIsContext) => Result;
    /**
     * Visit a parse tree produced by the `exprAnd`
     * labeled alternative in `MySQLParser.expr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitExprAnd?: (ctx: ExprAndContext) => Result;
    /**
     * Visit a parse tree produced by the `exprXor`
     * labeled alternative in `MySQLParser.expr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitExprXor?: (ctx: ExprXorContext) => Result;
    /**
     * Visit a parse tree produced by the `primaryExprPredicate`
     * labeled alternative in `MySQLParser.boolPri`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPrimaryExprPredicate?: (ctx: PrimaryExprPredicateContext) => Result;
    /**
     * Visit a parse tree produced by the `primaryExprCompare`
     * labeled alternative in `MySQLParser.boolPri`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPrimaryExprCompare?: (ctx: PrimaryExprCompareContext) => Result;
    /**
     * Visit a parse tree produced by the `primaryExprAllAny`
     * labeled alternative in `MySQLParser.boolPri`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPrimaryExprAllAny?: (ctx: PrimaryExprAllAnyContext) => Result;
    /**
     * Visit a parse tree produced by the `primaryExprIsNull`
     * labeled alternative in `MySQLParser.boolPri`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPrimaryExprIsNull?: (ctx: PrimaryExprIsNullContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.compOp`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCompOp?: (ctx: CompOpContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.predicate`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPredicate?: (ctx: PredicateContext) => Result;
    /**
     * Visit a parse tree produced by the `predicateExprIn`
     * labeled alternative in `MySQLParser.predicateOperations`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPredicateExprIn?: (ctx: PredicateExprInContext) => Result;
    /**
     * Visit a parse tree produced by the `predicateExprBetween`
     * labeled alternative in `MySQLParser.predicateOperations`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPredicateExprBetween?: (ctx: PredicateExprBetweenContext) => Result;
    /**
     * Visit a parse tree produced by the `predicateExprLike`
     * labeled alternative in `MySQLParser.predicateOperations`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPredicateExprLike?: (ctx: PredicateExprLikeContext) => Result;
    /**
     * Visit a parse tree produced by the `predicateExprRegex`
     * labeled alternative in `MySQLParser.predicateOperations`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPredicateExprRegex?: (ctx: PredicateExprRegexContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.bitExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitBitExpr?: (ctx: BitExprContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprConvert`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprConvert?: (ctx: SimpleExprConvertContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprCast`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprCast?: (ctx: SimpleExprCastContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprUnary`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprUnary?: (ctx: SimpleExprUnaryContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExpressionRValue`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExpressionRValue?: (ctx: SimpleExpressionRValueContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprOdbc`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprOdbc?: (ctx: SimpleExprOdbcContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprRuntimeFunction`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprRuntimeFunction?: (ctx: SimpleExprRuntimeFunctionContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprFunction`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprFunction?: (ctx: SimpleExprFunctionContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprCollate`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprCollate?: (ctx: SimpleExprCollateContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprMatch`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprMatch?: (ctx: SimpleExprMatchContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprWindowingFunction`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprWindowingFunction?: (ctx: SimpleExprWindowingFunctionContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprBinary`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprBinary?: (ctx: SimpleExprBinaryContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprColumnRef`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprColumnRef?: (ctx: SimpleExprColumnRefContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprParamMarker`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprParamMarker?: (ctx: SimpleExprParamMarkerContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprSum`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprSum?: (ctx: SimpleExprSumContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprCastTime`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprCastTime?: (ctx: SimpleExprCastTimeContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprConvertUsing`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprConvertUsing?: (ctx: SimpleExprConvertUsingContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprSubQuery`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprSubQuery?: (ctx: SimpleExprSubQueryContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprGroupingOperation`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprGroupingOperation?: (ctx: SimpleExprGroupingOperationContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprNot`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprNot?: (ctx: SimpleExprNotContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprValues`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprValues?: (ctx: SimpleExprValuesContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprUserVariableAssignment`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprUserVariableAssignment?: (ctx: SimpleExprUserVariableAssignmentContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprDefault`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprDefault?: (ctx: SimpleExprDefaultContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprList`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprList?: (ctx: SimpleExprListContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprInterval`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprInterval?: (ctx: SimpleExprIntervalContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprCase`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprCase?: (ctx: SimpleExprCaseContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprConcat`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprConcat?: (ctx: SimpleExprConcatContext) => Result;
    /**
     * Visit a parse tree produced by the `simpleExprLiteral`
     * labeled alternative in `MySQLParser.simpleExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprLiteral?: (ctx: SimpleExprLiteralContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.arrayCast`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitArrayCast?: (ctx: ArrayCastContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.jsonOperator`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitJsonOperator?: (ctx: JsonOperatorContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.sumExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSumExpr?: (ctx: SumExprContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.groupingOperation`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitGroupingOperation?: (ctx: GroupingOperationContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.windowFunctionCall`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitWindowFunctionCall?: (ctx: WindowFunctionCallContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.windowingClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitWindowingClause?: (ctx: WindowingClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.leadLagInfo`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLeadLagInfo?: (ctx: LeadLagInfoContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.stableInteger`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitStableInteger?: (ctx: StableIntegerContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.paramOrVar`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitParamOrVar?: (ctx: ParamOrVarContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.nullTreatment`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitNullTreatment?: (ctx: NullTreatmentContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.jsonFunction`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitJsonFunction?: (ctx: JsonFunctionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.inSumExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitInSumExpr?: (ctx: InSumExprContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.identListArg`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIdentListArg?: (ctx: IdentListArgContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.identList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIdentList?: (ctx: IdentListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.fulltextOptions`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFulltextOptions?: (ctx: FulltextOptionsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.runtimeFunctionCall`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRuntimeFunctionCall?: (ctx: RuntimeFunctionCallContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.returningType`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitReturningType?: (ctx: ReturningTypeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.geometryFunction`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitGeometryFunction?: (ctx: GeometryFunctionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.timeFunctionParameters`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTimeFunctionParameters?: (ctx: TimeFunctionParametersContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.fractionalPrecision`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFractionalPrecision?: (ctx: FractionalPrecisionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.weightStringLevels`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitWeightStringLevels?: (ctx: WeightStringLevelsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.weightStringLevelListItem`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitWeightStringLevelListItem?: (ctx: WeightStringLevelListItemContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.dateTimeTtype`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDateTimeTtype?: (ctx: DateTimeTtypeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.trimFunction`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTrimFunction?: (ctx: TrimFunctionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.substringFunction`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSubstringFunction?: (ctx: SubstringFunctionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.functionCall`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFunctionCall?: (ctx: FunctionCallContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.udfExprList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUdfExprList?: (ctx: UdfExprListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.udfExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUdfExpr?: (ctx: UdfExprContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.userVariable`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUserVariable?: (ctx: UserVariableContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.inExpressionUserVariableAssignment`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitInExpressionUserVariableAssignment?: (ctx: InExpressionUserVariableAssignmentContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.rvalueSystemOrUserVariable`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRvalueSystemOrUserVariable?: (ctx: RvalueSystemOrUserVariableContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.lvalueVariable`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLvalueVariable?: (ctx: LvalueVariableContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.rvalueSystemVariable`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRvalueSystemVariable?: (ctx: RvalueSystemVariableContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.whenExpression`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitWhenExpression?: (ctx: WhenExpressionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.thenExpression`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitThenExpression?: (ctx: ThenExpressionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.elseExpression`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitElseExpression?: (ctx: ElseExpressionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.castType`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCastType?: (ctx: CastTypeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.exprList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitExprList?: (ctx: ExprListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.charset`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCharset?: (ctx: CharsetContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.notRule`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitNotRule?: (ctx: NotRuleContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.not2Rule`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitNot2Rule?: (ctx: Not2RuleContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.interval`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitInterval?: (ctx: IntervalContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.intervalTimeStamp`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIntervalTimeStamp?: (ctx: IntervalTimeStampContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.exprListWithParentheses`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitExprListWithParentheses?: (ctx: ExprListWithParenthesesContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.exprWithParentheses`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitExprWithParentheses?: (ctx: ExprWithParenthesesContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.simpleExprWithParentheses`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleExprWithParentheses?: (ctx: SimpleExprWithParenthesesContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.orderList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitOrderList?: (ctx: OrderListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.orderExpression`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitOrderExpression?: (ctx: OrderExpressionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.groupList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitGroupList?: (ctx: GroupListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.groupingExpression`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitGroupingExpression?: (ctx: GroupingExpressionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.channel`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitChannel?: (ctx: ChannelContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.compoundStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCompoundStatement?: (ctx: CompoundStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.returnStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitReturnStatement?: (ctx: ReturnStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.ifStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIfStatement?: (ctx: IfStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.ifBody`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIfBody?: (ctx: IfBodyContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.thenStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitThenStatement?: (ctx: ThenStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.compoundStatementList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCompoundStatementList?: (ctx: CompoundStatementListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.caseStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCaseStatement?: (ctx: CaseStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.elseStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitElseStatement?: (ctx: ElseStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.labeledBlock`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLabeledBlock?: (ctx: LabeledBlockContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.unlabeledBlock`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUnlabeledBlock?: (ctx: UnlabeledBlockContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.label`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLabel?: (ctx: LabelContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.beginEndBlock`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitBeginEndBlock?: (ctx: BeginEndBlockContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.labeledControl`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLabeledControl?: (ctx: LabeledControlContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.unlabeledControl`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUnlabeledControl?: (ctx: UnlabeledControlContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.loopBlock`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLoopBlock?: (ctx: LoopBlockContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.whileDoBlock`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitWhileDoBlock?: (ctx: WhileDoBlockContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.repeatUntilBlock`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRepeatUntilBlock?: (ctx: RepeatUntilBlockContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.spDeclarations`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSpDeclarations?: (ctx: SpDeclarationsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.spDeclaration`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSpDeclaration?: (ctx: SpDeclarationContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.variableDeclaration`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitVariableDeclaration?: (ctx: VariableDeclarationContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.conditionDeclaration`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitConditionDeclaration?: (ctx: ConditionDeclarationContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.spCondition`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSpCondition?: (ctx: SpConditionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.sqlstate`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSqlstate?: (ctx: SqlstateContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.handlerDeclaration`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitHandlerDeclaration?: (ctx: HandlerDeclarationContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.handlerCondition`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitHandlerCondition?: (ctx: HandlerConditionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.cursorDeclaration`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCursorDeclaration?: (ctx: CursorDeclarationContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.iterateStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIterateStatement?: (ctx: IterateStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.leaveStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLeaveStatement?: (ctx: LeaveStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.getDiagnosticsStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitGetDiagnosticsStatement?: (ctx: GetDiagnosticsStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.signalAllowedExpr`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSignalAllowedExpr?: (ctx: SignalAllowedExprContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.statementInformationItem`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitStatementInformationItem?: (ctx: StatementInformationItemContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.conditionInformationItem`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitConditionInformationItem?: (ctx: ConditionInformationItemContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.signalInformationItemName`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSignalInformationItemName?: (ctx: SignalInformationItemNameContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.signalStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSignalStatement?: (ctx: SignalStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.resignalStatement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitResignalStatement?: (ctx: ResignalStatementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.signalInformationItem`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSignalInformationItem?: (ctx: SignalInformationItemContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.cursorOpen`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCursorOpen?: (ctx: CursorOpenContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.cursorClose`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCursorClose?: (ctx: CursorCloseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.cursorFetch`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCursorFetch?: (ctx: CursorFetchContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.schedule`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSchedule?: (ctx: ScheduleContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.columnDefinition`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitColumnDefinition?: (ctx: ColumnDefinitionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.checkOrReferences`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCheckOrReferences?: (ctx: CheckOrReferencesContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.checkConstraint`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCheckConstraint?: (ctx: CheckConstraintContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.constraintEnforcement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitConstraintEnforcement?: (ctx: ConstraintEnforcementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tableConstraintDef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTableConstraintDef?: (ctx: TableConstraintDefContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.constraintName`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitConstraintName?: (ctx: ConstraintNameContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.fieldDefinition`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFieldDefinition?: (ctx: FieldDefinitionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.columnAttribute`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitColumnAttribute?: (ctx: ColumnAttributeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.columnFormat`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitColumnFormat?: (ctx: ColumnFormatContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.storageMedia`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitStorageMedia?: (ctx: StorageMediaContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.now`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitNow?: (ctx: NowContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.nowOrSignedLiteral`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitNowOrSignedLiteral?: (ctx: NowOrSignedLiteralContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.gcolAttribute`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitGcolAttribute?: (ctx: GcolAttributeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.references`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitReferences?: (ctx: ReferencesContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.deleteOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDeleteOption?: (ctx: DeleteOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.keyList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitKeyList?: (ctx: KeyListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.keyPart`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitKeyPart?: (ctx: KeyPartContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.keyListWithExpression`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitKeyListWithExpression?: (ctx: KeyListWithExpressionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.keyPartOrExpression`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitKeyPartOrExpression?: (ctx: KeyPartOrExpressionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.indexType`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIndexType?: (ctx: IndexTypeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.indexOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIndexOption?: (ctx: IndexOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.commonIndexOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCommonIndexOption?: (ctx: CommonIndexOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.visibility`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitVisibility?: (ctx: VisibilityContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.indexTypeClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIndexTypeClause?: (ctx: IndexTypeClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.fulltextIndexOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFulltextIndexOption?: (ctx: FulltextIndexOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.spatialIndexOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSpatialIndexOption?: (ctx: SpatialIndexOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.dataTypeDefinition`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDataTypeDefinition?: (ctx: DataTypeDefinitionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.dataType`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDataType?: (ctx: DataTypeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.nchar`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitNchar?: (ctx: NcharContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.realType`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRealType?: (ctx: RealTypeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.fieldLength`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFieldLength?: (ctx: FieldLengthContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.fieldOptions`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFieldOptions?: (ctx: FieldOptionsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.charsetWithOptBinary`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCharsetWithOptBinary?: (ctx: CharsetWithOptBinaryContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.ascii`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitAscii?: (ctx: AsciiContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.unicode`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUnicode?: (ctx: UnicodeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.wsNumCodepoints`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitWsNumCodepoints?: (ctx: WsNumCodepointsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.typeDatetimePrecision`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTypeDatetimePrecision?: (ctx: TypeDatetimePrecisionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.functionDatetimePrecision`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFunctionDatetimePrecision?: (ctx: FunctionDatetimePrecisionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.charsetName`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCharsetName?: (ctx: CharsetNameContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.collationName`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCollationName?: (ctx: CollationNameContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createTableOptions`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateTableOptions?: (ctx: CreateTableOptionsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createTableOptionsEtc`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateTableOptionsEtc?: (ctx: CreateTableOptionsEtcContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createPartitioningEtc`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreatePartitioningEtc?: (ctx: CreatePartitioningEtcContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createTableOptionsSpaceSeparated`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateTableOptionsSpaceSeparated?: (ctx: CreateTableOptionsSpaceSeparatedContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createTableOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateTableOption?: (ctx: CreateTableOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.ternaryOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTernaryOption?: (ctx: TernaryOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.defaultCollation`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDefaultCollation?: (ctx: DefaultCollationContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.defaultEncryption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDefaultEncryption?: (ctx: DefaultEncryptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.defaultCharset`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDefaultCharset?: (ctx: DefaultCharsetContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.partitionClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPartitionClause?: (ctx: PartitionClauseContext) => Result;
    /**
     * Visit a parse tree produced by the `partitionDefKey`
     * labeled alternative in `MySQLParser.partitionTypeDef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPartitionDefKey?: (ctx: PartitionDefKeyContext) => Result;
    /**
     * Visit a parse tree produced by the `partitionDefHash`
     * labeled alternative in `MySQLParser.partitionTypeDef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPartitionDefHash?: (ctx: PartitionDefHashContext) => Result;
    /**
     * Visit a parse tree produced by the `partitionDefRangeList`
     * labeled alternative in `MySQLParser.partitionTypeDef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPartitionDefRangeList?: (ctx: PartitionDefRangeListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.subPartitions`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSubPartitions?: (ctx: SubPartitionsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.partitionKeyAlgorithm`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPartitionKeyAlgorithm?: (ctx: PartitionKeyAlgorithmContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.partitionDefinitions`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPartitionDefinitions?: (ctx: PartitionDefinitionsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.partitionDefinition`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPartitionDefinition?: (ctx: PartitionDefinitionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.partitionValuesIn`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPartitionValuesIn?: (ctx: PartitionValuesInContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.partitionOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPartitionOption?: (ctx: PartitionOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.subpartitionDefinition`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSubpartitionDefinition?: (ctx: SubpartitionDefinitionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.partitionValueItemListParen`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPartitionValueItemListParen?: (ctx: PartitionValueItemListParenContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.partitionValueItem`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPartitionValueItem?: (ctx: PartitionValueItemContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.definerClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDefinerClause?: (ctx: DefinerClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.ifExists`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIfExists?: (ctx: IfExistsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.ifNotExists`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIfNotExists?: (ctx: IfNotExistsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.ignoreUnknownUser`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIgnoreUnknownUser?: (ctx: IgnoreUnknownUserContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.procedureParameter`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitProcedureParameter?: (ctx: ProcedureParameterContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.functionParameter`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFunctionParameter?: (ctx: FunctionParameterContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.collate`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCollate?: (ctx: CollateContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.typeWithOptCollate`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTypeWithOptCollate?: (ctx: TypeWithOptCollateContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.schemaIdentifierPair`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSchemaIdentifierPair?: (ctx: SchemaIdentifierPairContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.viewRefList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitViewRefList?: (ctx: ViewRefListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.updateList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUpdateList?: (ctx: UpdateListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.updateElement`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUpdateElement?: (ctx: UpdateElementContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.charsetClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCharsetClause?: (ctx: CharsetClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.fieldsClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFieldsClause?: (ctx: FieldsClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.fieldTerm`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFieldTerm?: (ctx: FieldTermContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.linesClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLinesClause?: (ctx: LinesClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.lineTerm`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLineTerm?: (ctx: LineTermContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.userList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUserList?: (ctx: UserListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createUserList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateUserList?: (ctx: CreateUserListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createUser`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateUser?: (ctx: CreateUserContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.createUserWithMfa`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitCreateUserWithMfa?: (ctx: CreateUserWithMfaContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.identification`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIdentification?: (ctx: IdentificationContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.identifiedByPassword`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIdentifiedByPassword?: (ctx: IdentifiedByPasswordContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.identifiedByRandomPassword`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIdentifiedByRandomPassword?: (ctx: IdentifiedByRandomPasswordContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.identifiedWithPlugin`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIdentifiedWithPlugin?: (ctx: IdentifiedWithPluginContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.identifiedWithPluginAsAuth`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIdentifiedWithPluginAsAuth?: (ctx: IdentifiedWithPluginAsAuthContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.identifiedWithPluginByPassword`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIdentifiedWithPluginByPassword?: (ctx: IdentifiedWithPluginByPasswordContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.identifiedWithPluginByRandomPassword`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIdentifiedWithPluginByRandomPassword?: (ctx: IdentifiedWithPluginByRandomPasswordContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.initialAuth`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitInitialAuth?: (ctx: InitialAuthContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.retainCurrentPassword`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRetainCurrentPassword?: (ctx: RetainCurrentPasswordContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.discardOldPassword`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDiscardOldPassword?: (ctx: DiscardOldPasswordContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.userRegistration`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUserRegistration?: (ctx: UserRegistrationContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.factor`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFactor?: (ctx: FactorContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.replacePassword`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitReplacePassword?: (ctx: ReplacePasswordContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.userIdentifierOrText`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUserIdentifierOrText?: (ctx: UserIdentifierOrTextContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.user`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUser?: (ctx: UserContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.likeClause`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLikeClause?: (ctx: LikeClauseContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.likeOrWhere`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLikeOrWhere?: (ctx: LikeOrWhereContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.onlineOption`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitOnlineOption?: (ctx: OnlineOptionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.noWriteToBinLog`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitNoWriteToBinLog?: (ctx: NoWriteToBinLogContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.usePartition`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUsePartition?: (ctx: UsePartitionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.fieldIdentifier`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFieldIdentifier?: (ctx: FieldIdentifierContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.columnName`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitColumnName?: (ctx: ColumnNameContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.columnInternalRef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitColumnInternalRef?: (ctx: ColumnInternalRefContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.columnInternalRefList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitColumnInternalRefList?: (ctx: ColumnInternalRefListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.columnRef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitColumnRef?: (ctx: ColumnRefContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.insertIdentifier`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitInsertIdentifier?: (ctx: InsertIdentifierContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.indexName`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIndexName?: (ctx: IndexNameContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.indexRef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIndexRef?: (ctx: IndexRefContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tableWild`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTableWild?: (ctx: TableWildContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.schemaName`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSchemaName?: (ctx: SchemaNameContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.schemaRef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSchemaRef?: (ctx: SchemaRefContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.procedureName`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitProcedureName?: (ctx: ProcedureNameContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.procedureRef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitProcedureRef?: (ctx: ProcedureRefContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.functionName`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFunctionName?: (ctx: FunctionNameContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.functionRef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFunctionRef?: (ctx: FunctionRefContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.triggerName`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTriggerName?: (ctx: TriggerNameContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.triggerRef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTriggerRef?: (ctx: TriggerRefContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.viewName`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitViewName?: (ctx: ViewNameContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.viewRef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitViewRef?: (ctx: ViewRefContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tablespaceName`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTablespaceName?: (ctx: TablespaceNameContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tablespaceRef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTablespaceRef?: (ctx: TablespaceRefContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.logfileGroupName`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLogfileGroupName?: (ctx: LogfileGroupNameContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.logfileGroupRef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLogfileGroupRef?: (ctx: LogfileGroupRefContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.eventName`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitEventName?: (ctx: EventNameContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.eventRef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitEventRef?: (ctx: EventRefContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.udfName`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUdfName?: (ctx: UdfNameContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.serverName`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitServerName?: (ctx: ServerNameContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.serverRef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitServerRef?: (ctx: ServerRefContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.engineRef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitEngineRef?: (ctx: EngineRefContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tableName`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTableName?: (ctx: TableNameContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.filterTableRef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFilterTableRef?: (ctx: FilterTableRefContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tableRefWithWildcard`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTableRefWithWildcard?: (ctx: TableRefWithWildcardContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tableRef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTableRef?: (ctx: TableRefContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tableRefList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTableRefList?: (ctx: TableRefListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.tableAliasRefList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTableAliasRefList?: (ctx: TableAliasRefListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.parameterName`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitParameterName?: (ctx: ParameterNameContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.labelIdentifier`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLabelIdentifier?: (ctx: LabelIdentifierContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.labelRef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLabelRef?: (ctx: LabelRefContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.roleIdentifier`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRoleIdentifier?: (ctx: RoleIdentifierContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.pluginRef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPluginRef?: (ctx: PluginRefContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.componentRef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitComponentRef?: (ctx: ComponentRefContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.resourceGroupRef`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitResourceGroupRef?: (ctx: ResourceGroupRefContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.windowName`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitWindowName?: (ctx: WindowNameContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.pureIdentifier`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPureIdentifier?: (ctx: PureIdentifierContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.identifier`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIdentifier?: (ctx: IdentifierContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.identifierList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIdentifierList?: (ctx: IdentifierListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.identifierListWithParentheses`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIdentifierListWithParentheses?: (ctx: IdentifierListWithParenthesesContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.qualifiedIdentifier`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitQualifiedIdentifier?: (ctx: QualifiedIdentifierContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.simpleIdentifier`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSimpleIdentifier?: (ctx: SimpleIdentifierContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.dotIdentifier`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitDotIdentifier?: (ctx: DotIdentifierContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.ulong_number`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUlong_number?: (ctx: Ulong_numberContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.real_ulong_number`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitReal_ulong_number?: (ctx: Real_ulong_numberContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.ulonglong_number`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitUlonglong_number?: (ctx: Ulonglong_numberContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.real_ulonglong_number`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitReal_ulonglong_number?: (ctx: Real_ulonglong_numberContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.signedLiteral`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSignedLiteral?: (ctx: SignedLiteralContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.signedLiteralOrNull`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSignedLiteralOrNull?: (ctx: SignedLiteralOrNullContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.literal`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLiteral?: (ctx: LiteralContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.literalOrNull`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLiteralOrNull?: (ctx: LiteralOrNullContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.nullAsLiteral`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitNullAsLiteral?: (ctx: NullAsLiteralContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.stringList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitStringList?: (ctx: StringListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.textStringLiteral`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTextStringLiteral?: (ctx: TextStringLiteralContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.textString`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTextString?: (ctx: TextStringContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.textStringHash`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTextStringHash?: (ctx: TextStringHashContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.textLiteral`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTextLiteral?: (ctx: TextLiteralContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.textStringNoLinebreak`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTextStringNoLinebreak?: (ctx: TextStringNoLinebreakContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.textStringLiteralList`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTextStringLiteralList?: (ctx: TextStringLiteralListContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.numLiteral`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitNumLiteral?: (ctx: NumLiteralContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.boolLiteral`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitBoolLiteral?: (ctx: BoolLiteralContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.nullLiteral`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitNullLiteral?: (ctx: NullLiteralContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.int64Literal`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitInt64Literal?: (ctx: Int64LiteralContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.temporalLiteral`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTemporalLiteral?: (ctx: TemporalLiteralContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.floatOptions`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitFloatOptions?: (ctx: FloatOptionsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.standardFloatOptions`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitStandardFloatOptions?: (ctx: StandardFloatOptionsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.precision`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitPrecision?: (ctx: PrecisionContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.textOrIdentifier`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitTextOrIdentifier?: (ctx: TextOrIdentifierContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.lValueIdentifier`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLValueIdentifier?: (ctx: LValueIdentifierContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.roleIdentifierOrText`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRoleIdentifierOrText?: (ctx: RoleIdentifierOrTextContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.sizeNumber`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSizeNumber?: (ctx: SizeNumberContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.parentheses`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitParentheses?: (ctx: ParenthesesContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.equal`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitEqual?: (ctx: EqualContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.optionType`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitOptionType?: (ctx: OptionTypeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.rvalueSystemVariableType`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRvalueSystemVariableType?: (ctx: RvalueSystemVariableTypeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.setVarIdentType`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitSetVarIdentType?: (ctx: SetVarIdentTypeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.jsonAttribute`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitJsonAttribute?: (ctx: JsonAttributeContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.identifierKeyword`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIdentifierKeyword?: (ctx: IdentifierKeywordContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.identifierKeywordsAmbiguous1RolesAndLabels`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIdentifierKeywordsAmbiguous1RolesAndLabels?: (ctx: IdentifierKeywordsAmbiguous1RolesAndLabelsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.identifierKeywordsAmbiguous2Labels`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIdentifierKeywordsAmbiguous2Labels?: (ctx: IdentifierKeywordsAmbiguous2LabelsContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.labelKeyword`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLabelKeyword?: (ctx: LabelKeywordContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.identifierKeywordsAmbiguous3Roles`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIdentifierKeywordsAmbiguous3Roles?: (ctx: IdentifierKeywordsAmbiguous3RolesContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.identifierKeywordsUnambiguous`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIdentifierKeywordsUnambiguous?: (ctx: IdentifierKeywordsUnambiguousContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.roleKeyword`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRoleKeyword?: (ctx: RoleKeywordContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.lValueKeyword`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitLValueKeyword?: (ctx: LValueKeywordContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.identifierKeywordsAmbiguous4SystemVariables`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitIdentifierKeywordsAmbiguous4SystemVariables?: (ctx: IdentifierKeywordsAmbiguous4SystemVariablesContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.roleOrIdentifierKeyword`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRoleOrIdentifierKeyword?: (ctx: RoleOrIdentifierKeywordContext) => Result;
    /**
     * Visit a parse tree produced by `MySQLParser.roleOrLabelKeyword`.
     * @param ctx the parse tree
     * @return the visitor result
     */
    visitRoleOrLabelKeyword?: (ctx: RoleOrLabelKeywordContext) => Result;
}

