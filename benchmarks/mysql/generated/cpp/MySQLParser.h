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

import { MySQLBaseRecognizer } from "./MySQLBaseRecognizer";
import { SqlMode } from "./MySQLRecognizerCommon";


// Generated from MySQLParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"


namespace antlr4 {


class PARSERS_PUBLIC_TYPE MySQLParser : public MySQLBaseRecognizer {
public:
  enum {
    ACCESSIBLE_SYMBOL = 1, ACCOUNT_SYMBOL = 2, ACTION_SYMBOL = 3, ADD_SYMBOL = 4, 
    ADDDATE_SYMBOL = 5, AFTER_SYMBOL = 6, AGAINST_SYMBOL = 7, AGGREGATE_SYMBOL = 8, 
    ALGORITHM_SYMBOL = 9, ALL_SYMBOL = 10, ALTER_SYMBOL = 11, ALWAYS_SYMBOL = 12, 
    ANALYSE_SYMBOL = 13, ANALYZE_SYMBOL = 14, AND_SYMBOL = 15, ANY_SYMBOL = 16, 
    AS_SYMBOL = 17, ASC_SYMBOL = 18, ASCII_SYMBOL = 19, ASENSITIVE_SYMBOL = 20, 
    AT_SYMBOL = 21, AUTHORS_SYMBOL = 22, AUTOEXTEND_SIZE_SYMBOL = 23, AUTO_INCREMENT_SYMBOL = 24, 
    AVG_ROW_LENGTH_SYMBOL = 25, AVG_SYMBOL = 26, BACKUP_SYMBOL = 27, BEFORE_SYMBOL = 28, 
    BEGIN_SYMBOL = 29, BETWEEN_SYMBOL = 30, BIGINT_SYMBOL = 31, BINARY_SYMBOL = 32, 
    BINLOG_SYMBOL = 33, BIN_NUM_SYMBOL = 34, BIT_AND_SYMBOL = 35, BIT_OR_SYMBOL = 36, 
    BIT_SYMBOL = 37, BIT_XOR_SYMBOL = 38, BLOB_SYMBOL = 39, BLOCK_SYMBOL = 40, 
    BOOLEAN_SYMBOL = 41, BOOL_SYMBOL = 42, BOTH_SYMBOL = 43, BTREE_SYMBOL = 44, 
    BY_SYMBOL = 45, BYTE_SYMBOL = 46, CACHE_SYMBOL = 47, CALL_SYMBOL = 48, 
    CASCADE_SYMBOL = 49, CASCADED_SYMBOL = 50, CASE_SYMBOL = 51, CAST_SYMBOL = 52, 
    CATALOG_NAME_SYMBOL = 53, CHAIN_SYMBOL = 54, CHANGE_SYMBOL = 55, CHANGED_SYMBOL = 56, 
    CHANNEL_SYMBOL = 57, CHARSET_SYMBOL = 58, CHARACTER_SYMBOL = 59, CHAR_SYMBOL = 60, 
    CHECKSUM_SYMBOL = 61, CHECK_SYMBOL = 62, CIPHER_SYMBOL = 63, CLASS_ORIGIN_SYMBOL = 64, 
    CLIENT_SYMBOL = 65, CLOSE_SYMBOL = 66, COALESCE_SYMBOL = 67, CODE_SYMBOL = 68, 
    COLLATE_SYMBOL = 69, COLLATION_SYMBOL = 70, COLUMNS_SYMBOL = 71, COLUMN_SYMBOL = 72, 
    COLUMN_NAME_SYMBOL = 73, COLUMN_FORMAT_SYMBOL = 74, COMMENT_SYMBOL = 75, 
    COMMITTED_SYMBOL = 76, COMMIT_SYMBOL = 77, COMPACT_SYMBOL = 78, COMPLETION_SYMBOL = 79, 
    COMPRESSED_SYMBOL = 80, COMPRESSION_SYMBOL = 81, CONCURRENT_SYMBOL = 82, 
    CONDITION_SYMBOL = 83, CONNECTION_SYMBOL = 84, CONSISTENT_SYMBOL = 85, 
    CONSTRAINT_SYMBOL = 86, CONSTRAINT_CATALOG_SYMBOL = 87, CONSTRAINT_NAME_SYMBOL = 88, 
    CONSTRAINT_SCHEMA_SYMBOL = 89, CONTAINS_SYMBOL = 90, CONTEXT_SYMBOL = 91, 
    CONTINUE_SYMBOL = 92, CONTRIBUTORS_SYMBOL = 93, CONVERT_SYMBOL = 94, 
    COUNT_SYMBOL = 95, CPU_SYMBOL = 96, CREATE_SYMBOL = 97, CROSS_SYMBOL = 98, 
    CUBE_SYMBOL = 99, CURDATE_SYMBOL = 100, CURRENT_SYMBOL = 101, CURRENT_DATE_SYMBOL = 102, 
    CURRENT_TIME_SYMBOL = 103, CURRENT_TIMESTAMP_SYMBOL = 104, CURRENT_USER_SYMBOL = 105, 
    CURSOR_SYMBOL = 106, CURSOR_NAME_SYMBOL = 107, CURTIME_SYMBOL = 108, 
    DATABASE_SYMBOL = 109, DATABASES_SYMBOL = 110, DATAFILE_SYMBOL = 111, 
    DATA_SYMBOL = 112, DATETIME_SYMBOL = 113, DATE_ADD_SYMBOL = 114, DATE_SUB_SYMBOL = 115, 
    DATE_SYMBOL = 116, DAYOFMONTH_SYMBOL = 117, DAY_HOUR_SYMBOL = 118, DAY_MICROSECOND_SYMBOL = 119, 
    DAY_MINUTE_SYMBOL = 120, DAY_SECOND_SYMBOL = 121, DAY_SYMBOL = 122, 
    DEALLOCATE_SYMBOL = 123, DEC_SYMBOL = 124, DECIMAL_NUM_SYMBOL = 125, 
    DECIMAL_SYMBOL = 126, DECLARE_SYMBOL = 127, DEFAULT_SYMBOL = 128, DEFAULT_AUTH_SYMBOL = 129, 
    DEFINER_SYMBOL = 130, DELAYED_SYMBOL = 131, DELAY_KEY_WRITE_SYMBOL = 132, 
    DELETE_SYMBOL = 133, DESC_SYMBOL = 134, DESCRIBE_SYMBOL = 135, DES_KEY_FILE_SYMBOL = 136, 
    DETERMINISTIC_SYMBOL = 137, DIAGNOSTICS_SYMBOL = 138, DIRECTORY_SYMBOL = 139, 
    DISABLE_SYMBOL = 140, DISCARD_SYMBOL = 141, DISK_SYMBOL = 142, DISTINCT_SYMBOL = 143, 
    DISTINCTROW_SYMBOL = 144, DIV_SYMBOL = 145, DOUBLE_SYMBOL = 146, DO_SYMBOL = 147, 
    DROP_SYMBOL = 148, DUAL_SYMBOL = 149, DUMPFILE_SYMBOL = 150, DUPLICATE_SYMBOL = 151, 
    DYNAMIC_SYMBOL = 152, EACH_SYMBOL = 153, ELSE_SYMBOL = 154, ELSEIF_SYMBOL = 155, 
    ENABLE_SYMBOL = 156, ENCLOSED_SYMBOL = 157, ENCRYPTION_SYMBOL = 158, 
    END_SYMBOL = 159, ENDS_SYMBOL = 160, END_OF_INPUT_SYMBOL = 161, ENGINES_SYMBOL = 162, 
    ENGINE_SYMBOL = 163, ENUM_SYMBOL = 164, ERROR_SYMBOL = 165, ERRORS_SYMBOL = 166, 
    ESCAPED_SYMBOL = 167, ESCAPE_SYMBOL = 168, EVENTS_SYMBOL = 169, EVENT_SYMBOL = 170, 
    EVERY_SYMBOL = 171, EXCHANGE_SYMBOL = 172, EXECUTE_SYMBOL = 173, EXISTS_SYMBOL = 174, 
    EXIT_SYMBOL = 175, EXPANSION_SYMBOL = 176, EXPIRE_SYMBOL = 177, EXPLAIN_SYMBOL = 178, 
    EXPORT_SYMBOL = 179, EXTENDED_SYMBOL = 180, EXTENT_SIZE_SYMBOL = 181, 
    EXTRACT_SYMBOL = 182, FALSE_SYMBOL = 183, FAST_SYMBOL = 184, FAULTS_SYMBOL = 185, 
    FETCH_SYMBOL = 186, FIELDS_SYMBOL = 187, FILE_SYMBOL = 188, FILE_BLOCK_SIZE_SYMBOL = 189, 
    FILTER_SYMBOL = 190, FIRST_SYMBOL = 191, FIXED_SYMBOL = 192, FLOAT4_SYMBOL = 193, 
    FLOAT8_SYMBOL = 194, FLOAT_SYMBOL = 195, FLUSH_SYMBOL = 196, FOLLOWS_SYMBOL = 197, 
    FORCE_SYMBOL = 198, FOREIGN_SYMBOL = 199, FOR_SYMBOL = 200, FORMAT_SYMBOL = 201, 
    FOUND_SYMBOL = 202, FROM_SYMBOL = 203, FULL_SYMBOL = 204, FULLTEXT_SYMBOL = 205, 
    FUNCTION_SYMBOL = 206, GET_SYMBOL = 207, GENERAL_SYMBOL = 208, GENERATED_SYMBOL = 209, 
    GROUP_REPLICATION_SYMBOL = 210, GEOMETRYCOLLECTION_SYMBOL = 211, GEOMETRY_SYMBOL = 212, 
    GET_FORMAT_SYMBOL = 213, GLOBAL_SYMBOL = 214, GRANT_SYMBOL = 215, GRANTS_SYMBOL = 216, 
    GROUP_SYMBOL = 217, GROUP_CONCAT_SYMBOL = 218, HANDLER_SYMBOL = 219, 
    HASH_SYMBOL = 220, HAVING_SYMBOL = 221, HELP_SYMBOL = 222, HIGH_PRIORITY_SYMBOL = 223, 
    HOST_SYMBOL = 224, HOSTS_SYMBOL = 225, HOUR_MICROSECOND_SYMBOL = 226, 
    HOUR_MINUTE_SYMBOL = 227, HOUR_SECOND_SYMBOL = 228, HOUR_SYMBOL = 229, 
    IDENTIFIED_SYMBOL = 230, IF_SYMBOL = 231, IGNORE_SYMBOL = 232, IGNORE_SERVER_IDS_SYMBOL = 233, 
    IMPORT_SYMBOL = 234, INDEXES_SYMBOL = 235, INDEX_SYMBOL = 236, INFILE_SYMBOL = 237, 
    INITIAL_SIZE_SYMBOL = 238, INNER_SYMBOL = 239, INOUT_SYMBOL = 240, INSENSITIVE_SYMBOL = 241, 
    INSERT_SYMBOL = 242, INSERT_METHOD_SYMBOL = 243, INSTANCE_SYMBOL = 244, 
    INSTALL_SYMBOL = 245, INTEGER_SYMBOL = 246, INTERVAL_SYMBOL = 247, INTO_SYMBOL = 248, 
    INT_SYMBOL = 249, INVOKER_SYMBOL = 250, IN_SYMBOL = 251, IO_AFTER_GTIDS_SYMBOL = 252, 
    IO_BEFORE_GTIDS_SYMBOL = 253, IO_THREAD_SYMBOL = 254, IO_SYMBOL = 255, 
    IPC_SYMBOL = 256, IS_SYMBOL = 257, ISOLATION_SYMBOL = 258, ISSUER_SYMBOL = 259, 
    ITERATE_SYMBOL = 260, JOIN_SYMBOL = 261, JSON_SYMBOL = 262, KEYS_SYMBOL = 263, 
    KEY_BLOCK_SIZE_SYMBOL = 264, KEY_SYMBOL = 265, KILL_SYMBOL = 266, LANGUAGE_SYMBOL = 267, 
    LAST_SYMBOL = 268, LEADING_SYMBOL = 269, LEAVES_SYMBOL = 270, LEAVE_SYMBOL = 271, 
    LEFT_SYMBOL = 272, LESS_SYMBOL = 273, LEVEL_SYMBOL = 274, LIKE_SYMBOL = 275, 
    LIMIT_SYMBOL = 276, LINEAR_SYMBOL = 277, LINES_SYMBOL = 278, LINESTRING_SYMBOL = 279, 
    LIST_SYMBOL = 280, LOAD_SYMBOL = 281, LOCALTIME_SYMBOL = 282, LOCALTIMESTAMP_SYMBOL = 283, 
    LOCAL_SYMBOL = 284, LOCATOR_SYMBOL = 285, LOCKS_SYMBOL = 286, LOCK_SYMBOL = 287, 
    LOGFILE_SYMBOL = 288, LOGS_SYMBOL = 289, LONGBLOB_SYMBOL = 290, LONGTEXT_SYMBOL = 291, 
    LONG_NUM_SYMBOL = 292, LONG_SYMBOL = 293, LOOP_SYMBOL = 294, LOW_PRIORITY_SYMBOL = 295, 
    MASTER_AUTO_POSITION_SYMBOL = 296, MASTER_BIND_SYMBOL = 297, MASTER_CONNECT_RETRY_SYMBOL = 298, 
    MASTER_DELAY_SYMBOL = 299, MASTER_HOST_SYMBOL = 300, MASTER_LOG_FILE_SYMBOL = 301, 
    MASTER_LOG_POS_SYMBOL = 302, MASTER_PASSWORD_SYMBOL = 303, MASTER_PORT_SYMBOL = 304, 
    MASTER_RETRY_COUNT_SYMBOL = 305, MASTER_SERVER_ID_SYMBOL = 306, MASTER_SSL_CAPATH_SYMBOL = 307, 
    MASTER_SSL_CA_SYMBOL = 308, MASTER_SSL_CERT_SYMBOL = 309, MASTER_SSL_CIPHER_SYMBOL = 310, 
    MASTER_SSL_CRL_SYMBOL = 311, MASTER_SSL_CRLPATH_SYMBOL = 312, MASTER_SSL_KEY_SYMBOL = 313, 
    MASTER_SSL_SYMBOL = 314, MASTER_SSL_VERIFY_SERVER_CERT_SYMBOL = 315, 
    MASTER_SYMBOL = 316, MASTER_TLS_VERSION_SYMBOL = 317, MASTER_USER_SYMBOL = 318, 
    MASTER_HEARTBEAT_PERIOD_SYMBOL = 319, MATCH_SYMBOL = 320, MAX_CONNECTIONS_PER_HOUR_SYMBOL = 321, 
    MAX_QUERIES_PER_HOUR_SYMBOL = 322, MAX_ROWS_SYMBOL = 323, MAX_SIZE_SYMBOL = 324, 
    MAX_STATEMENT_TIME_SYMBOL = 325, MAX_SYMBOL = 326, MAX_UPDATES_PER_HOUR_SYMBOL = 327, 
    MAX_USER_CONNECTIONS_SYMBOL = 328, MAXVALUE_SYMBOL = 329, MEDIUMBLOB_SYMBOL = 330, 
    MEDIUMINT_SYMBOL = 331, MEDIUMTEXT_SYMBOL = 332, MEDIUM_SYMBOL = 333, 
    MEMORY_SYMBOL = 334, MERGE_SYMBOL = 335, MESSAGE_TEXT_SYMBOL = 336, 
    MICROSECOND_SYMBOL = 337, MID_SYMBOL = 338, MIDDLEINT_SYMBOL = 339, 
    MIGRATE_SYMBOL = 340, MINUTE_MICROSECOND_SYMBOL = 341, MINUTE_SECOND_SYMBOL = 342, 
    MINUTE_SYMBOL = 343, MIN_ROWS_SYMBOL = 344, MIN_SYMBOL = 345, MODE_SYMBOL = 346, 
    MODIFIES_SYMBOL = 347, MODIFY_SYMBOL = 348, MOD_SYMBOL = 349, MONTH_SYMBOL = 350, 
    MULTILINESTRING_SYMBOL = 351, MULTIPOINT_SYMBOL = 352, MULTIPOLYGON_SYMBOL = 353, 
    MUTEX_SYMBOL = 354, MYSQL_ERRNO_SYMBOL = 355, NAMES_SYMBOL = 356, NAME_SYMBOL = 357, 
    NATIONAL_SYMBOL = 358, NATURAL_SYMBOL = 359, NCHAR_STRING_SYMBOL = 360, 
    NCHAR_SYMBOL = 361, NDB_SYMBOL = 362, NDBCLUSTER_SYMBOL = 363, NEG_SYMBOL = 364, 
    NEVER_SYMBOL = 365, NEW_SYMBOL = 366, NEXT_SYMBOL = 367, NODEGROUP_SYMBOL = 368, 
    NONE_SYMBOL = 369, NONBLOCKING_SYMBOL = 370, NOT_SYMBOL = 371, NOW_SYMBOL = 372, 
    NO_SYMBOL = 373, NO_WAIT_SYMBOL = 374, NO_WRITE_TO_BINLOG_SYMBOL = 375, 
    NULL_SYMBOL = 376, NUMBER_SYMBOL = 377, NUMERIC_SYMBOL = 378, NVARCHAR_SYMBOL = 379, 
    OFFLINE_SYMBOL = 380, OFFSET_SYMBOL = 381, OLD_PASSWORD_SYMBOL = 382, 
    ON_SYMBOL = 383, ONE_SYMBOL = 384, ONLINE_SYMBOL = 385, ONLY_SYMBOL = 386, 
    OPEN_SYMBOL = 387, OPTIMIZE_SYMBOL = 388, OPTIMIZER_COSTS_SYMBOL = 389, 
    OPTIONS_SYMBOL = 390, OPTION_SYMBOL = 391, OPTIONALLY_SYMBOL = 392, 
    ORDER_SYMBOL = 393, OR_SYMBOL = 394, OUTER_SYMBOL = 395, OUTFILE_SYMBOL = 396, 
    OUT_SYMBOL = 397, OWNER_SYMBOL = 398, PACK_KEYS_SYMBOL = 399, PAGE_SYMBOL = 400, 
    PARSER_SYMBOL = 401, PARTIAL_SYMBOL = 402, PARTITIONING_SYMBOL = 403, 
    PARTITIONS_SYMBOL = 404, PARTITION_SYMBOL = 405, PASSWORD_SYMBOL = 406, 
    PHASE_SYMBOL = 407, PLUGINS_SYMBOL = 408, PLUGIN_DIR_SYMBOL = 409, PLUGIN_SYMBOL = 410, 
    POINT_SYMBOL = 411, POLYGON_SYMBOL = 412, PORT_SYMBOL = 413, POSITION_SYMBOL = 414, 
    PRECEDES_SYMBOL = 415, PRECISION_SYMBOL = 416, PREPARE_SYMBOL = 417, 
    PRESERVE_SYMBOL = 418, PREV_SYMBOL = 419, PRIMARY_SYMBOL = 420, PRIVILEGES_SYMBOL = 421, 
    PROCEDURE_SYMBOL = 422, PROCESS_SYMBOL = 423, PROCESSLIST_SYMBOL = 424, 
    PROFILE_SYMBOL = 425, PROFILES_SYMBOL = 426, PROXY_SYMBOL = 427, PURGE_SYMBOL = 428, 
    QUARTER_SYMBOL = 429, QUERY_SYMBOL = 430, QUICK_SYMBOL = 431, RANGE_SYMBOL = 432, 
    READS_SYMBOL = 433, READ_ONLY_SYMBOL = 434, READ_SYMBOL = 435, READ_WRITE_SYMBOL = 436, 
    REAL_SYMBOL = 437, REBUILD_SYMBOL = 438, RECOVER_SYMBOL = 439, REDOFILE_SYMBOL = 440, 
    REDO_BUFFER_SIZE_SYMBOL = 441, REDUNDANT_SYMBOL = 442, REFERENCES_SYMBOL = 443, 
    REGEXP_SYMBOL = 444, RELAY_SYMBOL = 445, RELAYLOG_SYMBOL = 446, RELAY_LOG_FILE_SYMBOL = 447, 
    RELAY_LOG_POS_SYMBOL = 448, RELAY_THREAD_SYMBOL = 449, RELEASE_SYMBOL = 450, 
    RELOAD_SYMBOL = 451, REMOVE_SYMBOL = 452, RENAME_SYMBOL = 453, REORGANIZE_SYMBOL = 454, 
    REPAIR_SYMBOL = 455, REPEATABLE_SYMBOL = 456, REPEAT_SYMBOL = 457, REPLACE_SYMBOL = 458, 
    REPLICATION_SYMBOL = 459, REPLICATE_DO_DB_SYMBOL = 460, REPLICATE_IGNORE_DB_SYMBOL = 461, 
    REPLICATE_DO_TABLE_SYMBOL = 462, REPLICATE_IGNORE_TABLE_SYMBOL = 463, 
    REPLICATE_WILD_DO_TABLE_SYMBOL = 464, REPLICATE_WILD_IGNORE_TABLE_SYMBOL = 465, 
    REPLICATE_REWRITE_DB_SYMBOL = 466, REQUIRE_SYMBOL = 467, RESET_SYMBOL = 468, 
    RESIGNAL_SYMBOL = 469, RESTORE_SYMBOL = 470, RESTRICT_SYMBOL = 471, 
    RESUME_SYMBOL = 472, RETURNED_SQLSTATE_SYMBOL = 473, RETURNS_SYMBOL = 474, 
    RETURN_SYMBOL = 475, REVERSE_SYMBOL = 476, REVOKE_SYMBOL = 477, RIGHT_SYMBOL = 478, 
    RLIKE_SYMBOL = 479, ROLLBACK_SYMBOL = 480, ROLLUP_SYMBOL = 481, ROTATE_SYMBOL = 482, 
    ROUTINE_SYMBOL = 483, ROWS_SYMBOL = 484, ROW_COUNT_SYMBOL = 485, ROW_FORMAT_SYMBOL = 486, 
    ROW_SYMBOL = 487, RTREE_SYMBOL = 488, SAVEPOINT_SYMBOL = 489, SCHEDULE_SYMBOL = 490, 
    SCHEMA_SYMBOL = 491, SCHEMA_NAME_SYMBOL = 492, SCHEMAS_SYMBOL = 493, 
    SECOND_MICROSECOND_SYMBOL = 494, SECOND_SYMBOL = 495, SECURITY_SYMBOL = 496, 
    SELECT_SYMBOL = 497, SENSITIVE_SYMBOL = 498, SEPARATOR_SYMBOL = 499, 
    SERIALIZABLE_SYMBOL = 500, SERIAL_SYMBOL = 501, SESSION_SYMBOL = 502, 
    SERVER_SYMBOL = 503, SERVER_OPTIONS_SYMBOL = 504, SESSION_USER_SYMBOL = 505, 
    SET_SYMBOL = 506, SET_VAR_SYMBOL = 507, SHARE_SYMBOL = 508, SHOW_SYMBOL = 509, 
    SHUTDOWN_SYMBOL = 510, SIGNAL_SYMBOL = 511, SIGNED_SYMBOL = 512, SIMPLE_SYMBOL = 513, 
    SLAVE_SYMBOL = 514, SLOW_SYMBOL = 515, SMALLINT_SYMBOL = 516, SNAPSHOT_SYMBOL = 517, 
    SOME_SYMBOL = 518, SOCKET_SYMBOL = 519, SONAME_SYMBOL = 520, SOUNDS_SYMBOL = 521, 
    SOURCE_SYMBOL = 522, SPATIAL_SYMBOL = 523, SPECIFIC_SYMBOL = 524, SQLEXCEPTION_SYMBOL = 525, 
    SQLSTATE_SYMBOL = 526, SQLWARNING_SYMBOL = 527, SQL_AFTER_GTIDS_SYMBOL = 528, 
    SQL_AFTER_MTS_GAPS_SYMBOL = 529, SQL_BEFORE_GTIDS_SYMBOL = 530, SQL_BIG_RESULT_SYMBOL = 531, 
    SQL_BUFFER_RESULT_SYMBOL = 532, SQL_CACHE_SYMBOL = 533, SQL_CALC_FOUND_ROWS_SYMBOL = 534, 
    SQL_NO_CACHE_SYMBOL = 535, SQL_SMALL_RESULT_SYMBOL = 536, SQL_SYMBOL = 537, 
    SQL_THREAD_SYMBOL = 538, SSL_SYMBOL = 539, STACKED_SYMBOL = 540, STARTING_SYMBOL = 541, 
    STARTS_SYMBOL = 542, START_SYMBOL = 543, STATS_AUTO_RECALC_SYMBOL = 544, 
    STATS_PERSISTENT_SYMBOL = 545, STATS_SAMPLE_PAGES_SYMBOL = 546, STATUS_SYMBOL = 547, 
    STDDEV_SAMP_SYMBOL = 548, STDDEV_SYMBOL = 549, STDDEV_POP_SYMBOL = 550, 
    STD_SYMBOL = 551, STOP_SYMBOL = 552, STORAGE_SYMBOL = 553, STORED_SYMBOL = 554, 
    STRAIGHT_JOIN_SYMBOL = 555, STRING_SYMBOL = 556, SUBCLASS_ORIGIN_SYMBOL = 557, 
    SUBDATE_SYMBOL = 558, SUBJECT_SYMBOL = 559, SUBPARTITIONS_SYMBOL = 560, 
    SUBPARTITION_SYMBOL = 561, SUBSTR_SYMBOL = 562, SUBSTRING_SYMBOL = 563, 
    SUM_SYMBOL = 564, SUPER_SYMBOL = 565, SUSPEND_SYMBOL = 566, SWAPS_SYMBOL = 567, 
    SWITCHES_SYMBOL = 568, SYSDATE_SYMBOL = 569, SYSTEM_USER_SYMBOL = 570, 
    TABLES_SYMBOL = 571, TABLESPACE_SYMBOL = 572, TABLE_REF_PRIORITY_SYMBOL = 573, 
    TABLE_SYMBOL = 574, TABLE_CHECKSUM_SYMBOL = 575, TABLE_NAME_SYMBOL = 576, 
    TEMPORARY_SYMBOL = 577, TEMPTABLE_SYMBOL = 578, TERMINATED_SYMBOL = 579, 
    TEXT_SYMBOL = 580, THAN_SYMBOL = 581, THEN_SYMBOL = 582, TIMESTAMP_SYMBOL = 583, 
    TIMESTAMP_ADD_SYMBOL = 584, TIMESTAMP_DIFF_SYMBOL = 585, TIME_SYMBOL = 586, 
    TINYBLOB_SYMBOL = 587, TINYINT_SYMBOL = 588, TINYTEXT_SYMBOL = 589, 
    TO_SYMBOL = 590, TRAILING_SYMBOL = 591, TRANSACTION_SYMBOL = 592, TRIGGERS_SYMBOL = 593, 
    TRIGGER_SYMBOL = 594, TRIM_SYMBOL = 595, TRUE_SYMBOL = 596, TRUNCATE_SYMBOL = 597, 
    TYPES_SYMBOL = 598, TYPE_SYMBOL = 599, UDF_RETURNS_SYMBOL = 600, UNCOMMITTED_SYMBOL = 601, 
    UNDEFINED_SYMBOL = 602, UNDOFILE_SYMBOL = 603, UNDO_BUFFER_SIZE_SYMBOL = 604, 
    UNDO_SYMBOL = 605, UNICODE_SYMBOL = 606, UNINSTALL_SYMBOL = 607, UNION_SYMBOL = 608, 
    UNIQUE_SYMBOL = 609, UNKNOWN_SYMBOL = 610, UNLOCK_SYMBOL = 611, UNSIGNED_SYMBOL = 612, 
    UNTIL_SYMBOL = 613, UPDATE_SYMBOL = 614, UPGRADE_SYMBOL = 615, USAGE_SYMBOL = 616, 
    USER_RESOURCES_SYMBOL = 617, USER_SYMBOL = 618, USE_FRM_SYMBOL = 619, 
    USE_SYMBOL = 620, USING_SYMBOL = 621, UTC_DATE_SYMBOL = 622, UTC_TIMESTAMP_SYMBOL = 623, 
    UTC_TIME_SYMBOL = 624, VALIDATION_SYMBOL = 625, VALUES_SYMBOL = 626, 
    VALUE_SYMBOL = 627, VARBINARY_SYMBOL = 628, VARCHAR_SYMBOL = 629, VARCHARACTER_SYMBOL = 630, 
    VARIABLES_SYMBOL = 631, VARIANCE_SYMBOL = 632, VARYING_SYMBOL = 633, 
    VAR_POP_SYMBOL = 634, VAR_SAMP_SYMBOL = 635, VIEW_SYMBOL = 636, VIRTUAL_SYMBOL = 637, 
    WAIT_SYMBOL = 638, WARNINGS_SYMBOL = 639, WEEK_SYMBOL = 640, WEIGHT_STRING_SYMBOL = 641, 
    WHEN_SYMBOL = 642, WHERE_SYMBOL = 643, WHILE_SYMBOL = 644, WITH_SYMBOL = 645, 
    WITHOUT_SYMBOL = 646, WORK_SYMBOL = 647, WRAPPER_SYMBOL = 648, WRITE_SYMBOL = 649, 
    X509_SYMBOL = 650, XA_SYMBOL = 651, XID_SYMBOL = 652, XML_SYMBOL = 653, 
    XOR_SYMBOL = 654, YEAR_MONTH_SYMBOL = 655, YEAR_SYMBOL = 656, ZEROFILL_SYMBOL = 657, 
    PERSIST_SYMBOL = 658, ROLE_SYMBOL = 659, ADMIN_SYMBOL = 660, INVISIBLE_SYMBOL = 661, 
    VISIBLE_SYMBOL = 662, EXCEPT_SYMBOL = 663, COMPONENT_SYMBOL = 664, RECURSIVE_SYMBOL = 665, 
    JSON_OBJECTAGG_SYMBOL = 666, JSON_ARRAYAGG_SYMBOL = 667, OF_SYMBOL = 668, 
    SKIP_SYMBOL = 669, LOCKED_SYMBOL = 670, NOWAIT_SYMBOL = 671, GROUPING_SYMBOL = 672, 
    PERSIST_ONLY_SYMBOL = 673, HISTOGRAM_SYMBOL = 674, BUCKETS_SYMBOL = 675, 
    REMOTE_SYMBOL = 676, CLONE_SYMBOL = 677, CUME_DIST_SYMBOL = 678, DENSE_RANK_SYMBOL = 679, 
    EXCLUDE_SYMBOL = 680, FIRST_VALUE_SYMBOL = 681, FOLLOWING_SYMBOL = 682, 
    GROUPS_SYMBOL = 683, LAG_SYMBOL = 684, LAST_VALUE_SYMBOL = 685, LEAD_SYMBOL = 686, 
    NTH_VALUE_SYMBOL = 687, NTILE_SYMBOL = 688, NULLS_SYMBOL = 689, OTHERS_SYMBOL = 690, 
    OVER_SYMBOL = 691, PERCENT_RANK_SYMBOL = 692, PRECEDING_SYMBOL = 693, 
    RANK_SYMBOL = 694, RESPECT_SYMBOL = 695, ROW_NUMBER_SYMBOL = 696, TIES_SYMBOL = 697, 
    UNBOUNDED_SYMBOL = 698, WINDOW_SYMBOL = 699, EMPTY_SYMBOL = 700, JSON_TABLE_SYMBOL = 701, 
    NESTED_SYMBOL = 702, ORDINALITY_SYMBOL = 703, PATH_SYMBOL = 704, HISTORY_SYMBOL = 705, 
    REUSE_SYMBOL = 706, SRID_SYMBOL = 707, THREAD_PRIORITY_SYMBOL = 708, 
    RESOURCE_SYMBOL = 709, SYSTEM_SYMBOL = 710, VCPU_SYMBOL = 711, MASTER_PUBLIC_KEY_PATH_SYMBOL = 712, 
    GET_MASTER_PUBLIC_KEY_SYMBOL = 713, RESTART_SYMBOL = 714, DEFINITION_SYMBOL = 715, 
    DESCRIPTION_SYMBOL = 716, ORGANIZATION_SYMBOL = 717, REFERENCE_SYMBOL = 718, 
    OPTIONAL_SYMBOL = 719, SECONDARY_SYMBOL = 720, SECONDARY_ENGINE_SYMBOL = 721, 
    SECONDARY_LOAD_SYMBOL = 722, SECONDARY_UNLOAD_SYMBOL = 723, ACTIVE_SYMBOL = 724, 
    INACTIVE_SYMBOL = 725, LATERAL_SYMBOL = 726, RETAIN_SYMBOL = 727, OLD_SYMBOL = 728, 
    NETWORK_NAMESPACE_SYMBOL = 729, ENFORCED_SYMBOL = 730, ARRAY_SYMBOL = 731, 
    OJ_SYMBOL = 732, MEMBER_SYMBOL = 733, RANDOM_SYMBOL = 734, MASTER_COMPRESSION_ALGORITHM_SYMBOL = 735, 
    MASTER_ZSTD_COMPRESSION_LEVEL_SYMBOL = 736, PRIVILEGE_CHECKS_USER_SYMBOL = 737, 
    MASTER_TLS_CIPHERSUITES_SYMBOL = 738, REQUIRE_ROW_FORMAT_SYMBOL = 739, 
    PASSWORD_LOCK_TIME_SYMBOL = 740, FAILED_LOGIN_ATTEMPTS_SYMBOL = 741, 
    REQUIRE_TABLE_PRIMARY_KEY_CHECK_SYMBOL = 742, STREAM_SYMBOL = 743, OFF_SYMBOL = 744, 
    NOT2_SYMBOL = 745, CONCAT_PIPES_SYMBOL = 746, INT_NUMBER = 747, LONG_NUMBER = 748, 
    ULONGLONG_NUMBER = 749, EQUAL_OPERATOR = 750, ASSIGN_OPERATOR = 751, 
    NULL_SAFE_EQUAL_OPERATOR = 752, GREATER_OR_EQUAL_OPERATOR = 753, GREATER_THAN_OPERATOR = 754, 
    LESS_OR_EQUAL_OPERATOR = 755, LESS_THAN_OPERATOR = 756, NOT_EQUAL_OPERATOR = 757, 
    PLUS_OPERATOR = 758, MINUS_OPERATOR = 759, MULT_OPERATOR = 760, DIV_OPERATOR = 761, 
    MOD_OPERATOR = 762, LOGICAL_NOT_OPERATOR = 763, BITWISE_NOT_OPERATOR = 764, 
    SHIFT_LEFT_OPERATOR = 765, SHIFT_RIGHT_OPERATOR = 766, LOGICAL_AND_OPERATOR = 767, 
    BITWISE_AND_OPERATOR = 768, BITWISE_XOR_OPERATOR = 769, LOGICAL_OR_OPERATOR = 770, 
    BITWISE_OR_OPERATOR = 771, DOT_SYMBOL = 772, COMMA_SYMBOL = 773, SEMICOLON_SYMBOL = 774, 
    COLON_SYMBOL = 775, OPEN_PAR_SYMBOL = 776, CLOSE_PAR_SYMBOL = 777, OPEN_CURLY_SYMBOL = 778, 
    CLOSE_CURLY_SYMBOL = 779, UNDERLINE_SYMBOL = 780, JSON_SEPARATOR_SYMBOL = 781, 
    JSON_UNQUOTED_SEPARATOR_SYMBOL = 782, AT_SIGN_SYMBOL = 783, AT_TEXT_SUFFIX = 784, 
    AT_AT_SIGN_SYMBOL = 785, NULL2_SYMBOL = 786, PARAM_MARKER = 787, HEX_NUMBER = 788, 
    BIN_NUMBER = 789, DECIMAL_NUMBER = 790, FLOAT_NUMBER = 791, TIMESTAMPADD_SYMBOL = 792, 
    TIMESTAMPDIFF_SYMBOL = 793, RETURNING_SYMBOL = 794, JSON_VALUE_SYMBOL = 795, 
    TLS_SYMBOL = 796, ATTRIBUTE_SYMBOL = 797, ENGINE_ATTRIBUTE_SYMBOL = 798, 
    SECONDARY_ENGINE_ATTRIBUTE_SYMBOL = 799, SOURCE_CONNECTION_AUTO_FAILOVER_SYMBOL = 800, 
    ZONE_SYMBOL = 801, GRAMMAR_SELECTOR_DERIVED_EXPR = 802, REPLICA_SYMBOL = 803, 
    REPLICAS_SYMBOL = 804, ASSIGN_GTIDS_TO_ANONYMOUS_TRANSACTIONS_SYMBOL = 805, 
    GET_SOURCE_PUBLIC_KEY_SYMBOL = 806, SOURCE_AUTO_POSITION_SYMBOL = 807, 
    SOURCE_BIND_SYMBOL = 808, SOURCE_COMPRESSION_ALGORITHM_SYMBOL = 809, 
    SOURCE_CONNECT_RETRY_SYMBOL = 810, SOURCE_DELAY_SYMBOL = 811, SOURCE_HEARTBEAT_PERIOD_SYMBOL = 812, 
    SOURCE_HOST_SYMBOL = 813, SOURCE_LOG_FILE_SYMBOL = 814, SOURCE_LOG_POS_SYMBOL = 815, 
    SOURCE_PASSWORD_SYMBOL = 816, SOURCE_PORT_SYMBOL = 817, SOURCE_PUBLIC_KEY_PATH_SYMBOL = 818, 
    SOURCE_RETRY_COUNT_SYMBOL = 819, SOURCE_SSL_SYMBOL = 820, SOURCE_SSL_CA_SYMBOL = 821, 
    SOURCE_SSL_CAPATH_SYMBOL = 822, SOURCE_SSL_CERT_SYMBOL = 823, SOURCE_SSL_CIPHER_SYMBOL = 824, 
    SOURCE_SSL_CRL_SYMBOL = 825, SOURCE_SSL_CRLPATH_SYMBOL = 826, SOURCE_SSL_KEY_SYMBOL = 827, 
    SOURCE_SSL_VERIFY_SERVER_CERT_SYMBOL = 828, SOURCE_TLS_CIPHERSUITES_SYMBOL = 829, 
    SOURCE_TLS_VERSION_SYMBOL = 830, SOURCE_USER_SYMBOL = 831, SOURCE_ZSTD_COMPRESSION_LEVEL_SYMBOL = 832, 
    ST_COLLECT_SYMBOL = 833, KEYRING_SYMBOL = 834, AUTHENTICATION_SYMBOL = 835, 
    FACTOR_SYMBOL = 836, FINISH_SYMBOL = 837, INITIATE_SYMBOL = 838, REGISTRATION_SYMBOL = 839, 
    UNREGISTER_SYMBOL = 840, INITIAL_SYMBOL = 841, CHALLENGE_RESPONSE_SYMBOL = 842, 
    GTID_ONLY_SYMBOL = 843, INTERSECT_SYMBOL = 844, WHITESPACE = 845, INVALID_INPUT = 846, 
    UNDERSCORE_CHARSET = 847, IDENTIFIER = 848, NCHAR_TEXT = 849, BACK_TICK_QUOTED_ID = 850, 
    DOUBLE_QUOTED_TEXT = 851, SINGLE_QUOTED_TEXT = 852, VERSION_COMMENT_START = 853, 
    MYSQL_COMMENT_START = 854, VERSION_COMMENT_END = 855, BLOCK_COMMENT = 856, 
    INVALID_BLOCK_COMMENT = 857, POUND_COMMENT = 858, DASHDASH_COMMENT = 859, 
    NOT_EQUAL2_OPERATOR = 860
  };

  enum {
    RuleQuery = 0, RuleSimpleStatement = 1, RuleAlterStatement = 2, RuleAlterDatabase = 3, 
    RuleAlterDatabaseOption = 4, RuleAlterEvent = 5, RuleAlterLogfileGroup = 6, 
    RuleAlterLogfileGroupOptions = 7, RuleAlterLogfileGroupOption = 8, RuleAlterServer = 9, 
    RuleAlterTable = 10, RuleAlterTableActions = 11, RuleAlterCommandList = 12, 
    RuleAlterCommandsModifierList = 13, RuleStandaloneAlterCommands = 14, 
    RuleAlterPartition = 15, RuleAlterList = 16, RuleAlterCommandsModifier = 17, 
    RuleAlterListItem = 18, RulePlace = 19, RuleRestrict = 20, RuleAlterOrderList = 21, 
    RuleAlterAlgorithmOption = 22, RuleAlterLockOption = 23, RuleIndexLockAndAlgorithm = 24, 
    RuleWithValidation = 25, RuleRemovePartitioning = 26, RuleAllOrPartitionNameList = 27, 
    RuleAlterTablespace = 28, RuleAlterUndoTablespace = 29, RuleUndoTableSpaceOptions = 30, 
    RuleUndoTableSpaceOption = 31, RuleAlterTablespaceOptions = 32, RuleAlterTablespaceOption = 33, 
    RuleChangeTablespaceOption = 34, RuleAlterView = 35, RuleViewTail = 36, 
    RuleViewQueryBlock = 37, RuleViewCheckOption = 38, RuleAlterInstanceStatement = 39, 
    RuleCreateStatement = 40, RuleCreateDatabase = 41, RuleCreateDatabaseOption = 42, 
    RuleCreateTable = 43, RuleTableElementList = 44, RuleTableElement = 45, 
    RuleDuplicateAsQe = 46, RuleAsCreateQueryExpression = 47, RuleQueryExpressionOrParens = 48, 
    RuleQueryExpressionWithOptLockingClauses = 49, RuleCreateRoutine = 50, 
    RuleCreateProcedure = 51, RuleCreateFunction = 52, RuleCreateUdf = 53, 
    RuleRoutineCreateOption = 54, RuleRoutineAlterOptions = 55, RuleRoutineOption = 56, 
    RuleCreateIndex = 57, RuleIndexNameAndType = 58, RuleCreateIndexTarget = 59, 
    RuleCreateLogfileGroup = 60, RuleLogfileGroupOptions = 61, RuleLogfileGroupOption = 62, 
    RuleCreateServer = 63, RuleServerOptions = 64, RuleServerOption = 65, 
    RuleCreateTablespace = 66, RuleCreateUndoTablespace = 67, RuleTsDataFileName = 68, 
    RuleTsDataFile = 69, RuleTablespaceOptions = 70, RuleTablespaceOption = 71, 
    RuleTsOptionInitialSize = 72, RuleTsOptionUndoRedoBufferSize = 73, RuleTsOptionAutoextendSize = 74, 
    RuleTsOptionMaxSize = 75, RuleTsOptionExtentSize = 76, RuleTsOptionNodegroup = 77, 
    RuleTsOptionEngine = 78, RuleTsOptionWait = 79, RuleTsOptionComment = 80, 
    RuleTsOptionFileblockSize = 81, RuleTsOptionEncryption = 82, RuleTsOptionEngineAttribute = 83, 
    RuleCreateView = 84, RuleViewReplaceOrAlgorithm = 85, RuleViewAlgorithm = 86, 
    RuleViewSuid = 87, RuleCreateTrigger = 88, RuleTriggerFollowsPrecedesClause = 89, 
    RuleCreateEvent = 90, RuleCreateRole = 91, RuleCreateSpatialReference = 92, 
    RuleSrsAttribute = 93, RuleDropStatement = 94, RuleDropDatabase = 95, 
    RuleDropEvent = 96, RuleDropFunction = 97, RuleDropProcedure = 98, RuleDropIndex = 99, 
    RuleDropLogfileGroup = 100, RuleDropLogfileGroupOption = 101, RuleDropServer = 102, 
    RuleDropTable = 103, RuleDropTableSpace = 104, RuleDropTrigger = 105, 
    RuleDropView = 106, RuleDropRole = 107, RuleDropSpatialReference = 108, 
    RuleDropUndoTablespace = 109, RuleRenameTableStatement = 110, RuleRenamePair = 111, 
    RuleTruncateTableStatement = 112, RuleImportStatement = 113, RuleCallStatement = 114, 
    RuleDeleteStatement = 115, RulePartitionDelete = 116, RuleDeleteStatementOption = 117, 
    RuleDoStatement = 118, RuleHandlerStatement = 119, RuleHandlerReadOrScan = 120, 
    RuleInsertStatement = 121, RuleInsertLockOption = 122, RuleInsertFromConstructor = 123, 
    RuleFields = 124, RuleInsertValues = 125, RuleInsertQueryExpression = 126, 
    RuleValueList = 127, RuleValues = 128, RuleValuesReference = 129, RuleInsertUpdateList = 130, 
    RuleLoadStatement = 131, RuleDataOrXml = 132, RuleXmlRowsIdentifiedBy = 133, 
    RuleLoadDataFileTail = 134, RuleLoadDataFileTargetList = 135, RuleFieldOrVariableList = 136, 
    RuleReplaceStatement = 137, RuleSelectStatement = 138, RuleSelectStatementWithInto = 139, 
    RuleQueryExpression = 140, RuleQueryExpressionBody = 141, RuleQueryExpressionBodyNew = 142, 
    RuleQueryExpressionParens = 143, RuleQueryPrimary = 144, RuleQuerySpecification = 145, 
    RuleSubquery = 146, RuleQuerySpecOption = 147, RuleLimitClause = 148, 
    RuleSimpleLimitClause = 149, RuleLimitOptions = 150, RuleLimitOption = 151, 
    RuleIntoClause = 152, RuleProcedureAnalyseClause = 153, RuleHavingClause = 154, 
    RuleWindowClause = 155, RuleWindowDefinition = 156, RuleWindowSpec = 157, 
    RuleWindowSpecDetails = 158, RuleWindowFrameClause = 159, RuleWindowFrameUnits = 160, 
    RuleWindowFrameExtent = 161, RuleWindowFrameStart = 162, RuleWindowFrameBetween = 163, 
    RuleWindowFrameBound = 164, RuleWindowFrameExclusion = 165, RuleWithClause = 166, 
    RuleCommonTableExpression = 167, RuleGroupByClause = 168, RuleOlapOption = 169, 
    RuleOrderClause = 170, RuleDirection = 171, RuleFromClause = 172, RuleTableReferenceList = 173, 
    RuleTableValueConstructor = 174, RuleExplicitTable = 175, RuleRowValueExplicit = 176, 
    RuleSelectOption = 177, RuleLockingClauseList = 178, RuleLockingClause = 179, 
    RuleLockStrengh = 180, RuleLockedRowAction = 181, RuleSelectItemList = 182, 
    RuleSelectItem = 183, RuleSelectAlias = 184, RuleWhereClause = 185, 
    RuleTableReference = 186, RuleEscapedTableReference = 187, RuleJoinedTable = 188, 
    RuleNaturalJoinType = 189, RuleInnerJoinType = 190, RuleOuterJoinType = 191, 
    RuleTableFactor = 192, RuleSingleTable = 193, RuleSingleTableParens = 194, 
    RuleDerivedTable = 195, RuleTableReferenceListParens = 196, RuleTableFunction = 197, 
    RuleColumnsClause = 198, RuleJtColumn = 199, RuleOnEmptyOrError = 200, 
    RuleOnEmptyOrErrorJsonTable = 201, RuleOnEmpty = 202, RuleOnError = 203, 
    RuleJsonOnResponse = 204, RuleUnionOption = 205, RuleTableAlias = 206, 
    RuleIndexHintList = 207, RuleIndexHint = 208, RuleIndexHintType = 209, 
    RuleKeyOrIndex = 210, RuleConstraintKeyType = 211, RuleIndexHintClause = 212, 
    RuleIndexList = 213, RuleIndexListElement = 214, RuleUpdateStatement = 215, 
    RuleTransactionOrLockingStatement = 216, RuleTransactionStatement = 217, 
    RuleBeginWork = 218, RuleStartTransactionOptionList = 219, RuleSavepointStatement = 220, 
    RuleLockStatement = 221, RuleLockItem = 222, RuleLockOption = 223, RuleXaStatement = 224, 
    RuleXaConvert = 225, RuleXid = 226, RuleReplicationStatement = 227, 
    RuleResetOption = 228, RuleSourceResetOptions = 229, RuleReplicationLoad = 230, 
    RuleChangeReplicationSource = 231, RuleChangeSource = 232, RuleSourceDefinitions = 233, 
    RuleSourceDefinition = 234, RuleChangeReplicationSourceAutoPosition = 235, 
    RuleChangeReplicationSourceHost = 236, RuleChangeReplicationSourceBind = 237, 
    RuleChangeReplicationSourceUser = 238, RuleChangeReplicationSourcePassword = 239, 
    RuleChangeReplicationSourcePort = 240, RuleChangeReplicationSourceConnectRetry = 241, 
    RuleChangeReplicationSourceRetryCount = 242, RuleChangeReplicationSourceDelay = 243, 
    RuleChangeReplicationSourceSSL = 244, RuleChangeReplicationSourceSSLCA = 245, 
    RuleChangeReplicationSourceSSLCApath = 246, RuleChangeReplicationSourceSSLCipher = 247, 
    RuleChangeReplicationSourceSSLCLR = 248, RuleChangeReplicationSourceSSLCLRpath = 249, 
    RuleChangeReplicationSourceSSLKey = 250, RuleChangeReplicationSourceSSLVerifyServerCert = 251, 
    RuleChangeReplicationSourceTLSVersion = 252, RuleChangeReplicationSourceTLSCiphersuites = 253, 
    RuleChangeReplicationSourceSSLCert = 254, RuleChangeReplicationSourcePublicKey = 255, 
    RuleChangeReplicationSourceGetSourcePublicKey = 256, RuleChangeReplicationSourceHeartbeatPeriod = 257, 
    RuleChangeReplicationSourceCompressionAlgorithm = 258, RuleChangeReplicationSourceZstdCompressionLevel = 259, 
    RulePrivilegeCheckDef = 260, RuleTablePrimaryKeyCheckDef = 261, RuleAssignGtidsToAnonymousTransactionsDefinition = 262, 
    RuleSourceTlsCiphersuitesDef = 263, RuleSourceFileDef = 264, RuleSourceLogFile = 265, 
    RuleSourceLogPos = 266, RuleServerIdList = 267, RuleChangeReplication = 268, 
    RuleFilterDefinition = 269, RuleFilterDbList = 270, RuleFilterTableList = 271, 
    RuleFilterStringList = 272, RuleFilterWildDbTableString = 273, RuleFilterDbPairList = 274, 
    RuleStartReplicaStatement = 275, RuleStopReplicaStatement = 276, RuleReplicaUntil = 277, 
    RuleUserOption = 278, RulePasswordOption = 279, RuleDefaultAuthOption = 280, 
    RulePluginDirOption = 281, RuleReplicaThreadOptions = 282, RuleReplicaThreadOption = 283, 
    RuleGroupReplication = 284, RuleGroupReplicationStartOptions = 285, 
    RuleGroupReplicationStartOption = 286, RuleGroupReplicationUser = 287, 
    RuleGroupReplicationPassword = 288, RuleGroupReplicationPluginAuth = 289, 
    RuleReplica = 290, RulePreparedStatement = 291, RuleExecuteStatement = 292, 
    RuleExecuteVarList = 293, RuleCloneStatement = 294, RuleDataDirSSL = 295, 
    RuleSsl = 296, RuleAccountManagementStatement = 297, RuleAlterUserStatement = 298, 
    RuleAlterUserList = 299, RuleAlterUser = 300, RuleOldAlterUser = 301, 
    RuleUserFunction = 302, RuleCreateUserStatement = 303, RuleCreateUserTail = 304, 
    RuleUserAttributes = 305, RuleDefaultRoleClause = 306, RuleRequireClause = 307, 
    RuleConnectOptions = 308, RuleAccountLockPasswordExpireOptions = 309, 
    RuleUserAttribute = 310, RuleDropUserStatement = 311, RuleGrantStatement = 312, 
    RuleGrantTargetList = 313, RuleGrantOptions = 314, RuleExceptRoleList = 315, 
    RuleWithRoles = 316, RuleGrantAs = 317, RuleVersionedRequireClause = 318, 
    RuleRenameUserStatement = 319, RuleRevokeStatement = 320, RuleAclType = 321, 
    RuleRoleOrPrivilegesList = 322, RuleRoleOrPrivilege = 323, RuleGrantIdentifier = 324, 
    RuleRequireList = 325, RuleRequireListElement = 326, RuleGrantOption = 327, 
    RuleSetRoleStatement = 328, RuleRoleList = 329, RuleRole = 330, RuleTableAdministrationStatement = 331, 
    RuleHistogram = 332, RuleCheckOption = 333, RuleRepairType = 334, RuleInstallUninstallStatement = 335, 
    RuleSetStatement = 336, RuleStartOptionValueList = 337, RuleTransactionCharacteristics = 338, 
    RuleTransactionAccessMode = 339, RuleIsolationLevel = 340, RuleOptionValueListContinued = 341, 
    RuleOptionValueNoOptionType = 342, RuleOptionValue = 343, RuleSetSystemVariable = 344, 
    RuleStartOptionValueListFollowingOptionType = 345, RuleOptionValueFollowingOptionType = 346, 
    RuleSetExprOrDefault = 347, RuleShowDatabasesStatement = 348, RuleShowTablesStatement = 349, 
    RuleShowTriggersStatement = 350, RuleShowEventsStatement = 351, RuleShowTableStatusStatement = 352, 
    RuleShowOpenTablesStatement = 353, RuleShowPluginsStatement = 354, RuleShowEngineLogsStatement = 355, 
    RuleShowEngineMutexStatement = 356, RuleShowEngineStatusStatement = 357, 
    RuleShowColumnsStatement = 358, RuleShowBinaryLogsStatement = 359, RuleShowReplicasStatement = 360, 
    RuleShowBinlogEventsStatement = 361, RuleShowRelaylogEventsStatement = 362, 
    RuleShowKeysStatement = 363, RuleShowEnginesStatement = 364, RuleShowCountWarningsStatement = 365, 
    RuleShowCountErrorsStatement = 366, RuleShowWarningsStatement = 367, 
    RuleShowErrorsStatement = 368, RuleShowProfilesStatement = 369, RuleShowProfileStatement = 370, 
    RuleShowStatusStatement = 371, RuleShowProcessListStatement = 372, RuleShowVariablesStatement = 373, 
    RuleShowCharacterSetStatement = 374, RuleShowCollationStatement = 375, 
    RuleShowPrivilegesStatement = 376, RuleShowGrantsStatement = 377, RuleShowCreateDatabaseStatement = 378, 
    RuleShowCreateTableStatement = 379, RuleShowCreateViewStatement = 380, 
    RuleShowMasterStatusStatement = 381, RuleShowReplicaStatusStatement = 382, 
    RuleShowCreateProcedureStatement = 383, RuleShowCreateFunctionStatement = 384, 
    RuleShowCreateTriggerStatement = 385, RuleShowCreateProcedureStatusStatement = 386, 
    RuleShowCreateFunctionStatusStatement = 387, RuleShowCreateProcedureCodeStatement = 388, 
    RuleShowCreateFunctionCodeStatement = 389, RuleShowCreateEventStatement = 390, 
    RuleShowCreateUserStatement = 391, RuleShowCommandType = 392, RuleEngineOrAll = 393, 
    RuleFromOrIn = 394, RuleInDb = 395, RuleProfileDefinitions = 396, RuleProfileDefinition = 397, 
    RuleOtherAdministrativeStatement = 398, RuleKeyCacheListOrParts = 399, 
    RuleKeyCacheList = 400, RuleAssignToKeycache = 401, RuleAssignToKeycachePartition = 402, 
    RuleCacheKeyList = 403, RuleKeyUsageElement = 404, RuleKeyUsageList = 405, 
    RuleFlushOption = 406, RuleLogType = 407, RuleFlushTables = 408, RuleFlushTablesOptions = 409, 
    RulePreloadTail = 410, RulePreloadList = 411, RulePreloadKeys = 412, 
    RuleAdminPartition = 413, RuleResourceGroupManagement = 414, RuleCreateResourceGroup = 415, 
    RuleResourceGroupVcpuList = 416, RuleVcpuNumOrRange = 417, RuleResourceGroupPriority = 418, 
    RuleResourceGroupEnableDisable = 419, RuleAlterResourceGroup = 420, 
    RuleSetResourceGroup = 421, RuleThreadIdList = 422, RuleDropResourceGroup = 423, 
    RuleUtilityStatement = 424, RuleDescribeStatement = 425, RuleExplainStatement = 426, 
    RuleExplainableStatement = 427, RuleHelpCommand = 428, RuleUseCommand = 429, 
    RuleRestartServer = 430, RuleExpr = 431, RuleBoolPri = 432, RuleCompOp = 433, 
    RulePredicate = 434, RulePredicateOperations = 435, RuleBitExpr = 436, 
    RuleSimpleExpr = 437, RuleArrayCast = 438, RuleJsonOperator = 439, RuleSumExpr = 440, 
    RuleGroupingOperation = 441, RuleWindowFunctionCall = 442, RuleWindowingClause = 443, 
    RuleLeadLagInfo = 444, RuleStableInteger = 445, RuleParamOrVar = 446, 
    RuleNullTreatment = 447, RuleJsonFunction = 448, RuleInSumExpr = 449, 
    RuleIdentListArg = 450, RuleIdentList = 451, RuleFulltextOptions = 452, 
    RuleRuntimeFunctionCall = 453, RuleReturningType = 454, RuleGeometryFunction = 455, 
    RuleTimeFunctionParameters = 456, RuleFractionalPrecision = 457, RuleWeightStringLevels = 458, 
    RuleWeightStringLevelListItem = 459, RuleDateTimeTtype = 460, RuleTrimFunction = 461, 
    RuleSubstringFunction = 462, RuleFunctionCall = 463, RuleUdfExprList = 464, 
    RuleUdfExpr = 465, RuleUserVariable = 466, RuleInExpressionUserVariableAssignment = 467, 
    RuleRvalueSystemOrUserVariable = 468, RuleLvalueVariable = 469, RuleRvalueSystemVariable = 470, 
    RuleWhenExpression = 471, RuleThenExpression = 472, RuleElseExpression = 473, 
    RuleCastType = 474, RuleExprList = 475, RuleCharset = 476, RuleNotRule = 477, 
    RuleNot2Rule = 478, RuleInterval = 479, RuleIntervalTimeStamp = 480, 
    RuleExprListWithParentheses = 481, RuleExprWithParentheses = 482, RuleSimpleExprWithParentheses = 483, 
    RuleOrderList = 484, RuleOrderExpression = 485, RuleGroupList = 486, 
    RuleGroupingExpression = 487, RuleChannel = 488, RuleCompoundStatement = 489, 
    RuleReturnStatement = 490, RuleIfStatement = 491, RuleIfBody = 492, 
    RuleThenStatement = 493, RuleCompoundStatementList = 494, RuleCaseStatement = 495, 
    RuleElseStatement = 496, RuleLabeledBlock = 497, RuleUnlabeledBlock = 498, 
    RuleLabel = 499, RuleBeginEndBlock = 500, RuleLabeledControl = 501, 
    RuleUnlabeledControl = 502, RuleLoopBlock = 503, RuleWhileDoBlock = 504, 
    RuleRepeatUntilBlock = 505, RuleSpDeclarations = 506, RuleSpDeclaration = 507, 
    RuleVariableDeclaration = 508, RuleConditionDeclaration = 509, RuleSpCondition = 510, 
    RuleSqlstate = 511, RuleHandlerDeclaration = 512, RuleHandlerCondition = 513, 
    RuleCursorDeclaration = 514, RuleIterateStatement = 515, RuleLeaveStatement = 516, 
    RuleGetDiagnosticsStatement = 517, RuleSignalAllowedExpr = 518, RuleStatementInformationItem = 519, 
    RuleConditionInformationItem = 520, RuleSignalInformationItemName = 521, 
    RuleSignalStatement = 522, RuleResignalStatement = 523, RuleSignalInformationItem = 524, 
    RuleCursorOpen = 525, RuleCursorClose = 526, RuleCursorFetch = 527, 
    RuleSchedule = 528, RuleColumnDefinition = 529, RuleCheckOrReferences = 530, 
    RuleCheckConstraint = 531, RuleConstraintEnforcement = 532, RuleTableConstraintDef = 533, 
    RuleConstraintName = 534, RuleFieldDefinition = 535, RuleColumnAttribute = 536, 
    RuleColumnFormat = 537, RuleStorageMedia = 538, RuleNow = 539, RuleNowOrSignedLiteral = 540, 
    RuleGcolAttribute = 541, RuleReferences = 542, RuleDeleteOption = 543, 
    RuleKeyList = 544, RuleKeyPart = 545, RuleKeyListWithExpression = 546, 
    RuleKeyPartOrExpression = 547, RuleKeyListVariants = 548, RuleIndexType = 549, 
    RuleIndexOption = 550, RuleCommonIndexOption = 551, RuleVisibility = 552, 
    RuleIndexTypeClause = 553, RuleFulltextIndexOption = 554, RuleSpatialIndexOption = 555, 
    RuleDataTypeDefinition = 556, RuleDataType = 557, RuleNchar = 558, RuleRealType = 559, 
    RuleFieldLength = 560, RuleFieldOptions = 561, RuleCharsetWithOptBinary = 562, 
    RuleAscii = 563, RuleUnicode = 564, RuleWsNumCodepoints = 565, RuleTypeDatetimePrecision = 566, 
    RuleFunctionDatetimePrecision = 567, RuleCharsetName = 568, RuleCollationName = 569, 
    RuleCreateTableOptions = 570, RuleCreateTableOptionsEtc = 571, RuleCreatePartitioningEtc = 572, 
    RuleCreateTableOptionsSpaceSeparated = 573, RuleCreateTableOption = 574, 
    RuleTernaryOption = 575, RuleDefaultCollation = 576, RuleDefaultEncryption = 577, 
    RuleDefaultCharset = 578, RulePartitionClause = 579, RulePartitionTypeDef = 580, 
    RuleSubPartitions = 581, RulePartitionKeyAlgorithm = 582, RulePartitionDefinitions = 583, 
    RulePartitionDefinition = 584, RulePartitionValuesIn = 585, RulePartitionOption = 586, 
    RuleSubpartitionDefinition = 587, RulePartitionValueItemListParen = 588, 
    RulePartitionValueItem = 589, RuleDefinerClause = 590, RuleIfExists = 591, 
    RuleIfNotExists = 592, RuleIgnoreUnknownUser = 593, RuleProcedureParameter = 594, 
    RuleFunctionParameter = 595, RuleCollate = 596, RuleTypeWithOptCollate = 597, 
    RuleSchemaIdentifierPair = 598, RuleViewRefList = 599, RuleUpdateList = 600, 
    RuleUpdateElement = 601, RuleCharsetClause = 602, RuleFieldsClause = 603, 
    RuleFieldTerm = 604, RuleLinesClause = 605, RuleLineTerm = 606, RuleUserList = 607, 
    RuleCreateUserList = 608, RuleCreateUser = 609, RuleCreateUserWithMfa = 610, 
    RuleIdentification = 611, RuleIdentifiedByPassword = 612, RuleIdentifiedByRandomPassword = 613, 
    RuleIdentifiedWithPlugin = 614, RuleIdentifiedWithPluginAsAuth = 615, 
    RuleIdentifiedWithPluginByPassword = 616, RuleIdentifiedWithPluginByRandomPassword = 617, 
    RuleInitialAuth = 618, RuleRetainCurrentPassword = 619, RuleDiscardOldPassword = 620, 
    RuleUserRegistration = 621, RuleFactor = 622, RuleReplacePassword = 623, 
    RuleUserIdentifierOrText = 624, RuleUser = 625, RuleLikeClause = 626, 
    RuleLikeOrWhere = 627, RuleOnlineOption = 628, RuleNoWriteToBinLog = 629, 
    RuleUsePartition = 630, RuleFieldIdentifier = 631, RuleColumnName = 632, 
    RuleColumnInternalRef = 633, RuleColumnInternalRefList = 634, RuleColumnRef = 635, 
    RuleInsertIdentifier = 636, RuleIndexName = 637, RuleIndexRef = 638, 
    RuleTableWild = 639, RuleSchemaName = 640, RuleSchemaRef = 641, RuleProcedureName = 642, 
    RuleProcedureRef = 643, RuleFunctionName = 644, RuleFunctionRef = 645, 
    RuleTriggerName = 646, RuleTriggerRef = 647, RuleViewName = 648, RuleViewRef = 649, 
    RuleTablespaceName = 650, RuleTablespaceRef = 651, RuleLogfileGroupName = 652, 
    RuleLogfileGroupRef = 653, RuleEventName = 654, RuleEventRef = 655, 
    RuleUdfName = 656, RuleServerName = 657, RuleServerRef = 658, RuleEngineRef = 659, 
    RuleTableName = 660, RuleFilterTableRef = 661, RuleTableRefWithWildcard = 662, 
    RuleTableRef = 663, RuleTableRefList = 664, RuleTableAliasRefList = 665, 
    RuleParameterName = 666, RuleLabelIdentifier = 667, RuleLabelRef = 668, 
    RuleRoleIdentifier = 669, RulePluginRef = 670, RuleComponentRef = 671, 
    RuleResourceGroupRef = 672, RuleWindowName = 673, RulePureIdentifier = 674, 
    RuleIdentifier = 675, RuleIdentifierList = 676, RuleIdentifierListWithParentheses = 677, 
    RuleQualifiedIdentifier = 678, RuleSimpleIdentifier = 679, RuleDotIdentifier = 680, 
    RuleUlong_number = 681, RuleReal_ulong_number = 682, RuleUlonglong_number = 683, 
    RuleReal_ulonglong_number = 684, RuleSignedLiteral = 685, RuleSignedLiteralOrNull = 686, 
    RuleLiteral = 687, RuleLiteralOrNull = 688, RuleNullAsLiteral = 689, 
    RuleStringList = 690, RuleTextStringLiteral = 691, RuleTextString = 692, 
    RuleTextStringHash = 693, RuleTextLiteral = 694, RuleTextStringNoLinebreak = 695, 
    RuleTextStringLiteralList = 696, RuleNumLiteral = 697, RuleBoolLiteral = 698, 
    RuleNullLiteral = 699, RuleInt64Literal = 700, RuleTemporalLiteral = 701, 
    RuleFloatOptions = 702, RuleStandardFloatOptions = 703, RulePrecision = 704, 
    RuleTextOrIdentifier = 705, RuleLValueIdentifier = 706, RuleRoleIdentifierOrText = 707, 
    RuleSizeNumber = 708, RuleParentheses = 709, RuleEqual = 710, RuleOptionType = 711, 
    RuleRvalueSystemVariableType = 712, RuleSetVarIdentType = 713, RuleJsonAttribute = 714, 
    RuleIdentifierKeyword = 715, RuleIdentifierKeywordsAmbiguous1RolesAndLabels = 716, 
    RuleIdentifierKeywordsAmbiguous2Labels = 717, RuleLabelKeyword = 718, 
    RuleIdentifierKeywordsAmbiguous3Roles = 719, RuleIdentifierKeywordsUnambiguous = 720, 
    RuleRoleKeyword = 721, RuleLValueKeyword = 722, RuleIdentifierKeywordsAmbiguous4SystemVariables = 723, 
    RuleRoleOrIdentifierKeyword = 724, RuleRoleOrLabelKeyword = 725
  };

  explicit MySQLParser(antlr4::TokenStream *input);

  MySQLParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~MySQLParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class QueryContext;
  class SimpleStatementContext;
  class AlterStatementContext;
  class AlterDatabaseContext;
  class AlterDatabaseOptionContext;
  class AlterEventContext;
  class AlterLogfileGroupContext;
  class AlterLogfileGroupOptionsContext;
  class AlterLogfileGroupOptionContext;
  class AlterServerContext;
  class AlterTableContext;
  class AlterTableActionsContext;
  class AlterCommandListContext;
  class AlterCommandsModifierListContext;
  class StandaloneAlterCommandsContext;
  class AlterPartitionContext;
  class AlterListContext;
  class AlterCommandsModifierContext;
  class AlterListItemContext;
  class PlaceContext;
  class RestrictContext;
  class AlterOrderListContext;
  class AlterAlgorithmOptionContext;
  class AlterLockOptionContext;
  class IndexLockAndAlgorithmContext;
  class WithValidationContext;
  class RemovePartitioningContext;
  class AllOrPartitionNameListContext;
  class AlterTablespaceContext;
  class AlterUndoTablespaceContext;
  class UndoTableSpaceOptionsContext;
  class UndoTableSpaceOptionContext;
  class AlterTablespaceOptionsContext;
  class AlterTablespaceOptionContext;
  class ChangeTablespaceOptionContext;
  class AlterViewContext;
  class ViewTailContext;
  class ViewQueryBlockContext;
  class ViewCheckOptionContext;
  class AlterInstanceStatementContext;
  class CreateStatementContext;
  class CreateDatabaseContext;
  class CreateDatabaseOptionContext;
  class CreateTableContext;
  class TableElementListContext;
  class TableElementContext;
  class DuplicateAsQeContext;
  class AsCreateQueryExpressionContext;
  class QueryExpressionOrParensContext;
  class QueryExpressionWithOptLockingClausesContext;
  class CreateRoutineContext;
  class CreateProcedureContext;
  class CreateFunctionContext;
  class CreateUdfContext;
  class RoutineCreateOptionContext;
  class RoutineAlterOptionsContext;
  class RoutineOptionContext;
  class CreateIndexContext;
  class IndexNameAndTypeContext;
  class CreateIndexTargetContext;
  class CreateLogfileGroupContext;
  class LogfileGroupOptionsContext;
  class LogfileGroupOptionContext;
  class CreateServerContext;
  class ServerOptionsContext;
  class ServerOptionContext;
  class CreateTablespaceContext;
  class CreateUndoTablespaceContext;
  class TsDataFileNameContext;
  class TsDataFileContext;
  class TablespaceOptionsContext;
  class TablespaceOptionContext;
  class TsOptionInitialSizeContext;
  class TsOptionUndoRedoBufferSizeContext;
  class TsOptionAutoextendSizeContext;
  class TsOptionMaxSizeContext;
  class TsOptionExtentSizeContext;
  class TsOptionNodegroupContext;
  class TsOptionEngineContext;
  class TsOptionWaitContext;
  class TsOptionCommentContext;
  class TsOptionFileblockSizeContext;
  class TsOptionEncryptionContext;
  class TsOptionEngineAttributeContext;
  class CreateViewContext;
  class ViewReplaceOrAlgorithmContext;
  class ViewAlgorithmContext;
  class ViewSuidContext;
  class CreateTriggerContext;
  class TriggerFollowsPrecedesClauseContext;
  class CreateEventContext;
  class CreateRoleContext;
  class CreateSpatialReferenceContext;
  class SrsAttributeContext;
  class DropStatementContext;
  class DropDatabaseContext;
  class DropEventContext;
  class DropFunctionContext;
  class DropProcedureContext;
  class DropIndexContext;
  class DropLogfileGroupContext;
  class DropLogfileGroupOptionContext;
  class DropServerContext;
  class DropTableContext;
  class DropTableSpaceContext;
  class DropTriggerContext;
  class DropViewContext;
  class DropRoleContext;
  class DropSpatialReferenceContext;
  class DropUndoTablespaceContext;
  class RenameTableStatementContext;
  class RenamePairContext;
  class TruncateTableStatementContext;
  class ImportStatementContext;
  class CallStatementContext;
  class DeleteStatementContext;
  class PartitionDeleteContext;
  class DeleteStatementOptionContext;
  class DoStatementContext;
  class HandlerStatementContext;
  class HandlerReadOrScanContext;
  class InsertStatementContext;
  class InsertLockOptionContext;
  class InsertFromConstructorContext;
  class FieldsContext;
  class InsertValuesContext;
  class InsertQueryExpressionContext;
  class ValueListContext;
  class ValuesContext;
  class ValuesReferenceContext;
  class InsertUpdateListContext;
  class LoadStatementContext;
  class DataOrXmlContext;
  class XmlRowsIdentifiedByContext;
  class LoadDataFileTailContext;
  class LoadDataFileTargetListContext;
  class FieldOrVariableListContext;
  class ReplaceStatementContext;
  class SelectStatementContext;
  class SelectStatementWithIntoContext;
  class QueryExpressionContext;
  class QueryExpressionBodyContext;
  class QueryExpressionBodyNewContext;
  class QueryExpressionParensContext;
  class QueryPrimaryContext;
  class QuerySpecificationContext;
  class SubqueryContext;
  class QuerySpecOptionContext;
  class LimitClauseContext;
  class SimpleLimitClauseContext;
  class LimitOptionsContext;
  class LimitOptionContext;
  class IntoClauseContext;
  class ProcedureAnalyseClauseContext;
  class HavingClauseContext;
  class WindowClauseContext;
  class WindowDefinitionContext;
  class WindowSpecContext;
  class WindowSpecDetailsContext;
  class WindowFrameClauseContext;
  class WindowFrameUnitsContext;
  class WindowFrameExtentContext;
  class WindowFrameStartContext;
  class WindowFrameBetweenContext;
  class WindowFrameBoundContext;
  class WindowFrameExclusionContext;
  class WithClauseContext;
  class CommonTableExpressionContext;
  class GroupByClauseContext;
  class OlapOptionContext;
  class OrderClauseContext;
  class DirectionContext;
  class FromClauseContext;
  class TableReferenceListContext;
  class TableValueConstructorContext;
  class ExplicitTableContext;
  class RowValueExplicitContext;
  class SelectOptionContext;
  class LockingClauseListContext;
  class LockingClauseContext;
  class LockStrenghContext;
  class LockedRowActionContext;
  class SelectItemListContext;
  class SelectItemContext;
  class SelectAliasContext;
  class WhereClauseContext;
  class TableReferenceContext;
  class EscapedTableReferenceContext;
  class JoinedTableContext;
  class NaturalJoinTypeContext;
  class InnerJoinTypeContext;
  class OuterJoinTypeContext;
  class TableFactorContext;
  class SingleTableContext;
  class SingleTableParensContext;
  class DerivedTableContext;
  class TableReferenceListParensContext;
  class TableFunctionContext;
  class ColumnsClauseContext;
  class JtColumnContext;
  class OnEmptyOrErrorContext;
  class OnEmptyOrErrorJsonTableContext;
  class OnEmptyContext;
  class OnErrorContext;
  class JsonOnResponseContext;
  class UnionOptionContext;
  class TableAliasContext;
  class IndexHintListContext;
  class IndexHintContext;
  class IndexHintTypeContext;
  class KeyOrIndexContext;
  class ConstraintKeyTypeContext;
  class IndexHintClauseContext;
  class IndexListContext;
  class IndexListElementContext;
  class UpdateStatementContext;
  class TransactionOrLockingStatementContext;
  class TransactionStatementContext;
  class BeginWorkContext;
  class StartTransactionOptionListContext;
  class SavepointStatementContext;
  class LockStatementContext;
  class LockItemContext;
  class LockOptionContext;
  class XaStatementContext;
  class XaConvertContext;
  class XidContext;
  class ReplicationStatementContext;
  class ResetOptionContext;
  class SourceResetOptionsContext;
  class ReplicationLoadContext;
  class ChangeReplicationSourceContext;
  class ChangeSourceContext;
  class SourceDefinitionsContext;
  class SourceDefinitionContext;
  class ChangeReplicationSourceAutoPositionContext;
  class ChangeReplicationSourceHostContext;
  class ChangeReplicationSourceBindContext;
  class ChangeReplicationSourceUserContext;
  class ChangeReplicationSourcePasswordContext;
  class ChangeReplicationSourcePortContext;
  class ChangeReplicationSourceConnectRetryContext;
  class ChangeReplicationSourceRetryCountContext;
  class ChangeReplicationSourceDelayContext;
  class ChangeReplicationSourceSSLContext;
  class ChangeReplicationSourceSSLCAContext;
  class ChangeReplicationSourceSSLCApathContext;
  class ChangeReplicationSourceSSLCipherContext;
  class ChangeReplicationSourceSSLCLRContext;
  class ChangeReplicationSourceSSLCLRpathContext;
  class ChangeReplicationSourceSSLKeyContext;
  class ChangeReplicationSourceSSLVerifyServerCertContext;
  class ChangeReplicationSourceTLSVersionContext;
  class ChangeReplicationSourceTLSCiphersuitesContext;
  class ChangeReplicationSourceSSLCertContext;
  class ChangeReplicationSourcePublicKeyContext;
  class ChangeReplicationSourceGetSourcePublicKeyContext;
  class ChangeReplicationSourceHeartbeatPeriodContext;
  class ChangeReplicationSourceCompressionAlgorithmContext;
  class ChangeReplicationSourceZstdCompressionLevelContext;
  class PrivilegeCheckDefContext;
  class TablePrimaryKeyCheckDefContext;
  class AssignGtidsToAnonymousTransactionsDefinitionContext;
  class SourceTlsCiphersuitesDefContext;
  class SourceFileDefContext;
  class SourceLogFileContext;
  class SourceLogPosContext;
  class ServerIdListContext;
  class ChangeReplicationContext;
  class FilterDefinitionContext;
  class FilterDbListContext;
  class FilterTableListContext;
  class FilterStringListContext;
  class FilterWildDbTableStringContext;
  class FilterDbPairListContext;
  class StartReplicaStatementContext;
  class StopReplicaStatementContext;
  class ReplicaUntilContext;
  class UserOptionContext;
  class PasswordOptionContext;
  class DefaultAuthOptionContext;
  class PluginDirOptionContext;
  class ReplicaThreadOptionsContext;
  class ReplicaThreadOptionContext;
  class GroupReplicationContext;
  class GroupReplicationStartOptionsContext;
  class GroupReplicationStartOptionContext;
  class GroupReplicationUserContext;
  class GroupReplicationPasswordContext;
  class GroupReplicationPluginAuthContext;
  class ReplicaContext;
  class PreparedStatementContext;
  class ExecuteStatementContext;
  class ExecuteVarListContext;
  class CloneStatementContext;
  class DataDirSSLContext;
  class SslContext;
  class AccountManagementStatementContext;
  class AlterUserStatementContext;
  class AlterUserListContext;
  class AlterUserContext;
  class OldAlterUserContext;
  class UserFunctionContext;
  class CreateUserStatementContext;
  class CreateUserTailContext;
  class UserAttributesContext;
  class DefaultRoleClauseContext;
  class RequireClauseContext;
  class ConnectOptionsContext;
  class AccountLockPasswordExpireOptionsContext;
  class UserAttributeContext;
  class DropUserStatementContext;
  class GrantStatementContext;
  class GrantTargetListContext;
  class GrantOptionsContext;
  class ExceptRoleListContext;
  class WithRolesContext;
  class GrantAsContext;
  class VersionedRequireClauseContext;
  class RenameUserStatementContext;
  class RevokeStatementContext;
  class AclTypeContext;
  class RoleOrPrivilegesListContext;
  class RoleOrPrivilegeContext;
  class GrantIdentifierContext;
  class RequireListContext;
  class RequireListElementContext;
  class GrantOptionContext;
  class SetRoleStatementContext;
  class RoleListContext;
  class RoleContext;
  class TableAdministrationStatementContext;
  class HistogramContext;
  class CheckOptionContext;
  class RepairTypeContext;
  class InstallUninstallStatementContext;
  class SetStatementContext;
  class StartOptionValueListContext;
  class TransactionCharacteristicsContext;
  class TransactionAccessModeContext;
  class IsolationLevelContext;
  class OptionValueListContinuedContext;
  class OptionValueNoOptionTypeContext;
  class OptionValueContext;
  class SetSystemVariableContext;
  class StartOptionValueListFollowingOptionTypeContext;
  class OptionValueFollowingOptionTypeContext;
  class SetExprOrDefaultContext;
  class ShowDatabasesStatementContext;
  class ShowTablesStatementContext;
  class ShowTriggersStatementContext;
  class ShowEventsStatementContext;
  class ShowTableStatusStatementContext;
  class ShowOpenTablesStatementContext;
  class ShowPluginsStatementContext;
  class ShowEngineLogsStatementContext;
  class ShowEngineMutexStatementContext;
  class ShowEngineStatusStatementContext;
  class ShowColumnsStatementContext;
  class ShowBinaryLogsStatementContext;
  class ShowReplicasStatementContext;
  class ShowBinlogEventsStatementContext;
  class ShowRelaylogEventsStatementContext;
  class ShowKeysStatementContext;
  class ShowEnginesStatementContext;
  class ShowCountWarningsStatementContext;
  class ShowCountErrorsStatementContext;
  class ShowWarningsStatementContext;
  class ShowErrorsStatementContext;
  class ShowProfilesStatementContext;
  class ShowProfileStatementContext;
  class ShowStatusStatementContext;
  class ShowProcessListStatementContext;
  class ShowVariablesStatementContext;
  class ShowCharacterSetStatementContext;
  class ShowCollationStatementContext;
  class ShowPrivilegesStatementContext;
  class ShowGrantsStatementContext;
  class ShowCreateDatabaseStatementContext;
  class ShowCreateTableStatementContext;
  class ShowCreateViewStatementContext;
  class ShowMasterStatusStatementContext;
  class ShowReplicaStatusStatementContext;
  class ShowCreateProcedureStatementContext;
  class ShowCreateFunctionStatementContext;
  class ShowCreateTriggerStatementContext;
  class ShowCreateProcedureStatusStatementContext;
  class ShowCreateFunctionStatusStatementContext;
  class ShowCreateProcedureCodeStatementContext;
  class ShowCreateFunctionCodeStatementContext;
  class ShowCreateEventStatementContext;
  class ShowCreateUserStatementContext;
  class ShowCommandTypeContext;
  class EngineOrAllContext;
  class FromOrInContext;
  class InDbContext;
  class ProfileDefinitionsContext;
  class ProfileDefinitionContext;
  class OtherAdministrativeStatementContext;
  class KeyCacheListOrPartsContext;
  class KeyCacheListContext;
  class AssignToKeycacheContext;
  class AssignToKeycachePartitionContext;
  class CacheKeyListContext;
  class KeyUsageElementContext;
  class KeyUsageListContext;
  class FlushOptionContext;
  class LogTypeContext;
  class FlushTablesContext;
  class FlushTablesOptionsContext;
  class PreloadTailContext;
  class PreloadListContext;
  class PreloadKeysContext;
  class AdminPartitionContext;
  class ResourceGroupManagementContext;
  class CreateResourceGroupContext;
  class ResourceGroupVcpuListContext;
  class VcpuNumOrRangeContext;
  class ResourceGroupPriorityContext;
  class ResourceGroupEnableDisableContext;
  class AlterResourceGroupContext;
  class SetResourceGroupContext;
  class ThreadIdListContext;
  class DropResourceGroupContext;
  class UtilityStatementContext;
  class DescribeStatementContext;
  class ExplainStatementContext;
  class ExplainableStatementContext;
  class HelpCommandContext;
  class UseCommandContext;
  class RestartServerContext;
  class ExprContext;
  class BoolPriContext;
  class CompOpContext;
  class PredicateContext;
  class PredicateOperationsContext;
  class BitExprContext;
  class SimpleExprContext;
  class ArrayCastContext;
  class JsonOperatorContext;
  class SumExprContext;
  class GroupingOperationContext;
  class WindowFunctionCallContext;
  class WindowingClauseContext;
  class LeadLagInfoContext;
  class StableIntegerContext;
  class ParamOrVarContext;
  class NullTreatmentContext;
  class JsonFunctionContext;
  class InSumExprContext;
  class IdentListArgContext;
  class IdentListContext;
  class FulltextOptionsContext;
  class RuntimeFunctionCallContext;
  class ReturningTypeContext;
  class GeometryFunctionContext;
  class TimeFunctionParametersContext;
  class FractionalPrecisionContext;
  class WeightStringLevelsContext;
  class WeightStringLevelListItemContext;
  class DateTimeTtypeContext;
  class TrimFunctionContext;
  class SubstringFunctionContext;
  class FunctionCallContext;
  class UdfExprListContext;
  class UdfExprContext;
  class UserVariableContext;
  class InExpressionUserVariableAssignmentContext;
  class RvalueSystemOrUserVariableContext;
  class LvalueVariableContext;
  class RvalueSystemVariableContext;
  class WhenExpressionContext;
  class ThenExpressionContext;
  class ElseExpressionContext;
  class CastTypeContext;
  class ExprListContext;
  class CharsetContext;
  class NotRuleContext;
  class Not2RuleContext;
  class IntervalContext;
  class IntervalTimeStampContext;
  class ExprListWithParenthesesContext;
  class ExprWithParenthesesContext;
  class SimpleExprWithParenthesesContext;
  class OrderListContext;
  class OrderExpressionContext;
  class GroupListContext;
  class GroupingExpressionContext;
  class ChannelContext;
  class CompoundStatementContext;
  class ReturnStatementContext;
  class IfStatementContext;
  class IfBodyContext;
  class ThenStatementContext;
  class CompoundStatementListContext;
  class CaseStatementContext;
  class ElseStatementContext;
  class LabeledBlockContext;
  class UnlabeledBlockContext;
  class LabelContext;
  class BeginEndBlockContext;
  class LabeledControlContext;
  class UnlabeledControlContext;
  class LoopBlockContext;
  class WhileDoBlockContext;
  class RepeatUntilBlockContext;
  class SpDeclarationsContext;
  class SpDeclarationContext;
  class VariableDeclarationContext;
  class ConditionDeclarationContext;
  class SpConditionContext;
  class SqlstateContext;
  class HandlerDeclarationContext;
  class HandlerConditionContext;
  class CursorDeclarationContext;
  class IterateStatementContext;
  class LeaveStatementContext;
  class GetDiagnosticsStatementContext;
  class SignalAllowedExprContext;
  class StatementInformationItemContext;
  class ConditionInformationItemContext;
  class SignalInformationItemNameContext;
  class SignalStatementContext;
  class ResignalStatementContext;
  class SignalInformationItemContext;
  class CursorOpenContext;
  class CursorCloseContext;
  class CursorFetchContext;
  class ScheduleContext;
  class ColumnDefinitionContext;
  class CheckOrReferencesContext;
  class CheckConstraintContext;
  class ConstraintEnforcementContext;
  class TableConstraintDefContext;
  class ConstraintNameContext;
  class FieldDefinitionContext;
  class ColumnAttributeContext;
  class ColumnFormatContext;
  class StorageMediaContext;
  class NowContext;
  class NowOrSignedLiteralContext;
  class GcolAttributeContext;
  class ReferencesContext;
  class DeleteOptionContext;
  class KeyListContext;
  class KeyPartContext;
  class KeyListWithExpressionContext;
  class KeyPartOrExpressionContext;
  class KeyListVariantsContext;
  class IndexTypeContext;
  class IndexOptionContext;
  class CommonIndexOptionContext;
  class VisibilityContext;
  class IndexTypeClauseContext;
  class FulltextIndexOptionContext;
  class SpatialIndexOptionContext;
  class DataTypeDefinitionContext;
  class DataTypeContext;
  class NcharContext;
  class RealTypeContext;
  class FieldLengthContext;
  class FieldOptionsContext;
  class CharsetWithOptBinaryContext;
  class AsciiContext;
  class UnicodeContext;
  class WsNumCodepointsContext;
  class TypeDatetimePrecisionContext;
  class FunctionDatetimePrecisionContext;
  class CharsetNameContext;
  class CollationNameContext;
  class CreateTableOptionsContext;
  class CreateTableOptionsEtcContext;
  class CreatePartitioningEtcContext;
  class CreateTableOptionsSpaceSeparatedContext;
  class CreateTableOptionContext;
  class TernaryOptionContext;
  class DefaultCollationContext;
  class DefaultEncryptionContext;
  class DefaultCharsetContext;
  class PartitionClauseContext;
  class PartitionTypeDefContext;
  class SubPartitionsContext;
  class PartitionKeyAlgorithmContext;
  class PartitionDefinitionsContext;
  class PartitionDefinitionContext;
  class PartitionValuesInContext;
  class PartitionOptionContext;
  class SubpartitionDefinitionContext;
  class PartitionValueItemListParenContext;
  class PartitionValueItemContext;
  class DefinerClauseContext;
  class IfExistsContext;
  class IfNotExistsContext;
  class IgnoreUnknownUserContext;
  class ProcedureParameterContext;
  class FunctionParameterContext;
  class CollateContext;
  class TypeWithOptCollateContext;
  class SchemaIdentifierPairContext;
  class ViewRefListContext;
  class UpdateListContext;
  class UpdateElementContext;
  class CharsetClauseContext;
  class FieldsClauseContext;
  class FieldTermContext;
  class LinesClauseContext;
  class LineTermContext;
  class UserListContext;
  class CreateUserListContext;
  class CreateUserContext;
  class CreateUserWithMfaContext;
  class IdentificationContext;
  class IdentifiedByPasswordContext;
  class IdentifiedByRandomPasswordContext;
  class IdentifiedWithPluginContext;
  class IdentifiedWithPluginAsAuthContext;
  class IdentifiedWithPluginByPasswordContext;
  class IdentifiedWithPluginByRandomPasswordContext;
  class InitialAuthContext;
  class RetainCurrentPasswordContext;
  class DiscardOldPasswordContext;
  class UserRegistrationContext;
  class FactorContext;
  class ReplacePasswordContext;
  class UserIdentifierOrTextContext;
  class UserContext;
  class LikeClauseContext;
  class LikeOrWhereContext;
  class OnlineOptionContext;
  class NoWriteToBinLogContext;
  class UsePartitionContext;
  class FieldIdentifierContext;
  class ColumnNameContext;
  class ColumnInternalRefContext;
  class ColumnInternalRefListContext;
  class ColumnRefContext;
  class InsertIdentifierContext;
  class IndexNameContext;
  class IndexRefContext;
  class TableWildContext;
  class SchemaNameContext;
  class SchemaRefContext;
  class ProcedureNameContext;
  class ProcedureRefContext;
  class FunctionNameContext;
  class FunctionRefContext;
  class TriggerNameContext;
  class TriggerRefContext;
  class ViewNameContext;
  class ViewRefContext;
  class TablespaceNameContext;
  class TablespaceRefContext;
  class LogfileGroupNameContext;
  class LogfileGroupRefContext;
  class EventNameContext;
  class EventRefContext;
  class UdfNameContext;
  class ServerNameContext;
  class ServerRefContext;
  class EngineRefContext;
  class TableNameContext;
  class FilterTableRefContext;
  class TableRefWithWildcardContext;
  class TableRefContext;
  class TableRefListContext;
  class TableAliasRefListContext;
  class ParameterNameContext;
  class LabelIdentifierContext;
  class LabelRefContext;
  class RoleIdentifierContext;
  class PluginRefContext;
  class ComponentRefContext;
  class ResourceGroupRefContext;
  class WindowNameContext;
  class PureIdentifierContext;
  class IdentifierContext;
  class IdentifierListContext;
  class IdentifierListWithParenthesesContext;
  class QualifiedIdentifierContext;
  class SimpleIdentifierContext;
  class DotIdentifierContext;
  class Ulong_numberContext;
  class Real_ulong_numberContext;
  class Ulonglong_numberContext;
  class Real_ulonglong_numberContext;
  class SignedLiteralContext;
  class SignedLiteralOrNullContext;
  class LiteralContext;
  class LiteralOrNullContext;
  class NullAsLiteralContext;
  class StringListContext;
  class TextStringLiteralContext;
  class TextStringContext;
  class TextStringHashContext;
  class TextLiteralContext;
  class TextStringNoLinebreakContext;
  class TextStringLiteralListContext;
  class NumLiteralContext;
  class BoolLiteralContext;
  class NullLiteralContext;
  class Int64LiteralContext;
  class TemporalLiteralContext;
  class FloatOptionsContext;
  class StandardFloatOptionsContext;
  class PrecisionContext;
  class TextOrIdentifierContext;
  class LValueIdentifierContext;
  class RoleIdentifierOrTextContext;
  class SizeNumberContext;
  class ParenthesesContext;
  class EqualContext;
  class OptionTypeContext;
  class RvalueSystemVariableTypeContext;
  class SetVarIdentTypeContext;
  class JsonAttributeContext;
  class IdentifierKeywordContext;
  class IdentifierKeywordsAmbiguous1RolesAndLabelsContext;
  class IdentifierKeywordsAmbiguous2LabelsContext;
  class LabelKeywordContext;
  class IdentifierKeywordsAmbiguous3RolesContext;
  class IdentifierKeywordsUnambiguousContext;
  class RoleKeywordContext;
  class LValueKeywordContext;
  class IdentifierKeywordsAmbiguous4SystemVariablesContext;
  class RoleOrIdentifierKeywordContext;
  class RoleOrLabelKeywordContext; 

  class PARSERS_PUBLIC_TYPE QueryContext : public antlr4::ParserRuleContext {
  public:
    QueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    SimpleStatementContext *simpleStatement();
    BeginWorkContext *beginWork();
    antlr4::tree::TerminalNode *SEMICOLON_SYMBOL();

   
  };

  QueryContext* query();

  class PARSERS_PUBLIC_TYPE SimpleStatementContext : public antlr4::ParserRuleContext {
  public:
    SimpleStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterStatementContext *alterStatement();
    CreateStatementContext *createStatement();
    DropStatementContext *dropStatement();
    RenameTableStatementContext *renameTableStatement();
    TruncateTableStatementContext *truncateTableStatement();
    ImportStatementContext *importStatement();
    CallStatementContext *callStatement();
    DeleteStatementContext *deleteStatement();
    DoStatementContext *doStatement();
    HandlerStatementContext *handlerStatement();
    InsertStatementContext *insertStatement();
    LoadStatementContext *loadStatement();
    ReplaceStatementContext *replaceStatement();
    SelectStatementContext *selectStatement();
    UpdateStatementContext *updateStatement();
    TransactionOrLockingStatementContext *transactionOrLockingStatement();
    ReplicationStatementContext *replicationStatement();
    PreparedStatementContext *preparedStatement();
    CloneStatementContext *cloneStatement();
    AccountManagementStatementContext *accountManagementStatement();
    TableAdministrationStatementContext *tableAdministrationStatement();
    InstallUninstallStatementContext *installUninstallStatement();
    SetStatementContext *setStatement();
    ShowDatabasesStatementContext *showDatabasesStatement();
    ShowTablesStatementContext *showTablesStatement();
    ShowTriggersStatementContext *showTriggersStatement();
    ShowEventsStatementContext *showEventsStatement();
    ShowTableStatusStatementContext *showTableStatusStatement();
    ShowOpenTablesStatementContext *showOpenTablesStatement();
    ShowPluginsStatementContext *showPluginsStatement();
    ShowEngineLogsStatementContext *showEngineLogsStatement();
    ShowEngineMutexStatementContext *showEngineMutexStatement();
    ShowEngineStatusStatementContext *showEngineStatusStatement();
    ShowColumnsStatementContext *showColumnsStatement();
    ShowBinaryLogsStatementContext *showBinaryLogsStatement();
    ShowReplicasStatementContext *showReplicasStatement();
    ShowBinlogEventsStatementContext *showBinlogEventsStatement();
    ShowRelaylogEventsStatementContext *showRelaylogEventsStatement();
    ShowKeysStatementContext *showKeysStatement();
    ShowEnginesStatementContext *showEnginesStatement();
    ShowCountWarningsStatementContext *showCountWarningsStatement();
    ShowCountErrorsStatementContext *showCountErrorsStatement();
    ShowWarningsStatementContext *showWarningsStatement();
    ShowErrorsStatementContext *showErrorsStatement();
    ShowProfilesStatementContext *showProfilesStatement();
    ShowProfileStatementContext *showProfileStatement();
    ShowStatusStatementContext *showStatusStatement();
    ShowProcessListStatementContext *showProcessListStatement();
    ShowVariablesStatementContext *showVariablesStatement();
    ShowCharacterSetStatementContext *showCharacterSetStatement();
    ShowCollationStatementContext *showCollationStatement();
    ShowPrivilegesStatementContext *showPrivilegesStatement();
    ShowGrantsStatementContext *showGrantsStatement();
    ShowCreateDatabaseStatementContext *showCreateDatabaseStatement();
    ShowCreateTableStatementContext *showCreateTableStatement();
    ShowCreateViewStatementContext *showCreateViewStatement();
    ShowMasterStatusStatementContext *showMasterStatusStatement();
    ShowReplicaStatusStatementContext *showReplicaStatusStatement();
    ShowCreateProcedureStatementContext *showCreateProcedureStatement();
    ShowCreateFunctionStatementContext *showCreateFunctionStatement();
    ShowCreateTriggerStatementContext *showCreateTriggerStatement();
    ShowCreateProcedureStatusStatementContext *showCreateProcedureStatusStatement();
    ShowCreateFunctionStatusStatementContext *showCreateFunctionStatusStatement();
    ShowCreateProcedureCodeStatementContext *showCreateProcedureCodeStatement();
    ShowCreateFunctionCodeStatementContext *showCreateFunctionCodeStatement();
    ShowCreateEventStatementContext *showCreateEventStatement();
    ShowCreateUserStatementContext *showCreateUserStatement();
    ResourceGroupManagementContext *resourceGroupManagement();
    OtherAdministrativeStatementContext *otherAdministrativeStatement();
    UtilityStatementContext *utilityStatement();
    GetDiagnosticsStatementContext *getDiagnosticsStatement();
    SignalStatementContext *signalStatement();
    ResignalStatementContext *resignalStatement();

   
  };

  SimpleStatementContext* simpleStatement();

  class PARSERS_PUBLIC_TYPE AlterStatementContext : public antlr4::ParserRuleContext {
  public:
    AlterStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_SYMBOL();
    AlterTableContext *alterTable();
    AlterDatabaseContext *alterDatabase();
    antlr4::tree::TerminalNode *PROCEDURE_SYMBOL();
    ProcedureRefContext *procedureRef();
    antlr4::tree::TerminalNode *FUNCTION_SYMBOL();
    FunctionRefContext *functionRef();
    AlterViewContext *alterView();
    AlterEventContext *alterEvent();
    AlterTablespaceContext *alterTablespace();
    AlterUndoTablespaceContext *alterUndoTablespace();
    AlterLogfileGroupContext *alterLogfileGroup();
    AlterServerContext *alterServer();
    AlterInstanceStatementContext *alterInstanceStatement();
    RoutineAlterOptionsContext *routineAlterOptions();

   
  };

  AlterStatementContext* alterStatement();

  class PARSERS_PUBLIC_TYPE AlterDatabaseContext : public antlr4::ParserRuleContext {
  public:
    AlterDatabaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATABASE_SYMBOL();
    SchemaRefContext *schemaRef();
    std::vector<AlterDatabaseOptionContext *> alterDatabaseOption();
    AlterDatabaseOptionContext* alterDatabaseOption(size_t i);

   
  };

  AlterDatabaseContext* alterDatabase();

  class PARSERS_PUBLIC_TYPE AlterDatabaseOptionContext : public antlr4::ParserRuleContext {
  public:
    AlterDatabaseOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CreateDatabaseOptionContext *createDatabaseOption();
    antlr4::tree::TerminalNode *READ_SYMBOL();
    antlr4::tree::TerminalNode *ONLY_SYMBOL();
    TernaryOptionContext *ternaryOption();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

   
  };

  AlterDatabaseOptionContext* alterDatabaseOption();

  class PARSERS_PUBLIC_TYPE AlterEventContext : public antlr4::ParserRuleContext {
  public:
    AlterEventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVENT_SYMBOL();
    EventRefContext *eventRef();
    DefinerClauseContext *definerClause();
    std::vector<antlr4::tree::TerminalNode *> ON_SYMBOL();
    antlr4::tree::TerminalNode* ON_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *SCHEDULE_SYMBOL();
    ScheduleContext *schedule();
    antlr4::tree::TerminalNode *COMPLETION_SYMBOL();
    antlr4::tree::TerminalNode *PRESERVE_SYMBOL();
    antlr4::tree::TerminalNode *RENAME_SYMBOL();
    antlr4::tree::TerminalNode *TO_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ENABLE_SYMBOL();
    antlr4::tree::TerminalNode *DISABLE_SYMBOL();
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *DO_SYMBOL();
    CompoundStatementContext *compoundStatement();
    antlr4::tree::TerminalNode *NOT_SYMBOL();
    ReplicaContext *replica();

   
  };

  AlterEventContext* alterEvent();

  class PARSERS_PUBLIC_TYPE AlterLogfileGroupContext : public antlr4::ParserRuleContext {
  public:
    AlterLogfileGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOGFILE_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_SYMBOL();
    LogfileGroupRefContext *logfileGroupRef();
    antlr4::tree::TerminalNode *ADD_SYMBOL();
    antlr4::tree::TerminalNode *UNDOFILE_SYMBOL();
    TextLiteralContext *textLiteral();
    AlterLogfileGroupOptionsContext *alterLogfileGroupOptions();

   
  };

  AlterLogfileGroupContext* alterLogfileGroup();

  class PARSERS_PUBLIC_TYPE AlterLogfileGroupOptionsContext : public antlr4::ParserRuleContext {
  public:
    AlterLogfileGroupOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AlterLogfileGroupOptionContext *> alterLogfileGroupOption();
    AlterLogfileGroupOptionContext* alterLogfileGroupOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  AlterLogfileGroupOptionsContext* alterLogfileGroupOptions();

  class PARSERS_PUBLIC_TYPE AlterLogfileGroupOptionContext : public antlr4::ParserRuleContext {
  public:
    AlterLogfileGroupOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TsOptionInitialSizeContext *tsOptionInitialSize();
    TsOptionEngineContext *tsOptionEngine();
    TsOptionWaitContext *tsOptionWait();

   
  };

  AlterLogfileGroupOptionContext* alterLogfileGroupOption();

  class PARSERS_PUBLIC_TYPE AlterServerContext : public antlr4::ParserRuleContext {
  public:
    AlterServerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SERVER_SYMBOL();
    ServerRefContext *serverRef();
    ServerOptionsContext *serverOptions();

   
  };

  AlterServerContext* alterServer();

  class PARSERS_PUBLIC_TYPE AlterTableContext : public antlr4::ParserRuleContext {
  public:
    AlterTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    TableRefContext *tableRef();
    OnlineOptionContext *onlineOption();
    AlterTableActionsContext *alterTableActions();

   
  };

  AlterTableContext* alterTable();

  class PARSERS_PUBLIC_TYPE AlterTableActionsContext : public antlr4::ParserRuleContext {
  public:
    AlterTableActionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterCommandListContext *alterCommandList();
    PartitionClauseContext *partitionClause();
    RemovePartitioningContext *removePartitioning();
    StandaloneAlterCommandsContext *standaloneAlterCommands();
    AlterCommandsModifierListContext *alterCommandsModifierList();
    antlr4::tree::TerminalNode *COMMA_SYMBOL();

   
  };

  AlterTableActionsContext* alterTableActions();

  class PARSERS_PUBLIC_TYPE AlterCommandListContext : public antlr4::ParserRuleContext {
  public:
    AlterCommandListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterCommandsModifierListContext *alterCommandsModifierList();
    AlterListContext *alterList();
    antlr4::tree::TerminalNode *COMMA_SYMBOL();

   
  };

  AlterCommandListContext* alterCommandList();

  class PARSERS_PUBLIC_TYPE AlterCommandsModifierListContext : public antlr4::ParserRuleContext {
  public:
    AlterCommandsModifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AlterCommandsModifierContext *> alterCommandsModifier();
    AlterCommandsModifierContext* alterCommandsModifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  AlterCommandsModifierListContext* alterCommandsModifierList();

  class PARSERS_PUBLIC_TYPE StandaloneAlterCommandsContext : public antlr4::ParserRuleContext {
  public:
    StandaloneAlterCommandsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISCARD_SYMBOL();
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    antlr4::tree::TerminalNode *IMPORT_SYMBOL();
    AlterPartitionContext *alterPartition();
    antlr4::tree::TerminalNode *SECONDARY_LOAD_SYMBOL();
    antlr4::tree::TerminalNode *SECONDARY_UNLOAD_SYMBOL();

   
  };

  StandaloneAlterCommandsContext* standaloneAlterCommands();

  class PARSERS_PUBLIC_TYPE AlterPartitionContext : public antlr4::ParserRuleContext {
  public:
    AlterPartitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_SYMBOL();
    antlr4::tree::TerminalNode *PARTITION_SYMBOL();
    PartitionDefinitionsContext *partitionDefinitions();
    antlr4::tree::TerminalNode *PARTITIONS_SYMBOL();
    Real_ulong_numberContext *real_ulong_number();
    std::vector<NoWriteToBinLogContext *> noWriteToBinLog();
    NoWriteToBinLogContext* noWriteToBinLog(size_t i);
    antlr4::tree::TerminalNode *DROP_SYMBOL();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *REBUILD_SYMBOL();
    AllOrPartitionNameListContext *allOrPartitionNameList();
    antlr4::tree::TerminalNode *OPTIMIZE_SYMBOL();
    antlr4::tree::TerminalNode *ANALYZE_SYMBOL();
    antlr4::tree::TerminalNode *CHECK_SYMBOL();
    std::vector<CheckOptionContext *> checkOption();
    CheckOptionContext* checkOption(size_t i);
    antlr4::tree::TerminalNode *REPAIR_SYMBOL();
    std::vector<RepairTypeContext *> repairType();
    RepairTypeContext* repairType(size_t i);
    antlr4::tree::TerminalNode *COALESCE_SYMBOL();
    antlr4::tree::TerminalNode *TRUNCATE_SYMBOL();
    antlr4::tree::TerminalNode *REORGANIZE_SYMBOL();
    antlr4::tree::TerminalNode *INTO_SYMBOL();
    antlr4::tree::TerminalNode *EXCHANGE_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    TableRefContext *tableRef();
    WithValidationContext *withValidation();
    antlr4::tree::TerminalNode *DISCARD_SYMBOL();
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    antlr4::tree::TerminalNode *IMPORT_SYMBOL();

   
  };

  AlterPartitionContext* alterPartition();

  class PARSERS_PUBLIC_TYPE AlterListContext : public antlr4::ParserRuleContext {
  public:
    AlterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AlterListItemContext *> alterListItem();
    AlterListItemContext* alterListItem(size_t i);
    std::vector<CreateTableOptionsSpaceSeparatedContext *> createTableOptionsSpaceSeparated();
    CreateTableOptionsSpaceSeparatedContext* createTableOptionsSpaceSeparated(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);
    std::vector<AlterCommandsModifierContext *> alterCommandsModifier();
    AlterCommandsModifierContext* alterCommandsModifier(size_t i);

   
  };

  AlterListContext* alterList();

  class PARSERS_PUBLIC_TYPE AlterCommandsModifierContext : public antlr4::ParserRuleContext {
  public:
    AlterCommandsModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterAlgorithmOptionContext *alterAlgorithmOption();
    AlterLockOptionContext *alterLockOption();
    WithValidationContext *withValidation();

   
  };

  AlterCommandsModifierContext* alterCommandsModifier();

  class PARSERS_PUBLIC_TYPE AlterListItemContext : public antlr4::ParserRuleContext {
  public:
    AlterListItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_SYMBOL();
    IdentifierContext *identifier();
    FieldDefinitionContext *fieldDefinition();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    TableElementListContext *tableElementList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *COLUMN_SYMBOL();
    CheckOrReferencesContext *checkOrReferences();
    PlaceContext *place();
    TableConstraintDefContext *tableConstraintDef();
    antlr4::tree::TerminalNode *CHANGE_SYMBOL();
    ColumnInternalRefContext *columnInternalRef();
    antlr4::tree::TerminalNode *MODIFY_SYMBOL();
    antlr4::tree::TerminalNode *DROP_SYMBOL();
    antlr4::tree::TerminalNode *FOREIGN_SYMBOL();
    antlr4::tree::TerminalNode *KEY_SYMBOL();
    antlr4::tree::TerminalNode *PRIMARY_SYMBOL();
    KeyOrIndexContext *keyOrIndex();
    IndexRefContext *indexRef();
    antlr4::tree::TerminalNode *CHECK_SYMBOL();
    antlr4::tree::TerminalNode *CONSTRAINT_SYMBOL();
    RestrictContext *restrict();
    antlr4::tree::TerminalNode *DISABLE_SYMBOL();
    antlr4::tree::TerminalNode *KEYS_SYMBOL();
    antlr4::tree::TerminalNode *ENABLE_SYMBOL();
    antlr4::tree::TerminalNode *ALTER_SYMBOL();
    antlr4::tree::TerminalNode *SET_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    VisibilityContext *visibility();
    ExprWithParenthesesContext *exprWithParentheses();
    SignedLiteralOrNullContext *signedLiteralOrNull();
    antlr4::tree::TerminalNode *INDEX_SYMBOL();
    ConstraintEnforcementContext *constraintEnforcement();
    antlr4::tree::TerminalNode *RENAME_SYMBOL();
    antlr4::tree::TerminalNode *TO_SYMBOL();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *AS_SYMBOL();
    IndexNameContext *indexName();
    antlr4::tree::TerminalNode *CONVERT_SYMBOL();
    CharsetContext *charset();
    CharsetNameContext *charsetName();
    CollateContext *collate();
    antlr4::tree::TerminalNode *FORCE_SYMBOL();
    antlr4::tree::TerminalNode *ORDER_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    AlterOrderListContext *alterOrderList();

   
  };

  AlterListItemContext* alterListItem();

  class PARSERS_PUBLIC_TYPE PlaceContext : public antlr4::ParserRuleContext {
  public:
    PlaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AFTER_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *FIRST_SYMBOL();

   
  };

  PlaceContext* place();

  class PARSERS_PUBLIC_TYPE RestrictContext : public antlr4::ParserRuleContext {
  public:
    RestrictContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESTRICT_SYMBOL();
    antlr4::tree::TerminalNode *CASCADE_SYMBOL();

   
  };

  RestrictContext* restrict();

  class PARSERS_PUBLIC_TYPE AlterOrderListContext : public antlr4::ParserRuleContext {
  public:
    AlterOrderListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<DirectionContext *> direction();
    DirectionContext* direction(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  AlterOrderListContext* alterOrderList();

  class PARSERS_PUBLIC_TYPE AlterAlgorithmOptionContext : public antlr4::ParserRuleContext {
  public:
    AlterAlgorithmOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALGORITHM_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

   
  };

  AlterAlgorithmOptionContext* alterAlgorithmOption();

  class PARSERS_PUBLIC_TYPE AlterLockOptionContext : public antlr4::ParserRuleContext {
  public:
    AlterLockOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCK_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

   
  };

  AlterLockOptionContext* alterLockOption();

  class PARSERS_PUBLIC_TYPE IndexLockAndAlgorithmContext : public antlr4::ParserRuleContext {
  public:
    IndexLockAndAlgorithmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterAlgorithmOptionContext *alterAlgorithmOption();
    AlterLockOptionContext *alterLockOption();

   
  };

  IndexLockAndAlgorithmContext* indexLockAndAlgorithm();

  class PARSERS_PUBLIC_TYPE WithValidationContext : public antlr4::ParserRuleContext {
  public:
    WithValidationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALIDATION_SYMBOL();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *WITHOUT_SYMBOL();

   
  };

  WithValidationContext* withValidation();

  class PARSERS_PUBLIC_TYPE RemovePartitioningContext : public antlr4::ParserRuleContext {
  public:
    RemovePartitioningContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REMOVE_SYMBOL();
    antlr4::tree::TerminalNode *PARTITIONING_SYMBOL();

   
  };

  RemovePartitioningContext* removePartitioning();

  class PARSERS_PUBLIC_TYPE AllOrPartitionNameListContext : public antlr4::ParserRuleContext {
  public:
    AllOrPartitionNameListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    IdentifierListContext *identifierList();

   
  };

  AllOrPartitionNameListContext* allOrPartitionNameList();

  class PARSERS_PUBLIC_TYPE AlterTablespaceContext : public antlr4::ParserRuleContext {
  public:
    AlterTablespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    TablespaceRefContext *tablespaceRef();
    antlr4::tree::TerminalNode *DATAFILE_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *RENAME_SYMBOL();
    antlr4::tree::TerminalNode *TO_SYMBOL();
    IdentifierContext *identifier();
    AlterTablespaceOptionsContext *alterTablespaceOptions();
    antlr4::tree::TerminalNode *ADD_SYMBOL();
    antlr4::tree::TerminalNode *DROP_SYMBOL();

   
  };

  AlterTablespaceContext* alterTablespace();

  class PARSERS_PUBLIC_TYPE AlterUndoTablespaceContext : public antlr4::ParserRuleContext {
  public:
    AlterUndoTablespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNDO_SYMBOL();
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    TablespaceRefContext *tablespaceRef();
    antlr4::tree::TerminalNode *SET_SYMBOL();
    antlr4::tree::TerminalNode *ACTIVE_SYMBOL();
    antlr4::tree::TerminalNode *INACTIVE_SYMBOL();
    UndoTableSpaceOptionsContext *undoTableSpaceOptions();

   
  };

  AlterUndoTablespaceContext* alterUndoTablespace();

  class PARSERS_PUBLIC_TYPE UndoTableSpaceOptionsContext : public antlr4::ParserRuleContext {
  public:
    UndoTableSpaceOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UndoTableSpaceOptionContext *> undoTableSpaceOption();
    UndoTableSpaceOptionContext* undoTableSpaceOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  UndoTableSpaceOptionsContext* undoTableSpaceOptions();

  class PARSERS_PUBLIC_TYPE UndoTableSpaceOptionContext : public antlr4::ParserRuleContext {
  public:
    UndoTableSpaceOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TsOptionEngineContext *tsOptionEngine();

   
  };

  UndoTableSpaceOptionContext* undoTableSpaceOption();

  class PARSERS_PUBLIC_TYPE AlterTablespaceOptionsContext : public antlr4::ParserRuleContext {
  public:
    AlterTablespaceOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AlterTablespaceOptionContext *> alterTablespaceOption();
    AlterTablespaceOptionContext* alterTablespaceOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  AlterTablespaceOptionsContext* alterTablespaceOptions();

  class PARSERS_PUBLIC_TYPE AlterTablespaceOptionContext : public antlr4::ParserRuleContext {
  public:
    AlterTablespaceOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INITIAL_SIZE_SYMBOL();
    SizeNumberContext *sizeNumber();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TsOptionAutoextendSizeContext *tsOptionAutoextendSize();
    TsOptionMaxSizeContext *tsOptionMaxSize();
    TsOptionEngineContext *tsOptionEngine();
    TsOptionWaitContext *tsOptionWait();
    TsOptionEncryptionContext *tsOptionEncryption();
    TsOptionEngineAttributeContext *tsOptionEngineAttribute();

   
  };

  AlterTablespaceOptionContext* alterTablespaceOption();

  class PARSERS_PUBLIC_TYPE ChangeTablespaceOptionContext : public antlr4::ParserRuleContext {
  public:
    ChangeTablespaceOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INITIAL_SIZE_SYMBOL();
    SizeNumberContext *sizeNumber();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TsOptionAutoextendSizeContext *tsOptionAutoextendSize();
    TsOptionMaxSizeContext *tsOptionMaxSize();

   
  };

  ChangeTablespaceOptionContext* changeTablespaceOption();

  class PARSERS_PUBLIC_TYPE AlterViewContext : public antlr4::ParserRuleContext {
  public:
    AlterViewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VIEW_SYMBOL();
    ViewRefContext *viewRef();
    ViewTailContext *viewTail();
    ViewAlgorithmContext *viewAlgorithm();
    DefinerClauseContext *definerClause();
    ViewSuidContext *viewSuid();

   
  };

  AlterViewContext* alterView();

  class PARSERS_PUBLIC_TYPE ViewTailContext : public antlr4::ParserRuleContext {
  public:
    ViewTailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS_SYMBOL();
    ViewQueryBlockContext *viewQueryBlock();
    ColumnInternalRefListContext *columnInternalRefList();

   
  };

  ViewTailContext* viewTail();

  class PARSERS_PUBLIC_TYPE ViewQueryBlockContext : public antlr4::ParserRuleContext {
  public:
    ViewQueryBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionWithOptLockingClausesContext *queryExpressionWithOptLockingClauses();
    ViewCheckOptionContext *viewCheckOption();

   
  };

  ViewQueryBlockContext* viewQueryBlock();

  class PARSERS_PUBLIC_TYPE ViewCheckOptionContext : public antlr4::ParserRuleContext {
  public:
    ViewCheckOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *CHECK_SYMBOL();
    antlr4::tree::TerminalNode *OPTION_SYMBOL();
    antlr4::tree::TerminalNode *CASCADED_SYMBOL();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();

   
  };

  ViewCheckOptionContext* viewCheckOption();

  class PARSERS_PUBLIC_TYPE AlterInstanceStatementContext : public antlr4::ParserRuleContext {
  public:
    AlterInstanceStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSTANCE_SYMBOL();
    antlr4::tree::TerminalNode *ROTATE_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *MASTER_SYMBOL();
    antlr4::tree::TerminalNode *KEY_SYMBOL();
    antlr4::tree::TerminalNode *RELOAD_SYMBOL();
    antlr4::tree::TerminalNode *TLS_SYMBOL();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *KEYRING_SYMBOL();
    antlr4::tree::TerminalNode *ENABLE_SYMBOL();
    antlr4::tree::TerminalNode *DISABLE_SYMBOL();
    antlr4::tree::TerminalNode *NO_SYMBOL();
    antlr4::tree::TerminalNode *ROLLBACK_SYMBOL();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    antlr4::tree::TerminalNode *ERROR_SYMBOL();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *CHANNEL_SYMBOL();

   
  };

  AlterInstanceStatementContext* alterInstanceStatement();

  class PARSERS_PUBLIC_TYPE CreateStatementContext : public antlr4::ParserRuleContext {
  public:
    CreateStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    CreateDatabaseContext *createDatabase();
    CreateTableContext *createTable();
    CreateFunctionContext *createFunction();
    CreateProcedureContext *createProcedure();
    CreateUdfContext *createUdf();
    CreateLogfileGroupContext *createLogfileGroup();
    CreateViewContext *createView();
    CreateTriggerContext *createTrigger();
    CreateIndexContext *createIndex();
    CreateServerContext *createServer();
    CreateTablespaceContext *createTablespace();
    CreateEventContext *createEvent();
    CreateRoleContext *createRole();
    CreateSpatialReferenceContext *createSpatialReference();
    CreateUndoTablespaceContext *createUndoTablespace();

   
  };

  CreateStatementContext* createStatement();

  class PARSERS_PUBLIC_TYPE CreateDatabaseContext : public antlr4::ParserRuleContext {
  public:
    CreateDatabaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATABASE_SYMBOL();
    SchemaNameContext *schemaName();
    IfNotExistsContext *ifNotExists();
    std::vector<CreateDatabaseOptionContext *> createDatabaseOption();
    CreateDatabaseOptionContext* createDatabaseOption(size_t i);

   
  };

  CreateDatabaseContext* createDatabase();

  class PARSERS_PUBLIC_TYPE CreateDatabaseOptionContext : public antlr4::ParserRuleContext {
  public:
    CreateDatabaseOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefaultCharsetContext *defaultCharset();
    DefaultCollationContext *defaultCollation();
    DefaultEncryptionContext *defaultEncryption();

   
  };

  CreateDatabaseOptionContext* createDatabaseOption();

  class PARSERS_PUBLIC_TYPE CreateTableContext : public antlr4::ParserRuleContext {
  public:
    CreateTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *LIKE_SYMBOL();
    TableRefContext *tableRef();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *TEMPORARY_SYMBOL();
    IfNotExistsContext *ifNotExists();
    TableElementListContext *tableElementList();
    CreateTableOptionsEtcContext *createTableOptionsEtc();

   
  };

  CreateTableContext* createTable();

  class PARSERS_PUBLIC_TYPE TableElementListContext : public antlr4::ParserRuleContext {
  public:
    TableElementListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableElementContext *> tableElement();
    TableElementContext* tableElement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  TableElementListContext* tableElementList();

  class PARSERS_PUBLIC_TYPE TableElementContext : public antlr4::ParserRuleContext {
  public:
    TableElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnDefinitionContext *columnDefinition();
    TableConstraintDefContext *tableConstraintDef();

   
  };

  TableElementContext* tableElement();

  class PARSERS_PUBLIC_TYPE DuplicateAsQeContext : public antlr4::ParserRuleContext {
  public:
    DuplicateAsQeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AsCreateQueryExpressionContext *asCreateQueryExpression();
    antlr4::tree::TerminalNode *REPLACE_SYMBOL();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();

   
  };

  DuplicateAsQeContext* duplicateAsQe();

  class PARSERS_PUBLIC_TYPE AsCreateQueryExpressionContext : public antlr4::ParserRuleContext {
  public:
    AsCreateQueryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionWithOptLockingClausesContext *queryExpressionWithOptLockingClauses();
    antlr4::tree::TerminalNode *AS_SYMBOL();

   
  };

  AsCreateQueryExpressionContext* asCreateQueryExpression();

  class PARSERS_PUBLIC_TYPE QueryExpressionOrParensContext : public antlr4::ParserRuleContext {
  public:
    QueryExpressionOrParensContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionContext *queryExpression();
    LockingClauseListContext *lockingClauseList();
    QueryExpressionParensContext *queryExpressionParens();

   
  };

  QueryExpressionOrParensContext* queryExpressionOrParens();

  class PARSERS_PUBLIC_TYPE QueryExpressionWithOptLockingClausesContext : public antlr4::ParserRuleContext {
  public:
    QueryExpressionWithOptLockingClausesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionContext *queryExpression();
    LockingClauseListContext *lockingClauseList();

   
  };

  QueryExpressionWithOptLockingClausesContext* queryExpressionWithOptLockingClauses();

  class PARSERS_PUBLIC_TYPE CreateRoutineContext : public antlr4::ParserRuleContext {
  public:
    CreateRoutineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *EOF();
    CreateProcedureContext *createProcedure();
    CreateFunctionContext *createFunction();
    CreateUdfContext *createUdf();
    antlr4::tree::TerminalNode *SEMICOLON_SYMBOL();

   
  };

  CreateRoutineContext* createRoutine();

  class PARSERS_PUBLIC_TYPE CreateProcedureContext : public antlr4::ParserRuleContext {
  public:
    CreateProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCEDURE_SYMBOL();
    ProcedureNameContext *procedureName();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    CompoundStatementContext *compoundStatement();
    DefinerClauseContext *definerClause();
    IfNotExistsContext *ifNotExists();
    std::vector<ProcedureParameterContext *> procedureParameter();
    ProcedureParameterContext* procedureParameter(size_t i);
    std::vector<RoutineCreateOptionContext *> routineCreateOption();
    RoutineCreateOptionContext* routineCreateOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  CreateProcedureContext* createProcedure();

  class PARSERS_PUBLIC_TYPE CreateFunctionContext : public antlr4::ParserRuleContext {
  public:
    CreateFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION_SYMBOL();
    FunctionNameContext *functionName();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *RETURNS_SYMBOL();
    TypeWithOptCollateContext *typeWithOptCollate();
    CompoundStatementContext *compoundStatement();
    DefinerClauseContext *definerClause();
    IfNotExistsContext *ifNotExists();
    std::vector<FunctionParameterContext *> functionParameter();
    FunctionParameterContext* functionParameter(size_t i);
    std::vector<RoutineCreateOptionContext *> routineCreateOption();
    RoutineCreateOptionContext* routineCreateOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  CreateFunctionContext* createFunction();

  class PARSERS_PUBLIC_TYPE CreateUdfContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    CreateUdfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION_SYMBOL();
    UdfNameContext *udfName();
    antlr4::tree::TerminalNode *RETURNS_SYMBOL();
    antlr4::tree::TerminalNode *SONAME_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *STRING_SYMBOL();
    antlr4::tree::TerminalNode *INT_SYMBOL();
    antlr4::tree::TerminalNode *REAL_SYMBOL();
    antlr4::tree::TerminalNode *DECIMAL_SYMBOL();
    antlr4::tree::TerminalNode *AGGREGATE_SYMBOL();
    IfNotExistsContext *ifNotExists();

   
  };

  CreateUdfContext* createUdf();

  class PARSERS_PUBLIC_TYPE RoutineCreateOptionContext : public antlr4::ParserRuleContext {
  public:
    RoutineCreateOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RoutineOptionContext *routineOption();
    antlr4::tree::TerminalNode *DETERMINISTIC_SYMBOL();
    antlr4::tree::TerminalNode *NOT_SYMBOL();

   
  };

  RoutineCreateOptionContext* routineCreateOption();

  class PARSERS_PUBLIC_TYPE RoutineAlterOptionsContext : public antlr4::ParserRuleContext {
  public:
    RoutineAlterOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RoutineCreateOptionContext *> routineCreateOption();
    RoutineCreateOptionContext* routineCreateOption(size_t i);

   
  };

  RoutineAlterOptionsContext* routineAlterOptions();

  class PARSERS_PUBLIC_TYPE RoutineOptionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *option = nullptr;
    antlr4::Token *security = nullptr;
    RoutineOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();
    antlr4::tree::TerminalNode *SQL_SYMBOL();
    antlr4::tree::TerminalNode *LANGUAGE_SYMBOL();
    antlr4::tree::TerminalNode *NO_SYMBOL();
    antlr4::tree::TerminalNode *CONTAINS_SYMBOL();
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    antlr4::tree::TerminalNode *READS_SYMBOL();
    antlr4::tree::TerminalNode *MODIFIES_SYMBOL();
    antlr4::tree::TerminalNode *SECURITY_SYMBOL();
    antlr4::tree::TerminalNode *DEFINER_SYMBOL();
    antlr4::tree::TerminalNode *INVOKER_SYMBOL();

   
  };

  RoutineOptionContext* routineOption();

  class PARSERS_PUBLIC_TYPE CreateIndexContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    CreateIndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CreateIndexTargetContext *createIndexTarget();
    antlr4::tree::TerminalNode *INDEX_SYMBOL();
    IndexNameContext *indexName();
    OnlineOptionContext *onlineOption();
    antlr4::tree::TerminalNode *FULLTEXT_SYMBOL();
    antlr4::tree::TerminalNode *SPATIAL_SYMBOL();
    IndexLockAndAlgorithmContext *indexLockAndAlgorithm();
    antlr4::tree::TerminalNode *UNIQUE_SYMBOL();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    std::vector<FulltextIndexOptionContext *> fulltextIndexOption();
    FulltextIndexOptionContext* fulltextIndexOption(size_t i);
    std::vector<SpatialIndexOptionContext *> spatialIndexOption();
    SpatialIndexOptionContext* spatialIndexOption(size_t i);
    IndexTypeClauseContext *indexTypeClause();
    IndexNameAndTypeContext *indexNameAndType();

   
  };

  CreateIndexContext* createIndex();

  class PARSERS_PUBLIC_TYPE IndexNameAndTypeContext : public antlr4::ParserRuleContext {
  public:
    IndexNameAndTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndexNameContext *indexName();
    antlr4::tree::TerminalNode *USING_SYMBOL();
    IndexTypeContext *indexType();
    antlr4::tree::TerminalNode *TYPE_SYMBOL();

   
  };

  IndexNameAndTypeContext* indexNameAndType();

  class PARSERS_PUBLIC_TYPE CreateIndexTargetContext : public antlr4::ParserRuleContext {
  public:
    CreateIndexTargetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON_SYMBOL();
    TableRefContext *tableRef();
    KeyListVariantsContext *keyListVariants();

   
  };

  CreateIndexTargetContext* createIndexTarget();

  class PARSERS_PUBLIC_TYPE CreateLogfileGroupContext : public antlr4::ParserRuleContext {
  public:
    CreateLogfileGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOGFILE_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_SYMBOL();
    LogfileGroupNameContext *logfileGroupName();
    antlr4::tree::TerminalNode *ADD_SYMBOL();
    antlr4::tree::TerminalNode *UNDOFILE_SYMBOL();
    TextLiteralContext *textLiteral();
    LogfileGroupOptionsContext *logfileGroupOptions();

   
  };

  CreateLogfileGroupContext* createLogfileGroup();

  class PARSERS_PUBLIC_TYPE LogfileGroupOptionsContext : public antlr4::ParserRuleContext {
  public:
    LogfileGroupOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LogfileGroupOptionContext *> logfileGroupOption();
    LogfileGroupOptionContext* logfileGroupOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  LogfileGroupOptionsContext* logfileGroupOptions();

  class PARSERS_PUBLIC_TYPE LogfileGroupOptionContext : public antlr4::ParserRuleContext {
  public:
    LogfileGroupOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TsOptionInitialSizeContext *tsOptionInitialSize();
    TsOptionUndoRedoBufferSizeContext *tsOptionUndoRedoBufferSize();
    TsOptionNodegroupContext *tsOptionNodegroup();
    TsOptionEngineContext *tsOptionEngine();
    TsOptionWaitContext *tsOptionWait();
    TsOptionCommentContext *tsOptionComment();

   
  };

  LogfileGroupOptionContext* logfileGroupOption();

  class PARSERS_PUBLIC_TYPE CreateServerContext : public antlr4::ParserRuleContext {
  public:
    CreateServerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SERVER_SYMBOL();
    ServerNameContext *serverName();
    antlr4::tree::TerminalNode *FOREIGN_SYMBOL();
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    antlr4::tree::TerminalNode *WRAPPER_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    ServerOptionsContext *serverOptions();

   
  };

  CreateServerContext* createServer();

  class PARSERS_PUBLIC_TYPE ServerOptionsContext : public antlr4::ParserRuleContext {
  public:
    ServerOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIONS_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<ServerOptionContext *> serverOption();
    ServerOptionContext* serverOption(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  ServerOptionsContext* serverOptions();

  class PARSERS_PUBLIC_TYPE ServerOptionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *option = nullptr;
    ServerOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *HOST_SYMBOL();
    antlr4::tree::TerminalNode *DATABASE_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *SOCKET_SYMBOL();
    antlr4::tree::TerminalNode *OWNER_SYMBOL();
    Ulong_numberContext *ulong_number();
    antlr4::tree::TerminalNode *PORT_SYMBOL();

   
  };

  ServerOptionContext* serverOption();

  class PARSERS_PUBLIC_TYPE CreateTablespaceContext : public antlr4::ParserRuleContext {
  public:
    CreateTablespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    TablespaceNameContext *tablespaceName();
    TsDataFileNameContext *tsDataFileName();
    antlr4::tree::TerminalNode *USE_SYMBOL();
    antlr4::tree::TerminalNode *LOGFILE_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_SYMBOL();
    LogfileGroupRefContext *logfileGroupRef();
    TablespaceOptionsContext *tablespaceOptions();

   
  };

  CreateTablespaceContext* createTablespace();

  class PARSERS_PUBLIC_TYPE CreateUndoTablespaceContext : public antlr4::ParserRuleContext {
  public:
    CreateUndoTablespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNDO_SYMBOL();
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    TablespaceNameContext *tablespaceName();
    antlr4::tree::TerminalNode *ADD_SYMBOL();
    TsDataFileContext *tsDataFile();
    UndoTableSpaceOptionsContext *undoTableSpaceOptions();

   
  };

  CreateUndoTablespaceContext* createUndoTablespace();

  class PARSERS_PUBLIC_TYPE TsDataFileNameContext : public antlr4::ParserRuleContext {
  public:
    TsDataFileNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_SYMBOL();
    TsDataFileContext *tsDataFile();

   
  };

  TsDataFileNameContext* tsDataFileName();

  class PARSERS_PUBLIC_TYPE TsDataFileContext : public antlr4::ParserRuleContext {
  public:
    TsDataFileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATAFILE_SYMBOL();
    TextLiteralContext *textLiteral();

   
  };

  TsDataFileContext* tsDataFile();

  class PARSERS_PUBLIC_TYPE TablespaceOptionsContext : public antlr4::ParserRuleContext {
  public:
    TablespaceOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TablespaceOptionContext *> tablespaceOption();
    TablespaceOptionContext* tablespaceOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  TablespaceOptionsContext* tablespaceOptions();

  class PARSERS_PUBLIC_TYPE TablespaceOptionContext : public antlr4::ParserRuleContext {
  public:
    TablespaceOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TsOptionInitialSizeContext *tsOptionInitialSize();
    TsOptionAutoextendSizeContext *tsOptionAutoextendSize();
    TsOptionMaxSizeContext *tsOptionMaxSize();
    TsOptionExtentSizeContext *tsOptionExtentSize();
    TsOptionNodegroupContext *tsOptionNodegroup();
    TsOptionEngineContext *tsOptionEngine();
    TsOptionWaitContext *tsOptionWait();
    TsOptionCommentContext *tsOptionComment();
    TsOptionFileblockSizeContext *tsOptionFileblockSize();
    TsOptionEncryptionContext *tsOptionEncryption();

   
  };

  TablespaceOptionContext* tablespaceOption();

  class PARSERS_PUBLIC_TYPE TsOptionInitialSizeContext : public antlr4::ParserRuleContext {
  public:
    TsOptionInitialSizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INITIAL_SIZE_SYMBOL();
    SizeNumberContext *sizeNumber();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

   
  };

  TsOptionInitialSizeContext* tsOptionInitialSize();

  class PARSERS_PUBLIC_TYPE TsOptionUndoRedoBufferSizeContext : public antlr4::ParserRuleContext {
  public:
    TsOptionUndoRedoBufferSizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SizeNumberContext *sizeNumber();
    antlr4::tree::TerminalNode *UNDO_BUFFER_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *REDO_BUFFER_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

   
  };

  TsOptionUndoRedoBufferSizeContext* tsOptionUndoRedoBufferSize();

  class PARSERS_PUBLIC_TYPE TsOptionAutoextendSizeContext : public antlr4::ParserRuleContext {
  public:
    TsOptionAutoextendSizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AUTOEXTEND_SIZE_SYMBOL();
    SizeNumberContext *sizeNumber();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

   
  };

  TsOptionAutoextendSizeContext* tsOptionAutoextendSize();

  class PARSERS_PUBLIC_TYPE TsOptionMaxSizeContext : public antlr4::ParserRuleContext {
  public:
    TsOptionMaxSizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAX_SIZE_SYMBOL();
    SizeNumberContext *sizeNumber();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

   
  };

  TsOptionMaxSizeContext* tsOptionMaxSize();

  class PARSERS_PUBLIC_TYPE TsOptionExtentSizeContext : public antlr4::ParserRuleContext {
  public:
    TsOptionExtentSizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTENT_SIZE_SYMBOL();
    SizeNumberContext *sizeNumber();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

   
  };

  TsOptionExtentSizeContext* tsOptionExtentSize();

  class PARSERS_PUBLIC_TYPE TsOptionNodegroupContext : public antlr4::ParserRuleContext {
  public:
    TsOptionNodegroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NODEGROUP_SYMBOL();
    Real_ulong_numberContext *real_ulong_number();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

   
  };

  TsOptionNodegroupContext* tsOptionNodegroup();

  class PARSERS_PUBLIC_TYPE TsOptionEngineContext : public antlr4::ParserRuleContext {
  public:
    TsOptionEngineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENGINE_SYMBOL();
    EngineRefContext *engineRef();
    antlr4::tree::TerminalNode *STORAGE_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

   
  };

  TsOptionEngineContext* tsOptionEngine();

  class PARSERS_PUBLIC_TYPE TsOptionWaitContext : public antlr4::ParserRuleContext {
  public:
    TsOptionWaitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WAIT_SYMBOL();
    antlr4::tree::TerminalNode *NO_WAIT_SYMBOL();

   
  };

  TsOptionWaitContext* tsOptionWait();

  class PARSERS_PUBLIC_TYPE TsOptionCommentContext : public antlr4::ParserRuleContext {
  public:
    TsOptionCommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

   
  };

  TsOptionCommentContext* tsOptionComment();

  class PARSERS_PUBLIC_TYPE TsOptionFileblockSizeContext : public antlr4::ParserRuleContext {
  public:
    TsOptionFileblockSizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILE_BLOCK_SIZE_SYMBOL();
    SizeNumberContext *sizeNumber();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

   
  };

  TsOptionFileblockSizeContext* tsOptionFileblockSize();

  class PARSERS_PUBLIC_TYPE TsOptionEncryptionContext : public antlr4::ParserRuleContext {
  public:
    TsOptionEncryptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENCRYPTION_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

   
  };

  TsOptionEncryptionContext* tsOptionEncryption();

  class PARSERS_PUBLIC_TYPE TsOptionEngineAttributeContext : public antlr4::ParserRuleContext {
  public:
    TsOptionEngineAttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENGINE_SYMBOL();
    JsonAttributeContext *jsonAttribute();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

   
  };

  TsOptionEngineAttributeContext* tsOptionEngineAttribute();

  class PARSERS_PUBLIC_TYPE CreateViewContext : public antlr4::ParserRuleContext {
  public:
    CreateViewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VIEW_SYMBOL();
    ViewNameContext *viewName();
    ViewTailContext *viewTail();
    ViewReplaceOrAlgorithmContext *viewReplaceOrAlgorithm();
    DefinerClauseContext *definerClause();
    ViewSuidContext *viewSuid();

   
  };

  CreateViewContext* createView();

  class PARSERS_PUBLIC_TYPE ViewReplaceOrAlgorithmContext : public antlr4::ParserRuleContext {
  public:
    ViewReplaceOrAlgorithmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR_SYMBOL();
    antlr4::tree::TerminalNode *REPLACE_SYMBOL();
    ViewAlgorithmContext *viewAlgorithm();

   
  };

  ViewReplaceOrAlgorithmContext* viewReplaceOrAlgorithm();

  class PARSERS_PUBLIC_TYPE ViewAlgorithmContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *algorithm = nullptr;
    ViewAlgorithmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALGORITHM_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *UNDEFINED_SYMBOL();
    antlr4::tree::TerminalNode *MERGE_SYMBOL();
    antlr4::tree::TerminalNode *TEMPTABLE_SYMBOL();

   
  };

  ViewAlgorithmContext* viewAlgorithm();

  class PARSERS_PUBLIC_TYPE ViewSuidContext : public antlr4::ParserRuleContext {
  public:
    ViewSuidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SQL_SYMBOL();
    antlr4::tree::TerminalNode *SECURITY_SYMBOL();
    antlr4::tree::TerminalNode *DEFINER_SYMBOL();
    antlr4::tree::TerminalNode *INVOKER_SYMBOL();

   
  };

  ViewSuidContext* viewSuid();

  class PARSERS_PUBLIC_TYPE CreateTriggerContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *timing = nullptr;
    antlr4::Token *event = nullptr;
    CreateTriggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRIGGER_SYMBOL();
    TriggerNameContext *triggerName();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    TableRefContext *tableRef();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *EACH_SYMBOL();
    antlr4::tree::TerminalNode *ROW_SYMBOL();
    CompoundStatementContext *compoundStatement();
    antlr4::tree::TerminalNode *BEFORE_SYMBOL();
    antlr4::tree::TerminalNode *AFTER_SYMBOL();
    antlr4::tree::TerminalNode *INSERT_SYMBOL();
    antlr4::tree::TerminalNode *UPDATE_SYMBOL();
    antlr4::tree::TerminalNode *DELETE_SYMBOL();
    DefinerClauseContext *definerClause();
    IfNotExistsContext *ifNotExists();
    TriggerFollowsPrecedesClauseContext *triggerFollowsPrecedesClause();

   
  };

  CreateTriggerContext* createTrigger();

  class PARSERS_PUBLIC_TYPE TriggerFollowsPrecedesClauseContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *ordering = nullptr;
    TriggerFollowsPrecedesClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *FOLLOWS_SYMBOL();
    antlr4::tree::TerminalNode *PRECEDES_SYMBOL();

   
  };

  TriggerFollowsPrecedesClauseContext* triggerFollowsPrecedesClause();

  class PARSERS_PUBLIC_TYPE CreateEventContext : public antlr4::ParserRuleContext {
  public:
    CreateEventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVENT_SYMBOL();
    EventNameContext *eventName();
    std::vector<antlr4::tree::TerminalNode *> ON_SYMBOL();
    antlr4::tree::TerminalNode* ON_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *SCHEDULE_SYMBOL();
    ScheduleContext *schedule();
    antlr4::tree::TerminalNode *DO_SYMBOL();
    CompoundStatementContext *compoundStatement();
    DefinerClauseContext *definerClause();
    IfNotExistsContext *ifNotExists();
    antlr4::tree::TerminalNode *COMPLETION_SYMBOL();
    antlr4::tree::TerminalNode *PRESERVE_SYMBOL();
    antlr4::tree::TerminalNode *ENABLE_SYMBOL();
    antlr4::tree::TerminalNode *DISABLE_SYMBOL();
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *NOT_SYMBOL();
    ReplicaContext *replica();

   
  };

  CreateEventContext* createEvent();

  class PARSERS_PUBLIC_TYPE CreateRoleContext : public antlr4::ParserRuleContext {
  public:
    CreateRoleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROLE_SYMBOL();
    RoleListContext *roleList();
    IfNotExistsContext *ifNotExists();

   
  };

  CreateRoleContext* createRole();

  class PARSERS_PUBLIC_TYPE CreateSpatialReferenceContext : public antlr4::ParserRuleContext {
  public:
    CreateSpatialReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR_SYMBOL();
    antlr4::tree::TerminalNode *REPLACE_SYMBOL();
    antlr4::tree::TerminalNode *SPATIAL_SYMBOL();
    antlr4::tree::TerminalNode *REFERENCE_SYMBOL();
    antlr4::tree::TerminalNode *SYSTEM_SYMBOL();
    Real_ulonglong_numberContext *real_ulonglong_number();
    std::vector<SrsAttributeContext *> srsAttribute();
    SrsAttributeContext* srsAttribute(size_t i);
    IfNotExistsContext *ifNotExists();

   
  };

  CreateSpatialReferenceContext* createSpatialReference();

  class PARSERS_PUBLIC_TYPE SrsAttributeContext : public antlr4::ParserRuleContext {
  public:
    SrsAttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME_SYMBOL();
    antlr4::tree::TerminalNode *TEXT_SYMBOL();
    TextStringNoLinebreakContext *textStringNoLinebreak();
    antlr4::tree::TerminalNode *DEFINITION_SYMBOL();
    antlr4::tree::TerminalNode *ORGANIZATION_SYMBOL();
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    Real_ulonglong_numberContext *real_ulonglong_number();
    antlr4::tree::TerminalNode *DESCRIPTION_SYMBOL();

   
  };

  SrsAttributeContext* srsAttribute();

  class PARSERS_PUBLIC_TYPE DropStatementContext : public antlr4::ParserRuleContext {
  public:
    DropStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_SYMBOL();
    DropDatabaseContext *dropDatabase();
    DropEventContext *dropEvent();
    DropFunctionContext *dropFunction();
    DropProcedureContext *dropProcedure();
    DropIndexContext *dropIndex();
    DropLogfileGroupContext *dropLogfileGroup();
    DropServerContext *dropServer();
    DropTableContext *dropTable();
    DropTableSpaceContext *dropTableSpace();
    DropTriggerContext *dropTrigger();
    DropViewContext *dropView();
    DropRoleContext *dropRole();
    DropSpatialReferenceContext *dropSpatialReference();
    DropUndoTablespaceContext *dropUndoTablespace();

   
  };

  DropStatementContext* dropStatement();

  class PARSERS_PUBLIC_TYPE DropDatabaseContext : public antlr4::ParserRuleContext {
  public:
    DropDatabaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATABASE_SYMBOL();
    SchemaRefContext *schemaRef();
    IfExistsContext *ifExists();

   
  };

  DropDatabaseContext* dropDatabase();

  class PARSERS_PUBLIC_TYPE DropEventContext : public antlr4::ParserRuleContext {
  public:
    DropEventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVENT_SYMBOL();
    EventRefContext *eventRef();
    IfExistsContext *ifExists();

   
  };

  DropEventContext* dropEvent();

  class PARSERS_PUBLIC_TYPE DropFunctionContext : public antlr4::ParserRuleContext {
  public:
    DropFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION_SYMBOL();
    FunctionRefContext *functionRef();
    IfExistsContext *ifExists();

   
  };

  DropFunctionContext* dropFunction();

  class PARSERS_PUBLIC_TYPE DropProcedureContext : public antlr4::ParserRuleContext {
  public:
    DropProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCEDURE_SYMBOL();
    ProcedureRefContext *procedureRef();
    IfExistsContext *ifExists();

   
  };

  DropProcedureContext* dropProcedure();

  class PARSERS_PUBLIC_TYPE DropIndexContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    DropIndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndexRefContext *indexRef();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    TableRefContext *tableRef();
    antlr4::tree::TerminalNode *INDEX_SYMBOL();
    OnlineOptionContext *onlineOption();
    IndexLockAndAlgorithmContext *indexLockAndAlgorithm();

   
  };

  DropIndexContext* dropIndex();

  class PARSERS_PUBLIC_TYPE DropLogfileGroupContext : public antlr4::ParserRuleContext {
  public:
    DropLogfileGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOGFILE_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_SYMBOL();
    LogfileGroupRefContext *logfileGroupRef();
    std::vector<DropLogfileGroupOptionContext *> dropLogfileGroupOption();
    DropLogfileGroupOptionContext* dropLogfileGroupOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  DropLogfileGroupContext* dropLogfileGroup();

  class PARSERS_PUBLIC_TYPE DropLogfileGroupOptionContext : public antlr4::ParserRuleContext {
  public:
    DropLogfileGroupOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TsOptionWaitContext *tsOptionWait();
    TsOptionEngineContext *tsOptionEngine();

   
  };

  DropLogfileGroupOptionContext* dropLogfileGroupOption();

  class PARSERS_PUBLIC_TYPE DropServerContext : public antlr4::ParserRuleContext {
  public:
    DropServerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SERVER_SYMBOL();
    ServerRefContext *serverRef();
    IfExistsContext *ifExists();

   
  };

  DropServerContext* dropServer();

  class PARSERS_PUBLIC_TYPE DropTableContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    DropTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefListContext *tableRefList();
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    antlr4::tree::TerminalNode *TABLES_SYMBOL();
    antlr4::tree::TerminalNode *TEMPORARY_SYMBOL();
    IfExistsContext *ifExists();
    antlr4::tree::TerminalNode *RESTRICT_SYMBOL();
    antlr4::tree::TerminalNode *CASCADE_SYMBOL();

   
  };

  DropTableContext* dropTable();

  class PARSERS_PUBLIC_TYPE DropTableSpaceContext : public antlr4::ParserRuleContext {
  public:
    DropTableSpaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    TablespaceRefContext *tablespaceRef();
    std::vector<DropLogfileGroupOptionContext *> dropLogfileGroupOption();
    DropLogfileGroupOptionContext* dropLogfileGroupOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  DropTableSpaceContext* dropTableSpace();

  class PARSERS_PUBLIC_TYPE DropTriggerContext : public antlr4::ParserRuleContext {
  public:
    DropTriggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRIGGER_SYMBOL();
    TriggerRefContext *triggerRef();
    IfExistsContext *ifExists();

   
  };

  DropTriggerContext* dropTrigger();

  class PARSERS_PUBLIC_TYPE DropViewContext : public antlr4::ParserRuleContext {
  public:
    DropViewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VIEW_SYMBOL();
    ViewRefListContext *viewRefList();
    IfExistsContext *ifExists();
    antlr4::tree::TerminalNode *RESTRICT_SYMBOL();
    antlr4::tree::TerminalNode *CASCADE_SYMBOL();

   
  };

  DropViewContext* dropView();

  class PARSERS_PUBLIC_TYPE DropRoleContext : public antlr4::ParserRuleContext {
  public:
    DropRoleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROLE_SYMBOL();
    RoleListContext *roleList();
    IfExistsContext *ifExists();

   
  };

  DropRoleContext* dropRole();

  class PARSERS_PUBLIC_TYPE DropSpatialReferenceContext : public antlr4::ParserRuleContext {
  public:
    DropSpatialReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPATIAL_SYMBOL();
    antlr4::tree::TerminalNode *REFERENCE_SYMBOL();
    antlr4::tree::TerminalNode *SYSTEM_SYMBOL();
    Real_ulonglong_numberContext *real_ulonglong_number();
    IfExistsContext *ifExists();

   
  };

  DropSpatialReferenceContext* dropSpatialReference();

  class PARSERS_PUBLIC_TYPE DropUndoTablespaceContext : public antlr4::ParserRuleContext {
  public:
    DropUndoTablespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNDO_SYMBOL();
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    TablespaceRefContext *tablespaceRef();
    UndoTableSpaceOptionsContext *undoTableSpaceOptions();

   
  };

  DropUndoTablespaceContext* dropUndoTablespace();

  class PARSERS_PUBLIC_TYPE RenameTableStatementContext : public antlr4::ParserRuleContext {
  public:
    RenameTableStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RENAME_SYMBOL();
    std::vector<RenamePairContext *> renamePair();
    RenamePairContext* renamePair(size_t i);
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    antlr4::tree::TerminalNode *TABLES_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  RenameTableStatementContext* renameTableStatement();

  class PARSERS_PUBLIC_TYPE RenamePairContext : public antlr4::ParserRuleContext {
  public:
    RenamePairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefContext *tableRef();
    antlr4::tree::TerminalNode *TO_SYMBOL();
    TableNameContext *tableName();

   
  };

  RenamePairContext* renamePair();

  class PARSERS_PUBLIC_TYPE TruncateTableStatementContext : public antlr4::ParserRuleContext {
  public:
    TruncateTableStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUNCATE_SYMBOL();
    TableRefContext *tableRef();
    antlr4::tree::TerminalNode *TABLE_SYMBOL();

   
  };

  TruncateTableStatementContext* truncateTableStatement();

  class PARSERS_PUBLIC_TYPE ImportStatementContext : public antlr4::ParserRuleContext {
  public:
    ImportStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    TextStringLiteralListContext *textStringLiteralList();

   
  };

  ImportStatementContext* importStatement();

  class PARSERS_PUBLIC_TYPE CallStatementContext : public antlr4::ParserRuleContext {
  public:
    CallStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CALL_SYMBOL();
    ProcedureRefContext *procedureRef();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    ExprListContext *exprList();

   
  };

  CallStatementContext* callStatement();

  class PARSERS_PUBLIC_TYPE DeleteStatementContext : public antlr4::ParserRuleContext {
  public:
    DeleteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE_SYMBOL();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    TableAliasRefListContext *tableAliasRefList();
    TableReferenceListContext *tableReferenceList();
    WithClauseContext *withClause();
    std::vector<DeleteStatementOptionContext *> deleteStatementOption();
    DeleteStatementOptionContext* deleteStatementOption(size_t i);
    antlr4::tree::TerminalNode *USING_SYMBOL();
    TableRefContext *tableRef();
    WhereClauseContext *whereClause();
    TableAliasContext *tableAlias();
    PartitionDeleteContext *partitionDelete();
    OrderClauseContext *orderClause();
    SimpleLimitClauseContext *simpleLimitClause();

   
  };

  DeleteStatementContext* deleteStatement();

  class PARSERS_PUBLIC_TYPE PartitionDeleteContext : public antlr4::ParserRuleContext {
  public:
    PartitionDeleteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

   
  };

  PartitionDeleteContext* partitionDelete();

  class PARSERS_PUBLIC_TYPE DeleteStatementOptionContext : public antlr4::ParserRuleContext {
  public:
    DeleteStatementOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUICK_SYMBOL();
    antlr4::tree::TerminalNode *LOW_PRIORITY_SYMBOL();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();

   
  };

  DeleteStatementOptionContext* deleteStatementOption();

  class PARSERS_PUBLIC_TYPE DoStatementContext : public antlr4::ParserRuleContext {
  public:
    DoStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO_SYMBOL();
    SelectItemListContext *selectItemList();

   
  };

  DoStatementContext* doStatement();

  class PARSERS_PUBLIC_TYPE HandlerStatementContext : public antlr4::ParserRuleContext {
  public:
    HandlerStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HANDLER_SYMBOL();
    TableRefContext *tableRef();
    antlr4::tree::TerminalNode *OPEN_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *CLOSE_SYMBOL();
    antlr4::tree::TerminalNode *READ_SYMBOL();
    HandlerReadOrScanContext *handlerReadOrScan();
    TableAliasContext *tableAlias();
    WhereClauseContext *whereClause();
    LimitClauseContext *limitClause();

   
  };

  HandlerStatementContext* handlerStatement();

  class PARSERS_PUBLIC_TYPE HandlerReadOrScanContext : public antlr4::ParserRuleContext {
  public:
    HandlerReadOrScanContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FIRST_SYMBOL();
    antlr4::tree::TerminalNode *NEXT_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ValuesContext *values();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *PREV_SYMBOL();
    antlr4::tree::TerminalNode *LAST_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *LESS_THAN_OPERATOR();
    antlr4::tree::TerminalNode *GREATER_THAN_OPERATOR();
    antlr4::tree::TerminalNode *LESS_OR_EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *GREATER_OR_EQUAL_OPERATOR();

   
  };

  HandlerReadOrScanContext* handlerReadOrScan();

  class PARSERS_PUBLIC_TYPE InsertStatementContext : public antlr4::ParserRuleContext {
  public:
    InsertStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT_SYMBOL();
    TableRefContext *tableRef();
    InsertFromConstructorContext *insertFromConstructor();
    antlr4::tree::TerminalNode *SET_SYMBOL();
    UpdateListContext *updateList();
    InsertQueryExpressionContext *insertQueryExpression();
    InsertLockOptionContext *insertLockOption();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();
    antlr4::tree::TerminalNode *INTO_SYMBOL();
    UsePartitionContext *usePartition();
    InsertUpdateListContext *insertUpdateList();
    ValuesReferenceContext *valuesReference();

   
  };

  InsertStatementContext* insertStatement();

  class PARSERS_PUBLIC_TYPE InsertLockOptionContext : public antlr4::ParserRuleContext {
  public:
    InsertLockOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOW_PRIORITY_SYMBOL();
    antlr4::tree::TerminalNode *DELAYED_SYMBOL();
    antlr4::tree::TerminalNode *HIGH_PRIORITY_SYMBOL();

   
  };

  InsertLockOptionContext* insertLockOption();

  class PARSERS_PUBLIC_TYPE InsertFromConstructorContext : public antlr4::ParserRuleContext {
  public:
    InsertFromConstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InsertValuesContext *insertValues();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    FieldsContext *fields();

   
  };

  InsertFromConstructorContext* insertFromConstructor();

  class PARSERS_PUBLIC_TYPE FieldsContext : public antlr4::ParserRuleContext {
  public:
    FieldsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InsertIdentifierContext *> insertIdentifier();
    InsertIdentifierContext* insertIdentifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  FieldsContext* fields();

  class PARSERS_PUBLIC_TYPE InsertValuesContext : public antlr4::ParserRuleContext {
  public:
    InsertValuesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueListContext *valueList();
    antlr4::tree::TerminalNode *VALUES_SYMBOL();
    antlr4::tree::TerminalNode *VALUE_SYMBOL();

   
  };

  InsertValuesContext* insertValues();

  class PARSERS_PUBLIC_TYPE InsertQueryExpressionContext : public antlr4::ParserRuleContext {
  public:
    InsertQueryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionOrParensContext *queryExpressionOrParens();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    QueryExpressionWithOptLockingClausesContext *queryExpressionWithOptLockingClauses();
    FieldsContext *fields();

   
  };

  InsertQueryExpressionContext* insertQueryExpression();

  class PARSERS_PUBLIC_TYPE ValueListContext : public antlr4::ParserRuleContext {
  public:
    ValueListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode* OPEN_PAR_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode* CLOSE_PAR_SYMBOL(size_t i);
    std::vector<ValuesContext *> values();
    ValuesContext* values(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  ValueListContext* valueList();

  class PARSERS_PUBLIC_TYPE ValuesContext : public antlr4::ParserRuleContext {
  public:
    ValuesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode* DEFAULT_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  ValuesContext* values();

  class PARSERS_PUBLIC_TYPE ValuesReferenceContext : public antlr4::ParserRuleContext {
  public:
    ValuesReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS_SYMBOL();
    IdentifierContext *identifier();
    ColumnInternalRefListContext *columnInternalRefList();

   
  };

  ValuesReferenceContext* valuesReference();

  class PARSERS_PUBLIC_TYPE InsertUpdateListContext : public antlr4::ParserRuleContext {
  public:
    InsertUpdateListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON_SYMBOL();
    antlr4::tree::TerminalNode *DUPLICATE_SYMBOL();
    antlr4::tree::TerminalNode *KEY_SYMBOL();
    antlr4::tree::TerminalNode *UPDATE_SYMBOL();
    UpdateListContext *updateList();

   
  };

  InsertUpdateListContext* insertUpdateList();

  class PARSERS_PUBLIC_TYPE LoadStatementContext : public antlr4::ParserRuleContext {
  public:
    LoadStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOAD_SYMBOL();
    DataOrXmlContext *dataOrXml();
    antlr4::tree::TerminalNode *INFILE_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *INTO_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    TableRefContext *tableRef();
    LoadDataFileTailContext *loadDataFileTail();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    UsePartitionContext *usePartition();
    CharsetClauseContext *charsetClause();
    XmlRowsIdentifiedByContext *xmlRowsIdentifiedBy();
    FieldsClauseContext *fieldsClause();
    LinesClauseContext *linesClause();
    antlr4::tree::TerminalNode *LOW_PRIORITY_SYMBOL();
    antlr4::tree::TerminalNode *CONCURRENT_SYMBOL();
    antlr4::tree::TerminalNode *REPLACE_SYMBOL();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();

   
  };

  LoadStatementContext* loadStatement();

  class PARSERS_PUBLIC_TYPE DataOrXmlContext : public antlr4::ParserRuleContext {
  public:
    DataOrXmlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    antlr4::tree::TerminalNode *XML_SYMBOL();

   
  };

  DataOrXmlContext* dataOrXml();

  class PARSERS_PUBLIC_TYPE XmlRowsIdentifiedByContext : public antlr4::ParserRuleContext {
  public:
    XmlRowsIdentifiedByContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROWS_SYMBOL();
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    TextStringContext *textString();

   
  };

  XmlRowsIdentifiedByContext* xmlRowsIdentifiedBy();

  class PARSERS_PUBLIC_TYPE LoadDataFileTailContext : public antlr4::ParserRuleContext {
  public:
    LoadDataFileTailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();
    antlr4::tree::TerminalNode *INT_NUMBER();
    LoadDataFileTargetListContext *loadDataFileTargetList();
    antlr4::tree::TerminalNode *SET_SYMBOL();
    UpdateListContext *updateList();
    antlr4::tree::TerminalNode *LINES_SYMBOL();
    antlr4::tree::TerminalNode *ROWS_SYMBOL();

   
  };

  LoadDataFileTailContext* loadDataFileTail();

  class PARSERS_PUBLIC_TYPE LoadDataFileTargetListContext : public antlr4::ParserRuleContext {
  public:
    LoadDataFileTargetListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    FieldOrVariableListContext *fieldOrVariableList();

   
  };

  LoadDataFileTargetListContext* loadDataFileTargetList();

  class PARSERS_PUBLIC_TYPE FieldOrVariableListContext : public antlr4::ParserRuleContext {
  public:
    FieldOrVariableListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ColumnRefContext *> columnRef();
    ColumnRefContext* columnRef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AT_SIGN_SYMBOL();
    antlr4::tree::TerminalNode* AT_SIGN_SYMBOL(size_t i);
    std::vector<TextOrIdentifierContext *> textOrIdentifier();
    TextOrIdentifierContext* textOrIdentifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AT_AT_SIGN_SYMBOL();
    antlr4::tree::TerminalNode* AT_AT_SIGN_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AT_TEXT_SUFFIX();
    antlr4::tree::TerminalNode* AT_TEXT_SUFFIX(size_t i);

   
  };

  FieldOrVariableListContext* fieldOrVariableList();

  class PARSERS_PUBLIC_TYPE ReplaceStatementContext : public antlr4::ParserRuleContext {
  public:
    ReplaceStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPLACE_SYMBOL();
    TableRefContext *tableRef();
    InsertFromConstructorContext *insertFromConstructor();
    antlr4::tree::TerminalNode *SET_SYMBOL();
    UpdateListContext *updateList();
    InsertQueryExpressionContext *insertQueryExpression();
    antlr4::tree::TerminalNode *INTO_SYMBOL();
    UsePartitionContext *usePartition();
    antlr4::tree::TerminalNode *LOW_PRIORITY_SYMBOL();
    antlr4::tree::TerminalNode *DELAYED_SYMBOL();

   
  };

  ReplaceStatementContext* replaceStatement();

  class PARSERS_PUBLIC_TYPE SelectStatementContext : public antlr4::ParserRuleContext {
  public:
    SelectStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionContext *queryExpression();
    LockingClauseListContext *lockingClauseList();
    SelectStatementWithIntoContext *selectStatementWithInto();

   
  };

  SelectStatementContext* selectStatement();

  class PARSERS_PUBLIC_TYPE SelectStatementWithIntoContext : public antlr4::ParserRuleContext {
  public:
    SelectStatementWithIntoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    SelectStatementWithIntoContext *selectStatementWithInto();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    QueryExpressionContext *queryExpression();
    IntoClauseContext *intoClause();
    LockingClauseListContext *lockingClauseList();
    QueryExpressionParensContext *queryExpressionParens();

   
  };

  SelectStatementWithIntoContext* selectStatementWithInto();

  class PARSERS_PUBLIC_TYPE QueryExpressionContext : public antlr4::ParserRuleContext {
  public:
    QueryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionBodyContext *queryExpressionBody();
    QueryExpressionParensContext *queryExpressionParens();
    WithClauseContext *withClause();
    OrderClauseContext *orderClause();
    LimitClauseContext *limitClause();
    QueryExpressionBodyNewContext *queryExpressionBodyNew();

   
  };

  QueryExpressionContext* queryExpression();

  class PARSERS_PUBLIC_TYPE QueryExpressionBodyContext : public antlr4::ParserRuleContext {
  public:
    QueryExpressionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<QueryPrimaryContext *> queryPrimary();
    QueryPrimaryContext* queryPrimary(size_t i);
    std::vector<QueryExpressionParensContext *> queryExpressionParens();
    QueryExpressionParensContext* queryExpressionParens(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNION_SYMBOL();
    antlr4::tree::TerminalNode* UNION_SYMBOL(size_t i);
    std::vector<UnionOptionContext *> unionOption();
    UnionOptionContext* unionOption(size_t i);

   
  };

  QueryExpressionBodyContext* queryExpressionBody();

  class PARSERS_PUBLIC_TYPE QueryExpressionBodyNewContext : public antlr4::ParserRuleContext {
  public:
    QueryExpressionBodyNewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryPrimaryContext *queryPrimary();
    QueryExpressionParensContext *queryExpressionParens();
    std::vector<QueryExpressionBodyContext *> queryExpressionBody();
    QueryExpressionBodyContext* queryExpressionBody(size_t i);
    antlr4::tree::TerminalNode *UNION_SYMBOL();
    antlr4::tree::TerminalNode *EXCEPT_SYMBOL();
    antlr4::tree::TerminalNode *INTERSECT_SYMBOL();
    UnionOptionContext *unionOption();

   
  };

  QueryExpressionBodyNewContext* queryExpressionBodyNew();

  class PARSERS_PUBLIC_TYPE QueryExpressionParensContext : public antlr4::ParserRuleContext {
  public:
    QueryExpressionParensContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    QueryExpressionParensContext *queryExpressionParens();
    QueryExpressionWithOptLockingClausesContext *queryExpressionWithOptLockingClauses();

   
  };

  QueryExpressionParensContext* queryExpressionParens();

  class PARSERS_PUBLIC_TYPE QueryPrimaryContext : public antlr4::ParserRuleContext {
  public:
    QueryPrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QuerySpecificationContext *querySpecification();
    TableValueConstructorContext *tableValueConstructor();
    ExplicitTableContext *explicitTable();

   
  };

  QueryPrimaryContext* queryPrimary();

  class PARSERS_PUBLIC_TYPE QuerySpecificationContext : public antlr4::ParserRuleContext {
  public:
    QuerySpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT_SYMBOL();
    SelectItemListContext *selectItemList();
    std::vector<SelectOptionContext *> selectOption();
    SelectOptionContext* selectOption(size_t i);
    IntoClauseContext *intoClause();
    FromClauseContext *fromClause();
    WhereClauseContext *whereClause();
    GroupByClauseContext *groupByClause();
    HavingClauseContext *havingClause();
    WindowClauseContext *windowClause();

   
  };

  QuerySpecificationContext* querySpecification();

  class PARSERS_PUBLIC_TYPE SubqueryContext : public antlr4::ParserRuleContext {
  public:
    SubqueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionParensContext *queryExpressionParens();

   
  };

  SubqueryContext* subquery();

  class PARSERS_PUBLIC_TYPE QuerySpecOptionContext : public antlr4::ParserRuleContext {
  public:
    QuerySpecOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    antlr4::tree::TerminalNode *DISTINCT_SYMBOL();
    antlr4::tree::TerminalNode *STRAIGHT_JOIN_SYMBOL();
    antlr4::tree::TerminalNode *HIGH_PRIORITY_SYMBOL();
    antlr4::tree::TerminalNode *SQL_SMALL_RESULT_SYMBOL();
    antlr4::tree::TerminalNode *SQL_BIG_RESULT_SYMBOL();
    antlr4::tree::TerminalNode *SQL_BUFFER_RESULT_SYMBOL();
    antlr4::tree::TerminalNode *SQL_CALC_FOUND_ROWS_SYMBOL();

   
  };

  QuerySpecOptionContext* querySpecOption();

  class PARSERS_PUBLIC_TYPE LimitClauseContext : public antlr4::ParserRuleContext {
  public:
    LimitClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIMIT_SYMBOL();
    LimitOptionsContext *limitOptions();

   
  };

  LimitClauseContext* limitClause();

  class PARSERS_PUBLIC_TYPE SimpleLimitClauseContext : public antlr4::ParserRuleContext {
  public:
    SimpleLimitClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIMIT_SYMBOL();
    LimitOptionContext *limitOption();

   
  };

  SimpleLimitClauseContext* simpleLimitClause();

  class PARSERS_PUBLIC_TYPE LimitOptionsContext : public antlr4::ParserRuleContext {
  public:
    LimitOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LimitOptionContext *> limitOption();
    LimitOptionContext* limitOption(size_t i);
    antlr4::tree::TerminalNode *COMMA_SYMBOL();
    antlr4::tree::TerminalNode *OFFSET_SYMBOL();

   
  };

  LimitOptionsContext* limitOptions();

  class PARSERS_PUBLIC_TYPE LimitOptionContext : public antlr4::ParserRuleContext {
  public:
    LimitOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *PARAM_MARKER();
    antlr4::tree::TerminalNode *ULONGLONG_NUMBER();
    antlr4::tree::TerminalNode *LONG_NUMBER();
    antlr4::tree::TerminalNode *INT_NUMBER();

   
  };

  LimitOptionContext* limitOption();

  class PARSERS_PUBLIC_TYPE IntoClauseContext : public antlr4::ParserRuleContext {
  public:
    IntoClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTO_SYMBOL();
    antlr4::tree::TerminalNode *OUTFILE_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *DUMPFILE_SYMBOL();
    std::vector<TextOrIdentifierContext *> textOrIdentifier();
    TextOrIdentifierContext* textOrIdentifier(size_t i);
    std::vector<UserVariableContext *> userVariable();
    UserVariableContext* userVariable(size_t i);
    CharsetClauseContext *charsetClause();
    FieldsClauseContext *fieldsClause();
    LinesClauseContext *linesClause();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  IntoClauseContext* intoClause();

  class PARSERS_PUBLIC_TYPE ProcedureAnalyseClauseContext : public antlr4::ParserRuleContext {
  public:
    ProcedureAnalyseClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCEDURE_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> INT_NUMBER();
    antlr4::tree::TerminalNode* INT_NUMBER(size_t i);
    antlr4::tree::TerminalNode *COMMA_SYMBOL();

   
  };

  ProcedureAnalyseClauseContext* procedureAnalyseClause();

  class PARSERS_PUBLIC_TYPE HavingClauseContext : public antlr4::ParserRuleContext {
  public:
    HavingClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HAVING_SYMBOL();
    ExprContext *expr();

   
  };

  HavingClauseContext* havingClause();

  class PARSERS_PUBLIC_TYPE WindowClauseContext : public antlr4::ParserRuleContext {
  public:
    WindowClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WINDOW_SYMBOL();
    std::vector<WindowDefinitionContext *> windowDefinition();
    WindowDefinitionContext* windowDefinition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  WindowClauseContext* windowClause();

  class PARSERS_PUBLIC_TYPE WindowDefinitionContext : public antlr4::ParserRuleContext {
  public:
    WindowDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WindowNameContext *windowName();
    antlr4::tree::TerminalNode *AS_SYMBOL();
    WindowSpecContext *windowSpec();

   
  };

  WindowDefinitionContext* windowDefinition();

  class PARSERS_PUBLIC_TYPE WindowSpecContext : public antlr4::ParserRuleContext {
  public:
    WindowSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    WindowSpecDetailsContext *windowSpecDetails();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

   
  };

  WindowSpecContext* windowSpec();

  class PARSERS_PUBLIC_TYPE WindowSpecDetailsContext : public antlr4::ParserRuleContext {
  public:
    WindowSpecDetailsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WindowNameContext *windowName();
    antlr4::tree::TerminalNode *PARTITION_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    OrderListContext *orderList();
    OrderClauseContext *orderClause();
    WindowFrameClauseContext *windowFrameClause();

   
  };

  WindowSpecDetailsContext* windowSpecDetails();

  class PARSERS_PUBLIC_TYPE WindowFrameClauseContext : public antlr4::ParserRuleContext {
  public:
    WindowFrameClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WindowFrameUnitsContext *windowFrameUnits();
    WindowFrameExtentContext *windowFrameExtent();
    WindowFrameExclusionContext *windowFrameExclusion();

   
  };

  WindowFrameClauseContext* windowFrameClause();

  class PARSERS_PUBLIC_TYPE WindowFrameUnitsContext : public antlr4::ParserRuleContext {
  public:
    WindowFrameUnitsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROWS_SYMBOL();
    antlr4::tree::TerminalNode *RANGE_SYMBOL();
    antlr4::tree::TerminalNode *GROUPS_SYMBOL();

   
  };

  WindowFrameUnitsContext* windowFrameUnits();

  class PARSERS_PUBLIC_TYPE WindowFrameExtentContext : public antlr4::ParserRuleContext {
  public:
    WindowFrameExtentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WindowFrameStartContext *windowFrameStart();
    WindowFrameBetweenContext *windowFrameBetween();

   
  };

  WindowFrameExtentContext* windowFrameExtent();

  class PARSERS_PUBLIC_TYPE WindowFrameStartContext : public antlr4::ParserRuleContext {
  public:
    WindowFrameStartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNBOUNDED_SYMBOL();
    antlr4::tree::TerminalNode *PRECEDING_SYMBOL();
    Ulonglong_numberContext *ulonglong_number();
    antlr4::tree::TerminalNode *PARAM_MARKER();
    antlr4::tree::TerminalNode *INTERVAL_SYMBOL();
    ExprContext *expr();
    IntervalContext *interval();
    antlr4::tree::TerminalNode *CURRENT_SYMBOL();
    antlr4::tree::TerminalNode *ROW_SYMBOL();

   
  };

  WindowFrameStartContext* windowFrameStart();

  class PARSERS_PUBLIC_TYPE WindowFrameBetweenContext : public antlr4::ParserRuleContext {
  public:
    WindowFrameBetweenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BETWEEN_SYMBOL();
    std::vector<WindowFrameBoundContext *> windowFrameBound();
    WindowFrameBoundContext* windowFrameBound(size_t i);
    antlr4::tree::TerminalNode *AND_SYMBOL();

   
  };

  WindowFrameBetweenContext* windowFrameBetween();

  class PARSERS_PUBLIC_TYPE WindowFrameBoundContext : public antlr4::ParserRuleContext {
  public:
    WindowFrameBoundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WindowFrameStartContext *windowFrameStart();
    antlr4::tree::TerminalNode *UNBOUNDED_SYMBOL();
    antlr4::tree::TerminalNode *FOLLOWING_SYMBOL();
    Ulonglong_numberContext *ulonglong_number();
    antlr4::tree::TerminalNode *PARAM_MARKER();
    antlr4::tree::TerminalNode *INTERVAL_SYMBOL();
    ExprContext *expr();
    IntervalContext *interval();

   
  };

  WindowFrameBoundContext* windowFrameBound();

  class PARSERS_PUBLIC_TYPE WindowFrameExclusionContext : public antlr4::ParserRuleContext {
  public:
    WindowFrameExclusionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXCLUDE_SYMBOL();
    antlr4::tree::TerminalNode *CURRENT_SYMBOL();
    antlr4::tree::TerminalNode *ROW_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_SYMBOL();
    antlr4::tree::TerminalNode *TIES_SYMBOL();
    antlr4::tree::TerminalNode *NO_SYMBOL();
    antlr4::tree::TerminalNode *OTHERS_SYMBOL();

   
  };

  WindowFrameExclusionContext* windowFrameExclusion();

  class PARSERS_PUBLIC_TYPE WithClauseContext : public antlr4::ParserRuleContext {
  public:
    WithClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    std::vector<CommonTableExpressionContext *> commonTableExpression();
    CommonTableExpressionContext* commonTableExpression(size_t i);
    antlr4::tree::TerminalNode *RECURSIVE_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  WithClauseContext* withClause();

  class PARSERS_PUBLIC_TYPE CommonTableExpressionContext : public antlr4::ParserRuleContext {
  public:
    CommonTableExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *AS_SYMBOL();
    SubqueryContext *subquery();
    ColumnInternalRefListContext *columnInternalRefList();

   
  };

  CommonTableExpressionContext* commonTableExpression();

  class PARSERS_PUBLIC_TYPE GroupByClauseContext : public antlr4::ParserRuleContext {
  public:
    GroupByClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUP_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    OrderListContext *orderList();
    OlapOptionContext *olapOption();

   
  };

  GroupByClauseContext* groupByClause();

  class PARSERS_PUBLIC_TYPE OlapOptionContext : public antlr4::ParserRuleContext {
  public:
    OlapOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *ROLLUP_SYMBOL();

   
  };

  OlapOptionContext* olapOption();

  class PARSERS_PUBLIC_TYPE OrderClauseContext : public antlr4::ParserRuleContext {
  public:
    OrderClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORDER_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    OrderListContext *orderList();

   
  };

  OrderClauseContext* orderClause();

  class PARSERS_PUBLIC_TYPE DirectionContext : public antlr4::ParserRuleContext {
  public:
    DirectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASC_SYMBOL();
    antlr4::tree::TerminalNode *DESC_SYMBOL();

   
  };

  DirectionContext* direction();

  class PARSERS_PUBLIC_TYPE FromClauseContext : public antlr4::ParserRuleContext {
  public:
    FromClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    antlr4::tree::TerminalNode *DUAL_SYMBOL();
    TableReferenceListContext *tableReferenceList();

   
  };

  FromClauseContext* fromClause();

  class PARSERS_PUBLIC_TYPE TableReferenceListContext : public antlr4::ParserRuleContext {
  public:
    TableReferenceListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableReferenceContext *> tableReference();
    TableReferenceContext* tableReference(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  TableReferenceListContext* tableReferenceList();

  class PARSERS_PUBLIC_TYPE TableValueConstructorContext : public antlr4::ParserRuleContext {
  public:
    TableValueConstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALUES_SYMBOL();
    std::vector<RowValueExplicitContext *> rowValueExplicit();
    RowValueExplicitContext* rowValueExplicit(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  TableValueConstructorContext* tableValueConstructor();

  class PARSERS_PUBLIC_TYPE ExplicitTableContext : public antlr4::ParserRuleContext {
  public:
    ExplicitTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    TableRefContext *tableRef();

   
  };

  ExplicitTableContext* explicitTable();

  class PARSERS_PUBLIC_TYPE RowValueExplicitContext : public antlr4::ParserRuleContext {
  public:
    RowValueExplicitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROW_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    ValuesContext *values();

   
  };

  RowValueExplicitContext* rowValueExplicit();

  class PARSERS_PUBLIC_TYPE SelectOptionContext : public antlr4::ParserRuleContext {
  public:
    SelectOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QuerySpecOptionContext *querySpecOption();
    antlr4::tree::TerminalNode *SQL_NO_CACHE_SYMBOL();

   
  };

  SelectOptionContext* selectOption();

  class PARSERS_PUBLIC_TYPE LockingClauseListContext : public antlr4::ParserRuleContext {
  public:
    LockingClauseListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LockingClauseContext *> lockingClause();
    LockingClauseContext* lockingClause(size_t i);

   
  };

  LockingClauseListContext* lockingClauseList();

  class PARSERS_PUBLIC_TYPE LockingClauseContext : public antlr4::ParserRuleContext {
  public:
    LockingClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    LockStrenghContext *lockStrengh();
    antlr4::tree::TerminalNode *OF_SYMBOL();
    TableAliasRefListContext *tableAliasRefList();
    LockedRowActionContext *lockedRowAction();
    antlr4::tree::TerminalNode *LOCK_SYMBOL();
    antlr4::tree::TerminalNode *IN_SYMBOL();
    antlr4::tree::TerminalNode *SHARE_SYMBOL();
    antlr4::tree::TerminalNode *MODE_SYMBOL();

   
  };

  LockingClauseContext* lockingClause();

  class PARSERS_PUBLIC_TYPE LockStrenghContext : public antlr4::ParserRuleContext {
  public:
    LockStrenghContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE_SYMBOL();
    antlr4::tree::TerminalNode *SHARE_SYMBOL();

   
  };

  LockStrenghContext* lockStrengh();

  class PARSERS_PUBLIC_TYPE LockedRowActionContext : public antlr4::ParserRuleContext {
  public:
    LockedRowActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SKIP_SYMBOL();
    antlr4::tree::TerminalNode *LOCKED_SYMBOL();
    antlr4::tree::TerminalNode *NOWAIT_SYMBOL();

   
  };

  LockedRowActionContext* lockedRowAction();

  class PARSERS_PUBLIC_TYPE SelectItemListContext : public antlr4::ParserRuleContext {
  public:
    SelectItemListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SelectItemContext *> selectItem();
    SelectItemContext* selectItem(size_t i);
    antlr4::tree::TerminalNode *MULT_OPERATOR();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  SelectItemListContext* selectItemList();

  class PARSERS_PUBLIC_TYPE SelectItemContext : public antlr4::ParserRuleContext {
  public:
    SelectItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableWildContext *tableWild();
    ExprContext *expr();
    SelectAliasContext *selectAlias();

   
  };

  SelectItemContext* selectItem();

  class PARSERS_PUBLIC_TYPE SelectAliasContext : public antlr4::ParserRuleContext {
  public:
    SelectAliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *AS_SYMBOL();

   
  };

  SelectAliasContext* selectAlias();

  class PARSERS_PUBLIC_TYPE WhereClauseContext : public antlr4::ParserRuleContext {
  public:
    WhereClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE_SYMBOL();
    ExprContext *expr();

   
  };

  WhereClauseContext* whereClause();

  class PARSERS_PUBLIC_TYPE TableReferenceContext : public antlr4::ParserRuleContext {
  public:
    TableReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableFactorContext *tableFactor();
    antlr4::tree::TerminalNode *OPEN_CURLY_SYMBOL();
    EscapedTableReferenceContext *escapedTableReference();
    antlr4::tree::TerminalNode *CLOSE_CURLY_SYMBOL();
    std::vector<JoinedTableContext *> joinedTable();
    JoinedTableContext* joinedTable(size_t i);
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OJ_SYMBOL();

   
  };

  TableReferenceContext* tableReference();

  class PARSERS_PUBLIC_TYPE EscapedTableReferenceContext : public antlr4::ParserRuleContext {
  public:
    EscapedTableReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableFactorContext *tableFactor();
    std::vector<JoinedTableContext *> joinedTable();
    JoinedTableContext* joinedTable(size_t i);

   
  };

  EscapedTableReferenceContext* escapedTableReference();

  class PARSERS_PUBLIC_TYPE JoinedTableContext : public antlr4::ParserRuleContext {
  public:
    JoinedTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InnerJoinTypeContext *innerJoinType();
    TableReferenceContext *tableReference();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *USING_SYMBOL();
    IdentifierListWithParenthesesContext *identifierListWithParentheses();
    OuterJoinTypeContext *outerJoinType();
    NaturalJoinTypeContext *naturalJoinType();
    TableFactorContext *tableFactor();

   
  };

  JoinedTableContext* joinedTable();

  class PARSERS_PUBLIC_TYPE NaturalJoinTypeContext : public antlr4::ParserRuleContext {
  public:
    NaturalJoinTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NATURAL_SYMBOL();
    antlr4::tree::TerminalNode *JOIN_SYMBOL();
    antlr4::tree::TerminalNode *INNER_SYMBOL();
    antlr4::tree::TerminalNode *LEFT_SYMBOL();
    antlr4::tree::TerminalNode *RIGHT_SYMBOL();
    antlr4::tree::TerminalNode *OUTER_SYMBOL();

   
  };

  NaturalJoinTypeContext* naturalJoinType();

  class PARSERS_PUBLIC_TYPE InnerJoinTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    InnerJoinTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JOIN_SYMBOL();
    antlr4::tree::TerminalNode *INNER_SYMBOL();
    antlr4::tree::TerminalNode *CROSS_SYMBOL();
    antlr4::tree::TerminalNode *STRAIGHT_JOIN_SYMBOL();

   
  };

  InnerJoinTypeContext* innerJoinType();

  class PARSERS_PUBLIC_TYPE OuterJoinTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    OuterJoinTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JOIN_SYMBOL();
    antlr4::tree::TerminalNode *LEFT_SYMBOL();
    antlr4::tree::TerminalNode *RIGHT_SYMBOL();
    antlr4::tree::TerminalNode *OUTER_SYMBOL();

   
  };

  OuterJoinTypeContext* outerJoinType();

  class PARSERS_PUBLIC_TYPE TableFactorContext : public antlr4::ParserRuleContext {
  public:
    TableFactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleTableContext *singleTable();
    SingleTableParensContext *singleTableParens();
    DerivedTableContext *derivedTable();
    TableReferenceListParensContext *tableReferenceListParens();
    TableFunctionContext *tableFunction();

   
  };

  TableFactorContext* tableFactor();

  class PARSERS_PUBLIC_TYPE SingleTableContext : public antlr4::ParserRuleContext {
  public:
    SingleTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefContext *tableRef();
    UsePartitionContext *usePartition();
    TableAliasContext *tableAlias();
    IndexHintListContext *indexHintList();

   
  };

  SingleTableContext* singleTable();

  class PARSERS_PUBLIC_TYPE SingleTableParensContext : public antlr4::ParserRuleContext {
  public:
    SingleTableParensContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    SingleTableContext *singleTable();
    SingleTableParensContext *singleTableParens();

   
  };

  SingleTableParensContext* singleTableParens();

  class PARSERS_PUBLIC_TYPE DerivedTableContext : public antlr4::ParserRuleContext {
  public:
    DerivedTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubqueryContext *subquery();
    TableAliasContext *tableAlias();
    ColumnInternalRefListContext *columnInternalRefList();
    antlr4::tree::TerminalNode *LATERAL_SYMBOL();

   
  };

  DerivedTableContext* derivedTable();

  class PARSERS_PUBLIC_TYPE TableReferenceListParensContext : public antlr4::ParserRuleContext {
  public:
    TableReferenceListParensContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    TableReferenceListContext *tableReferenceList();
    TableReferenceListParensContext *tableReferenceListParens();

   
  };

  TableReferenceListParensContext* tableReferenceListParens();

  class PARSERS_PUBLIC_TYPE TableFunctionContext : public antlr4::ParserRuleContext {
  public:
    TableFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JSON_TABLE_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *COMMA_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    ColumnsClauseContext *columnsClause();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    TableAliasContext *tableAlias();

   
  };

  TableFunctionContext* tableFunction();

  class PARSERS_PUBLIC_TYPE ColumnsClauseContext : public antlr4::ParserRuleContext {
  public:
    ColumnsClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLUMNS_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<JtColumnContext *> jtColumn();
    JtColumnContext* jtColumn(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  ColumnsClauseContext* columnsClause();

  class PARSERS_PUBLIC_TYPE JtColumnContext : public antlr4::ParserRuleContext {
  public:
    JtColumnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *ORDINALITY_SYMBOL();
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *PATH_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    CollateContext *collate();
    antlr4::tree::TerminalNode *EXISTS_SYMBOL();
    OnEmptyOrErrorJsonTableContext *onEmptyOrErrorJsonTable();
    antlr4::tree::TerminalNode *NESTED_SYMBOL();
    ColumnsClauseContext *columnsClause();

   
  };

  JtColumnContext* jtColumn();

  class PARSERS_PUBLIC_TYPE OnEmptyOrErrorContext : public antlr4::ParserRuleContext {
  public:
    OnEmptyOrErrorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OnEmptyContext *onEmpty();
    OnErrorContext *onError();

   
  };

  OnEmptyOrErrorContext* onEmptyOrError();

  class PARSERS_PUBLIC_TYPE OnEmptyOrErrorJsonTableContext : public antlr4::ParserRuleContext {
  public:
    OnEmptyOrErrorJsonTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OnEmptyOrErrorContext *onEmptyOrError();
    OnErrorContext *onError();
    OnEmptyContext *onEmpty();

   
  };

  OnEmptyOrErrorJsonTableContext* onEmptyOrErrorJsonTable();

  class PARSERS_PUBLIC_TYPE OnEmptyContext : public antlr4::ParserRuleContext {
  public:
    OnEmptyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    JsonOnResponseContext *jsonOnResponse();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    antlr4::tree::TerminalNode *EMPTY_SYMBOL();

   
  };

  OnEmptyContext* onEmpty();

  class PARSERS_PUBLIC_TYPE OnErrorContext : public antlr4::ParserRuleContext {
  public:
    OnErrorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    JsonOnResponseContext *jsonOnResponse();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    antlr4::tree::TerminalNode *ERROR_SYMBOL();

   
  };

  OnErrorContext* onError();

  class PARSERS_PUBLIC_TYPE JsonOnResponseContext : public antlr4::ParserRuleContext {
  public:
    JsonOnResponseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ERROR_SYMBOL();
    antlr4::tree::TerminalNode *NULL_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    TextStringLiteralContext *textStringLiteral();

   
  };

  JsonOnResponseContext* jsonOnResponse();

  class PARSERS_PUBLIC_TYPE UnionOptionContext : public antlr4::ParserRuleContext {
  public:
    UnionOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISTINCT_SYMBOL();
    antlr4::tree::TerminalNode *ALL_SYMBOL();

   
  };

  UnionOptionContext* unionOption();

  class PARSERS_PUBLIC_TYPE TableAliasContext : public antlr4::ParserRuleContext {
  public:
    TableAliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *AS_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

   
  };

  TableAliasContext* tableAlias();

  class PARSERS_PUBLIC_TYPE IndexHintListContext : public antlr4::ParserRuleContext {
  public:
    IndexHintListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IndexHintContext *> indexHint();
    IndexHintContext* indexHint(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  IndexHintListContext* indexHintList();

  class PARSERS_PUBLIC_TYPE IndexHintContext : public antlr4::ParserRuleContext {
  public:
    IndexHintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndexHintTypeContext *indexHintType();
    KeyOrIndexContext *keyOrIndex();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    IndexListContext *indexList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    IndexHintClauseContext *indexHintClause();
    antlr4::tree::TerminalNode *USE_SYMBOL();

   
  };

  IndexHintContext* indexHint();

  class PARSERS_PUBLIC_TYPE IndexHintTypeContext : public antlr4::ParserRuleContext {
  public:
    IndexHintTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FORCE_SYMBOL();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();

   
  };

  IndexHintTypeContext* indexHintType();

  class PARSERS_PUBLIC_TYPE KeyOrIndexContext : public antlr4::ParserRuleContext {
  public:
    KeyOrIndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_SYMBOL();
    antlr4::tree::TerminalNode *INDEX_SYMBOL();

   
  };

  KeyOrIndexContext* keyOrIndex();

  class PARSERS_PUBLIC_TYPE ConstraintKeyTypeContext : public antlr4::ParserRuleContext {
  public:
    ConstraintKeyTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRIMARY_SYMBOL();
    antlr4::tree::TerminalNode *KEY_SYMBOL();
    antlr4::tree::TerminalNode *UNIQUE_SYMBOL();
    KeyOrIndexContext *keyOrIndex();

   
  };

  ConstraintKeyTypeContext* constraintKeyType();

  class PARSERS_PUBLIC_TYPE IndexHintClauseContext : public antlr4::ParserRuleContext {
  public:
    IndexHintClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *JOIN_SYMBOL();
    antlr4::tree::TerminalNode *ORDER_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_SYMBOL();

   
  };

  IndexHintClauseContext* indexHintClause();

  class PARSERS_PUBLIC_TYPE IndexListContext : public antlr4::ParserRuleContext {
  public:
    IndexListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IndexListElementContext *> indexListElement();
    IndexListElementContext* indexListElement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  IndexListContext* indexList();

  class PARSERS_PUBLIC_TYPE IndexListElementContext : public antlr4::ParserRuleContext {
  public:
    IndexListElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *PRIMARY_SYMBOL();

   
  };

  IndexListElementContext* indexListElement();

  class PARSERS_PUBLIC_TYPE UpdateStatementContext : public antlr4::ParserRuleContext {
  public:
    UpdateStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE_SYMBOL();
    TableReferenceListContext *tableReferenceList();
    antlr4::tree::TerminalNode *SET_SYMBOL();
    UpdateListContext *updateList();
    WithClauseContext *withClause();
    antlr4::tree::TerminalNode *LOW_PRIORITY_SYMBOL();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();
    WhereClauseContext *whereClause();
    OrderClauseContext *orderClause();
    SimpleLimitClauseContext *simpleLimitClause();

   
  };

  UpdateStatementContext* updateStatement();

  class PARSERS_PUBLIC_TYPE TransactionOrLockingStatementContext : public antlr4::ParserRuleContext {
  public:
    TransactionOrLockingStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TransactionStatementContext *transactionStatement();
    SavepointStatementContext *savepointStatement();
    LockStatementContext *lockStatement();
    XaStatementContext *xaStatement();

   
  };

  TransactionOrLockingStatementContext* transactionOrLockingStatement();

  class PARSERS_PUBLIC_TYPE TransactionStatementContext : public antlr4::ParserRuleContext {
  public:
    TransactionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START_SYMBOL();
    antlr4::tree::TerminalNode *TRANSACTION_SYMBOL();
    std::vector<StartTransactionOptionListContext *> startTransactionOptionList();
    StartTransactionOptionListContext* startTransactionOptionList(size_t i);
    antlr4::tree::TerminalNode *COMMIT_SYMBOL();
    antlr4::tree::TerminalNode *WORK_SYMBOL();
    antlr4::tree::TerminalNode *AND_SYMBOL();
    antlr4::tree::TerminalNode *CHAIN_SYMBOL();
    antlr4::tree::TerminalNode *RELEASE_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> NO_SYMBOL();
    antlr4::tree::TerminalNode* NO_SYMBOL(size_t i);

   
  };

  TransactionStatementContext* transactionStatement();

  class PARSERS_PUBLIC_TYPE BeginWorkContext : public antlr4::ParserRuleContext {
  public:
    BeginWorkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN_SYMBOL();
    antlr4::tree::TerminalNode *WORK_SYMBOL();

   
  };

  BeginWorkContext* beginWork();

  class PARSERS_PUBLIC_TYPE StartTransactionOptionListContext : public antlr4::ParserRuleContext {
  public:
    StartTransactionOptionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *CONSISTENT_SYMBOL();
    antlr4::tree::TerminalNode *SNAPSHOT_SYMBOL();
    antlr4::tree::TerminalNode *READ_SYMBOL();
    antlr4::tree::TerminalNode *WRITE_SYMBOL();
    antlr4::tree::TerminalNode *ONLY_SYMBOL();

   
  };

  StartTransactionOptionListContext* startTransactionOptionList();

  class PARSERS_PUBLIC_TYPE SavepointStatementContext : public antlr4::ParserRuleContext {
  public:
    SavepointStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SAVEPOINT_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ROLLBACK_SYMBOL();
    antlr4::tree::TerminalNode *TO_SYMBOL();
    antlr4::tree::TerminalNode *WORK_SYMBOL();
    antlr4::tree::TerminalNode *AND_SYMBOL();
    antlr4::tree::TerminalNode *CHAIN_SYMBOL();
    antlr4::tree::TerminalNode *RELEASE_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> NO_SYMBOL();
    antlr4::tree::TerminalNode* NO_SYMBOL(size_t i);

   
  };

  SavepointStatementContext* savepointStatement();

  class PARSERS_PUBLIC_TYPE LockStatementContext : public antlr4::ParserRuleContext {
  public:
    LockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCK_SYMBOL();
    std::vector<LockItemContext *> lockItem();
    LockItemContext* lockItem(size_t i);
    antlr4::tree::TerminalNode *TABLES_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *INSTANCE_SYMBOL();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *BACKUP_SYMBOL();
    antlr4::tree::TerminalNode *UNLOCK_SYMBOL();

   
  };

  LockStatementContext* lockStatement();

  class PARSERS_PUBLIC_TYPE LockItemContext : public antlr4::ParserRuleContext {
  public:
    LockItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefContext *tableRef();
    LockOptionContext *lockOption();
    TableAliasContext *tableAlias();

   
  };

  LockItemContext* lockItem();

  class PARSERS_PUBLIC_TYPE LockOptionContext : public antlr4::ParserRuleContext {
  public:
    LockOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *READ_SYMBOL();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    antlr4::tree::TerminalNode *WRITE_SYMBOL();
    antlr4::tree::TerminalNode *LOW_PRIORITY_SYMBOL();

   
  };

  LockOptionContext* lockOption();

  class PARSERS_PUBLIC_TYPE XaStatementContext : public antlr4::ParserRuleContext {
  public:
    XaStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA_SYMBOL();
    XidContext *xid();
    antlr4::tree::TerminalNode *END_SYMBOL();
    antlr4::tree::TerminalNode *PREPARE_SYMBOL();
    antlr4::tree::TerminalNode *COMMIT_SYMBOL();
    antlr4::tree::TerminalNode *ROLLBACK_SYMBOL();
    antlr4::tree::TerminalNode *RECOVER_SYMBOL();
    antlr4::tree::TerminalNode *START_SYMBOL();
    antlr4::tree::TerminalNode *BEGIN_SYMBOL();
    antlr4::tree::TerminalNode *SUSPEND_SYMBOL();
    antlr4::tree::TerminalNode *ONE_SYMBOL();
    antlr4::tree::TerminalNode *PHASE_SYMBOL();
    XaConvertContext *xaConvert();
    antlr4::tree::TerminalNode *JOIN_SYMBOL();
    antlr4::tree::TerminalNode *RESUME_SYMBOL();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *MIGRATE_SYMBOL();

   
  };

  XaStatementContext* xaStatement();

  class PARSERS_PUBLIC_TYPE XaConvertContext : public antlr4::ParserRuleContext {
  public:
    XaConvertContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONVERT_SYMBOL();
    antlr4::tree::TerminalNode *XID_SYMBOL();

   
  };

  XaConvertContext* xaConvert();

  class PARSERS_PUBLIC_TYPE XidContext : public antlr4::ParserRuleContext {
  public:
    XidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TextStringContext *> textString();
    TextStringContext* textString(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);
    Ulong_numberContext *ulong_number();

   
  };

  XidContext* xid();

  class PARSERS_PUBLIC_TYPE ReplicationStatementContext : public antlr4::ParserRuleContext {
  public:
    ReplicationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PURGE_SYMBOL();
    antlr4::tree::TerminalNode *LOGS_SYMBOL();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SYMBOL();
    antlr4::tree::TerminalNode *TO_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *BEFORE_SYMBOL();
    ExprContext *expr();
    ChangeSourceContext *changeSource();
    antlr4::tree::TerminalNode *RESET_SYMBOL();
    std::vector<ResetOptionContext *> resetOption();
    ResetOptionContext* resetOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *PERSIST_SYMBOL();
    IfExistsContext *ifExists();
    IdentifierContext *identifier();
    StartReplicaStatementContext *startReplicaStatement();
    StopReplicaStatementContext *stopReplicaStatement();
    ChangeReplicationContext *changeReplication();
    ReplicationLoadContext *replicationLoad();
    GroupReplicationContext *groupReplication();

   
  };

  ReplicationStatementContext* replicationStatement();

  class PARSERS_PUBLIC_TYPE ResetOptionContext : public antlr4::ParserRuleContext {
  public:
    ResetOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_SYMBOL();
    SourceResetOptionsContext *sourceResetOptions();
    ReplicaContext *replica();
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    ChannelContext *channel();

   
  };

  ResetOptionContext* resetOption();

  class PARSERS_PUBLIC_TYPE SourceResetOptionsContext : public antlr4::ParserRuleContext {
  public:
    SourceResetOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TO_SYMBOL();
    Real_ulong_numberContext *real_ulong_number();
    Real_ulonglong_numberContext *real_ulonglong_number();

   
  };

  SourceResetOptionsContext* sourceResetOptions();

  class PARSERS_PUBLIC_TYPE ReplicationLoadContext : public antlr4::ParserRuleContext {
  public:
    ReplicationLoadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOAD_SYMBOL();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SYMBOL();
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    TableRefContext *tableRef();

   
  };

  ReplicationLoadContext* replicationLoad();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourceContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATION_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SYMBOL();

   
  };

  ChangeReplicationSourceContext* changeReplicationSource();

  class PARSERS_PUBLIC_TYPE ChangeSourceContext : public antlr4::ParserRuleContext {
  public:
    ChangeSourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHANGE_SYMBOL();
    ChangeReplicationSourceContext *changeReplicationSource();
    antlr4::tree::TerminalNode *TO_SYMBOL();
    SourceDefinitionsContext *sourceDefinitions();
    ChannelContext *channel();

   
  };

  ChangeSourceContext* changeSource();

  class PARSERS_PUBLIC_TYPE SourceDefinitionsContext : public antlr4::ParserRuleContext {
  public:
    SourceDefinitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SourceDefinitionContext *> sourceDefinition();
    SourceDefinitionContext* sourceDefinition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  SourceDefinitionsContext* sourceDefinitions();

  class PARSERS_PUBLIC_TYPE SourceDefinitionContext : public antlr4::ParserRuleContext {
  public:
    SourceDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ChangeReplicationSourceHostContext *changeReplicationSourceHost();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TextStringNoLinebreakContext *textStringNoLinebreak();
    antlr4::tree::TerminalNode *NETWORK_NAMESPACE_SYMBOL();
    ChangeReplicationSourceBindContext *changeReplicationSourceBind();
    ChangeReplicationSourceUserContext *changeReplicationSourceUser();
    ChangeReplicationSourcePasswordContext *changeReplicationSourcePassword();
    ChangeReplicationSourcePortContext *changeReplicationSourcePort();
    Ulong_numberContext *ulong_number();
    ChangeReplicationSourceConnectRetryContext *changeReplicationSourceConnectRetry();
    ChangeReplicationSourceRetryCountContext *changeReplicationSourceRetryCount();
    ChangeReplicationSourceDelayContext *changeReplicationSourceDelay();
    ChangeReplicationSourceSSLContext *changeReplicationSourceSSL();
    ChangeReplicationSourceSSLCAContext *changeReplicationSourceSSLCA();
    ChangeReplicationSourceSSLCApathContext *changeReplicationSourceSSLCApath();
    ChangeReplicationSourceTLSVersionContext *changeReplicationSourceTLSVersion();
    ChangeReplicationSourceSSLCertContext *changeReplicationSourceSSLCert();
    ChangeReplicationSourceTLSCiphersuitesContext *changeReplicationSourceTLSCiphersuites();
    SourceTlsCiphersuitesDefContext *sourceTlsCiphersuitesDef();
    ChangeReplicationSourceSSLCipherContext *changeReplicationSourceSSLCipher();
    ChangeReplicationSourceSSLKeyContext *changeReplicationSourceSSLKey();
    ChangeReplicationSourceSSLVerifyServerCertContext *changeReplicationSourceSSLVerifyServerCert();
    ChangeReplicationSourceSSLCLRContext *changeReplicationSourceSSLCLR();
    TextLiteralContext *textLiteral();
    ChangeReplicationSourceSSLCLRpathContext *changeReplicationSourceSSLCLRpath();
    ChangeReplicationSourcePublicKeyContext *changeReplicationSourcePublicKey();
    ChangeReplicationSourceGetSourcePublicKeyContext *changeReplicationSourceGetSourcePublicKey();
    ChangeReplicationSourceHeartbeatPeriodContext *changeReplicationSourceHeartbeatPeriod();
    antlr4::tree::TerminalNode *IGNORE_SERVER_IDS_SYMBOL();
    ServerIdListContext *serverIdList();
    ChangeReplicationSourceCompressionAlgorithmContext *changeReplicationSourceCompressionAlgorithm();
    TextStringLiteralContext *textStringLiteral();
    ChangeReplicationSourceZstdCompressionLevelContext *changeReplicationSourceZstdCompressionLevel();
    ChangeReplicationSourceAutoPositionContext *changeReplicationSourceAutoPosition();
    antlr4::tree::TerminalNode *PRIVILEGE_CHECKS_USER_SYMBOL();
    PrivilegeCheckDefContext *privilegeCheckDef();
    antlr4::tree::TerminalNode *REQUIRE_ROW_FORMAT_SYMBOL();
    antlr4::tree::TerminalNode *REQUIRE_TABLE_PRIMARY_KEY_CHECK_SYMBOL();
    TablePrimaryKeyCheckDefContext *tablePrimaryKeyCheckDef();
    antlr4::tree::TerminalNode *SOURCE_CONNECTION_AUTO_FAILOVER_SYMBOL();
    Real_ulong_numberContext *real_ulong_number();
    antlr4::tree::TerminalNode *ASSIGN_GTIDS_TO_ANONYMOUS_TRANSACTIONS_SYMBOL();
    AssignGtidsToAnonymousTransactionsDefinitionContext *assignGtidsToAnonymousTransactionsDefinition();
    antlr4::tree::TerminalNode *GTID_ONLY_SYMBOL();
    SourceFileDefContext *sourceFileDef();

   
  };

  SourceDefinitionContext* sourceDefinition();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourceAutoPositionContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceAutoPositionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_AUTO_POSITION_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_AUTO_POSITION_SYMBOL();

   
  };

  ChangeReplicationSourceAutoPositionContext* changeReplicationSourceAutoPosition();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourceHostContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceHostContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_HOST_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_HOST_SYMBOL();

   
  };

  ChangeReplicationSourceHostContext* changeReplicationSourceHost();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourceBindContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceBindContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_BIND_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_BIND_SYMBOL();

   
  };

  ChangeReplicationSourceBindContext* changeReplicationSourceBind();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourceUserContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_USER_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_USER_SYMBOL();

   
  };

  ChangeReplicationSourceUserContext* changeReplicationSourceUser();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourcePasswordContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourcePasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_PASSWORD_SYMBOL();

   
  };

  ChangeReplicationSourcePasswordContext* changeReplicationSourcePassword();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourcePortContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourcePortContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_PORT_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_PORT_SYMBOL();

   
  };

  ChangeReplicationSourcePortContext* changeReplicationSourcePort();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourceConnectRetryContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceConnectRetryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_CONNECT_RETRY_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_CONNECT_RETRY_SYMBOL();

   
  };

  ChangeReplicationSourceConnectRetryContext* changeReplicationSourceConnectRetry();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourceRetryCountContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceRetryCountContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_RETRY_COUNT_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_RETRY_COUNT_SYMBOL();

   
  };

  ChangeReplicationSourceRetryCountContext* changeReplicationSourceRetryCount();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourceDelayContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceDelayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_DELAY_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_DELAY_SYMBOL();

   
  };

  ChangeReplicationSourceDelayContext* changeReplicationSourceDelay();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourceSSLContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceSSLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_SSL_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_SYMBOL();

   
  };

  ChangeReplicationSourceSSLContext* changeReplicationSourceSSL();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourceSSLCAContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceSSLCAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_SSL_CA_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_CA_SYMBOL();

   
  };

  ChangeReplicationSourceSSLCAContext* changeReplicationSourceSSLCA();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourceSSLCApathContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceSSLCApathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_SSL_CAPATH_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_CAPATH_SYMBOL();

   
  };

  ChangeReplicationSourceSSLCApathContext* changeReplicationSourceSSLCApath();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourceSSLCipherContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceSSLCipherContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_SSL_CIPHER_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_CIPHER_SYMBOL();

   
  };

  ChangeReplicationSourceSSLCipherContext* changeReplicationSourceSSLCipher();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourceSSLCLRContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceSSLCLRContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_SSL_CRL_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_CRL_SYMBOL();

   
  };

  ChangeReplicationSourceSSLCLRContext* changeReplicationSourceSSLCLR();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourceSSLCLRpathContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceSSLCLRpathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_SSL_CRLPATH_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_CRLPATH_SYMBOL();

   
  };

  ChangeReplicationSourceSSLCLRpathContext* changeReplicationSourceSSLCLRpath();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourceSSLKeyContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceSSLKeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_SSL_KEY_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_KEY_SYMBOL();

   
  };

  ChangeReplicationSourceSSLKeyContext* changeReplicationSourceSSLKey();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourceSSLVerifyServerCertContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceSSLVerifyServerCertContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_SSL_VERIFY_SERVER_CERT_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_VERIFY_SERVER_CERT_SYMBOL();

   
  };

  ChangeReplicationSourceSSLVerifyServerCertContext* changeReplicationSourceSSLVerifyServerCert();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourceTLSVersionContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceTLSVersionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_TLS_VERSION_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_TLS_VERSION_SYMBOL();

   
  };

  ChangeReplicationSourceTLSVersionContext* changeReplicationSourceTLSVersion();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourceTLSCiphersuitesContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceTLSCiphersuitesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_TLS_CIPHERSUITES_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_TLS_CIPHERSUITES_SYMBOL();

   
  };

  ChangeReplicationSourceTLSCiphersuitesContext* changeReplicationSourceTLSCiphersuites();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourceSSLCertContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceSSLCertContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_SSL_CERT_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_CERT_SYMBOL();

   
  };

  ChangeReplicationSourceSSLCertContext* changeReplicationSourceSSLCert();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourcePublicKeyContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourcePublicKeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_PUBLIC_KEY_PATH_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_PUBLIC_KEY_PATH_SYMBOL();

   
  };

  ChangeReplicationSourcePublicKeyContext* changeReplicationSourcePublicKey();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourceGetSourcePublicKeyContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceGetSourcePublicKeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GET_MASTER_PUBLIC_KEY_SYMBOL();
    antlr4::tree::TerminalNode *GET_SOURCE_PUBLIC_KEY_SYMBOL();

   
  };

  ChangeReplicationSourceGetSourcePublicKeyContext* changeReplicationSourceGetSourcePublicKey();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourceHeartbeatPeriodContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceHeartbeatPeriodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_HEARTBEAT_PERIOD_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_HEARTBEAT_PERIOD_SYMBOL();

   
  };

  ChangeReplicationSourceHeartbeatPeriodContext* changeReplicationSourceHeartbeatPeriod();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourceCompressionAlgorithmContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceCompressionAlgorithmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_COMPRESSION_ALGORITHM_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_COMPRESSION_ALGORITHM_SYMBOL();

   
  };

  ChangeReplicationSourceCompressionAlgorithmContext* changeReplicationSourceCompressionAlgorithm();

  class PARSERS_PUBLIC_TYPE ChangeReplicationSourceZstdCompressionLevelContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceZstdCompressionLevelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_ZSTD_COMPRESSION_LEVEL_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_ZSTD_COMPRESSION_LEVEL_SYMBOL();

   
  };

  ChangeReplicationSourceZstdCompressionLevelContext* changeReplicationSourceZstdCompressionLevel();

  class PARSERS_PUBLIC_TYPE PrivilegeCheckDefContext : public antlr4::ParserRuleContext {
  public:
    PrivilegeCheckDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserIdentifierOrTextContext *userIdentifierOrText();
    antlr4::tree::TerminalNode *NULL_SYMBOL();

   
  };

  PrivilegeCheckDefContext* privilegeCheckDef();

  class PARSERS_PUBLIC_TYPE TablePrimaryKeyCheckDefContext : public antlr4::ParserRuleContext {
  public:
    TablePrimaryKeyCheckDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STREAM_SYMBOL();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    antlr4::tree::TerminalNode *OFF_SYMBOL();

   
  };

  TablePrimaryKeyCheckDefContext* tablePrimaryKeyCheckDef();

  class PARSERS_PUBLIC_TYPE AssignGtidsToAnonymousTransactionsDefinitionContext : public antlr4::ParserRuleContext {
  public:
    AssignGtidsToAnonymousTransactionsDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OFF_SYMBOL();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    TextStringLiteralContext *textStringLiteral();

   
  };

  AssignGtidsToAnonymousTransactionsDefinitionContext* assignGtidsToAnonymousTransactionsDefinition();

  class PARSERS_PUBLIC_TYPE SourceTlsCiphersuitesDefContext : public antlr4::ParserRuleContext {
  public:
    SourceTlsCiphersuitesDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextStringNoLinebreakContext *textStringNoLinebreak();
    antlr4::tree::TerminalNode *NULL_SYMBOL();

   
  };

  SourceTlsCiphersuitesDefContext* sourceTlsCiphersuitesDef();

  class PARSERS_PUBLIC_TYPE SourceFileDefContext : public antlr4::ParserRuleContext {
  public:
    SourceFileDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SourceLogFileContext *sourceLogFile();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TextStringNoLinebreakContext *textStringNoLinebreak();
    SourceLogPosContext *sourceLogPos();
    Ulonglong_numberContext *ulonglong_number();
    antlr4::tree::TerminalNode *RELAY_LOG_FILE_SYMBOL();
    antlr4::tree::TerminalNode *RELAY_LOG_POS_SYMBOL();
    Ulong_numberContext *ulong_number();

   
  };

  SourceFileDefContext* sourceFileDef();

  class PARSERS_PUBLIC_TYPE SourceLogFileContext : public antlr4::ParserRuleContext {
  public:
    SourceLogFileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_LOG_FILE_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_LOG_FILE_SYMBOL();

   
  };

  SourceLogFileContext* sourceLogFile();

  class PARSERS_PUBLIC_TYPE SourceLogPosContext : public antlr4::ParserRuleContext {
  public:
    SourceLogPosContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_LOG_POS_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_LOG_POS_SYMBOL();

   
  };

  SourceLogPosContext* sourceLogPos();

  class PARSERS_PUBLIC_TYPE ServerIdListContext : public antlr4::ParserRuleContext {
  public:
    ServerIdListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<Ulong_numberContext *> ulong_number();
    Ulong_numberContext* ulong_number(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  ServerIdListContext* serverIdList();

  class PARSERS_PUBLIC_TYPE ChangeReplicationContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHANGE_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATION_SYMBOL();
    antlr4::tree::TerminalNode *FILTER_SYMBOL();
    std::vector<FilterDefinitionContext *> filterDefinition();
    FilterDefinitionContext* filterDefinition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);
    ChannelContext *channel();

   
  };

  ChangeReplicationContext* changeReplication();

  class PARSERS_PUBLIC_TYPE FilterDefinitionContext : public antlr4::ParserRuleContext {
  public:
    FilterDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPLICATE_DO_DB_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    FilterDbListContext *filterDbList();
    antlr4::tree::TerminalNode *REPLICATE_IGNORE_DB_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_DO_TABLE_SYMBOL();
    FilterTableListContext *filterTableList();
    antlr4::tree::TerminalNode *REPLICATE_IGNORE_TABLE_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_WILD_DO_TABLE_SYMBOL();
    FilterStringListContext *filterStringList();
    antlr4::tree::TerminalNode *REPLICATE_WILD_IGNORE_TABLE_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_REWRITE_DB_SYMBOL();
    FilterDbPairListContext *filterDbPairList();

   
  };

  FilterDefinitionContext* filterDefinition();

  class PARSERS_PUBLIC_TYPE FilterDbListContext : public antlr4::ParserRuleContext {
  public:
    FilterDbListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SchemaRefContext *> schemaRef();
    SchemaRefContext* schemaRef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  FilterDbListContext* filterDbList();

  class PARSERS_PUBLIC_TYPE FilterTableListContext : public antlr4::ParserRuleContext {
  public:
    FilterTableListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FilterTableRefContext *> filterTableRef();
    FilterTableRefContext* filterTableRef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  FilterTableListContext* filterTableList();

  class PARSERS_PUBLIC_TYPE FilterStringListContext : public antlr4::ParserRuleContext {
  public:
    FilterStringListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FilterWildDbTableStringContext *> filterWildDbTableString();
    FilterWildDbTableStringContext* filterWildDbTableString(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  FilterStringListContext* filterStringList();

  class PARSERS_PUBLIC_TYPE FilterWildDbTableStringContext : public antlr4::ParserRuleContext {
  public:
    FilterWildDbTableStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextStringNoLinebreakContext *textStringNoLinebreak();

   
  };

  FilterWildDbTableStringContext* filterWildDbTableString();

  class PARSERS_PUBLIC_TYPE FilterDbPairListContext : public antlr4::ParserRuleContext {
  public:
    FilterDbPairListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SchemaIdentifierPairContext *> schemaIdentifierPair();
    SchemaIdentifierPairContext* schemaIdentifierPair(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  FilterDbPairListContext* filterDbPairList();

  class PARSERS_PUBLIC_TYPE StartReplicaStatementContext : public antlr4::ParserRuleContext {
  public:
    StartReplicaStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START_SYMBOL();
    ReplicaContext *replica();
    ReplicaThreadOptionsContext *replicaThreadOptions();
    antlr4::tree::TerminalNode *UNTIL_SYMBOL();
    ReplicaUntilContext *replicaUntil();
    UserOptionContext *userOption();
    PasswordOptionContext *passwordOption();
    DefaultAuthOptionContext *defaultAuthOption();
    PluginDirOptionContext *pluginDirOption();
    ChannelContext *channel();

   
  };

  StartReplicaStatementContext* startReplicaStatement();

  class PARSERS_PUBLIC_TYPE StopReplicaStatementContext : public antlr4::ParserRuleContext {
  public:
    StopReplicaStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STOP_SYMBOL();
    ReplicaContext *replica();
    ReplicaThreadOptionsContext *replicaThreadOptions();
    ChannelContext *channel();

   
  };

  StopReplicaStatementContext* stopReplicaStatement();

  class PARSERS_PUBLIC_TYPE ReplicaUntilContext : public antlr4::ParserRuleContext {
  public:
    ReplicaUntilContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SourceFileDefContext *> sourceFileDef();
    SourceFileDefContext* sourceFileDef(size_t i);
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TextStringContext *textString();
    antlr4::tree::TerminalNode *SQL_AFTER_MTS_GAPS_SYMBOL();
    antlr4::tree::TerminalNode *SQL_BEFORE_GTIDS_SYMBOL();
    antlr4::tree::TerminalNode *SQL_AFTER_GTIDS_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  ReplicaUntilContext* replicaUntil();

  class PARSERS_PUBLIC_TYPE UserOptionContext : public antlr4::ParserRuleContext {
  public:
    UserOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USER_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TextStringContext *textString();

   
  };

  UserOptionContext* userOption();

  class PARSERS_PUBLIC_TYPE PasswordOptionContext : public antlr4::ParserRuleContext {
  public:
    PasswordOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TextStringContext *textString();

   
  };

  PasswordOptionContext* passwordOption();

  class PARSERS_PUBLIC_TYPE DefaultAuthOptionContext : public antlr4::ParserRuleContext {
  public:
    DefaultAuthOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT_AUTH_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TextStringContext *textString();

   
  };

  DefaultAuthOptionContext* defaultAuthOption();

  class PARSERS_PUBLIC_TYPE PluginDirOptionContext : public antlr4::ParserRuleContext {
  public:
    PluginDirOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUGIN_DIR_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TextStringContext *textString();

   
  };

  PluginDirOptionContext* pluginDirOption();

  class PARSERS_PUBLIC_TYPE ReplicaThreadOptionsContext : public antlr4::ParserRuleContext {
  public:
    ReplicaThreadOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ReplicaThreadOptionContext *> replicaThreadOption();
    ReplicaThreadOptionContext* replicaThreadOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  ReplicaThreadOptionsContext* replicaThreadOptions();

  class PARSERS_PUBLIC_TYPE ReplicaThreadOptionContext : public antlr4::ParserRuleContext {
  public:
    ReplicaThreadOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SQL_THREAD_SYMBOL();
    antlr4::tree::TerminalNode *RELAY_THREAD_SYMBOL();

   
  };

  ReplicaThreadOptionContext* replicaThreadOption();

  class PARSERS_PUBLIC_TYPE GroupReplicationContext : public antlr4::ParserRuleContext {
  public:
    GroupReplicationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUP_REPLICATION_SYMBOL();
    antlr4::tree::TerminalNode *START_SYMBOL();
    antlr4::tree::TerminalNode *STOP_SYMBOL();
    GroupReplicationStartOptionsContext *groupReplicationStartOptions();

   
  };

  GroupReplicationContext* groupReplication();

  class PARSERS_PUBLIC_TYPE GroupReplicationStartOptionsContext : public antlr4::ParserRuleContext {
  public:
    GroupReplicationStartOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<GroupReplicationStartOptionContext *> groupReplicationStartOption();
    GroupReplicationStartOptionContext* groupReplicationStartOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  GroupReplicationStartOptionsContext* groupReplicationStartOptions();

  class PARSERS_PUBLIC_TYPE GroupReplicationStartOptionContext : public antlr4::ParserRuleContext {
  public:
    GroupReplicationStartOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GroupReplicationUserContext *groupReplicationUser();
    GroupReplicationPasswordContext *groupReplicationPassword();
    GroupReplicationPluginAuthContext *groupReplicationPluginAuth();

   
  };

  GroupReplicationStartOptionContext* groupReplicationStartOption();

  class PARSERS_PUBLIC_TYPE GroupReplicationUserContext : public antlr4::ParserRuleContext {
  public:
    GroupReplicationUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USER_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TextStringNoLinebreakContext *textStringNoLinebreak();

   
  };

  GroupReplicationUserContext* groupReplicationUser();

  class PARSERS_PUBLIC_TYPE GroupReplicationPasswordContext : public antlr4::ParserRuleContext {
  public:
    GroupReplicationPasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TextStringNoLinebreakContext *textStringNoLinebreak();

   
  };

  GroupReplicationPasswordContext* groupReplicationPassword();

  class PARSERS_PUBLIC_TYPE GroupReplicationPluginAuthContext : public antlr4::ParserRuleContext {
  public:
    GroupReplicationPluginAuthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT_AUTH_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TextStringNoLinebreakContext *textStringNoLinebreak();

   
  };

  GroupReplicationPluginAuthContext* groupReplicationPluginAuth();

  class PARSERS_PUBLIC_TYPE ReplicaContext : public antlr4::ParserRuleContext {
  public:
    ReplicaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SLAVE_SYMBOL();
    antlr4::tree::TerminalNode *REPLICA_SYMBOL();

   
  };

  ReplicaContext* replica();

  class PARSERS_PUBLIC_TYPE PreparedStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    PreparedStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    antlr4::tree::TerminalNode *PREPARE_SYMBOL();
    TextLiteralContext *textLiteral();
    UserVariableContext *userVariable();
    ExecuteStatementContext *executeStatement();
    antlr4::tree::TerminalNode *DEALLOCATE_SYMBOL();
    antlr4::tree::TerminalNode *DROP_SYMBOL();

   
  };

  PreparedStatementContext* preparedStatement();

  class PARSERS_PUBLIC_TYPE ExecuteStatementContext : public antlr4::ParserRuleContext {
  public:
    ExecuteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXECUTE_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *USING_SYMBOL();
    ExecuteVarListContext *executeVarList();

   
  };

  ExecuteStatementContext* executeStatement();

  class PARSERS_PUBLIC_TYPE ExecuteVarListContext : public antlr4::ParserRuleContext {
  public:
    ExecuteVarListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UserVariableContext *> userVariable();
    UserVariableContext* userVariable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  ExecuteVarListContext* executeVarList();

  class PARSERS_PUBLIC_TYPE CloneStatementContext : public antlr4::ParserRuleContext {
  public:
    CloneStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLONE_SYMBOL();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    antlr4::tree::TerminalNode *DIRECTORY_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *REMOTE_SYMBOL();
    antlr4::tree::TerminalNode *INSTANCE_SYMBOL();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    UserContext *user();
    antlr4::tree::TerminalNode *COLON_SYMBOL();
    Ulong_numberContext *ulong_number();
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    EqualContext *equal();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATION_SYMBOL();
    DataDirSSLContext *dataDirSSL();

   
  };

  CloneStatementContext* cloneStatement();

  class PARSERS_PUBLIC_TYPE DataDirSSLContext : public antlr4::ParserRuleContext {
  public:
    DataDirSSLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SslContext *ssl();
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    antlr4::tree::TerminalNode *DIRECTORY_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    EqualContext *equal();

   
  };

  DataDirSSLContext* dataDirSSL();

  class PARSERS_PUBLIC_TYPE SslContext : public antlr4::ParserRuleContext {
  public:
    SslContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REQUIRE_SYMBOL();
    antlr4::tree::TerminalNode *SSL_SYMBOL();
    antlr4::tree::TerminalNode *NO_SYMBOL();

   
  };

  SslContext* ssl();

  class PARSERS_PUBLIC_TYPE AccountManagementStatementContext : public antlr4::ParserRuleContext {
  public:
    AccountManagementStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterUserStatementContext *alterUserStatement();
    CreateUserStatementContext *createUserStatement();
    DropUserStatementContext *dropUserStatement();
    GrantStatementContext *grantStatement();
    RenameUserStatementContext *renameUserStatement();
    RevokeStatementContext *revokeStatement();
    SetRoleStatementContext *setRoleStatement();

   
  };

  AccountManagementStatementContext* accountManagementStatement();

  class PARSERS_PUBLIC_TYPE AlterUserStatementContext : public antlr4::ParserRuleContext {
  public:
    AlterUserStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    CreateUserTailContext *createUserTail();
    UserFunctionContext *userFunction();
    UserContext *user();
    IfExistsContext *ifExists();
    CreateUserListContext *createUserList();
    AlterUserListContext *alterUserList();
    antlr4::tree::TerminalNode *DISCARD_SYMBOL();
    antlr4::tree::TerminalNode *OLD_SYMBOL();
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *ROLE_SYMBOL();
    IdentifiedByRandomPasswordContext *identifiedByRandomPassword();
    IdentifiedByPasswordContext *identifiedByPassword();
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    antlr4::tree::TerminalNode *NONE_SYMBOL();
    RoleListContext *roleList();
    ReplacePasswordContext *replacePassword();
    RetainCurrentPasswordContext *retainCurrentPassword();
    UserRegistrationContext *userRegistration();

   
  };

  AlterUserStatementContext* alterUserStatement();

  class PARSERS_PUBLIC_TYPE AlterUserListContext : public antlr4::ParserRuleContext {
  public:
    AlterUserListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AlterUserContext *> alterUser();
    AlterUserContext* alterUser(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  AlterUserListContext* alterUserList();

  class PARSERS_PUBLIC_TYPE AlterUserContext : public antlr4::ParserRuleContext {
  public:
    AlterUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OldAlterUserContext *oldAlterUser();
    UserContext *user();
    IdentifiedByPasswordContext *identifiedByPassword();
    IdentifiedByRandomPasswordContext *identifiedByRandomPassword();
    IdentifiedWithPluginContext *identifiedWithPlugin();
    IdentifiedWithPluginAsAuthContext *identifiedWithPluginAsAuth();
    IdentifiedWithPluginByPasswordContext *identifiedWithPluginByPassword();
    IdentifiedWithPluginByRandomPasswordContext *identifiedWithPluginByRandomPassword();
    std::vector<antlr4::tree::TerminalNode *> ADD_SYMBOL();
    antlr4::tree::TerminalNode* ADD_SYMBOL(size_t i);
    std::vector<FactorContext *> factor();
    FactorContext* factor(size_t i);
    std::vector<IdentificationContext *> identification();
    IdentificationContext* identification(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MODIFY_SYMBOL();
    antlr4::tree::TerminalNode* MODIFY_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DROP_SYMBOL();
    antlr4::tree::TerminalNode* DROP_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *REPLACE_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    RetainCurrentPasswordContext *retainCurrentPassword();
    DiscardOldPasswordContext *discardOldPassword();

   
  };

  AlterUserContext* alterUser();

  class PARSERS_PUBLIC_TYPE OldAlterUserContext : public antlr4::ParserRuleContext {
  public:
    OldAlterUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserContext *user();
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    std::vector<TextStringContext *> textString();
    TextStringContext* textString(size_t i);
    antlr4::tree::TerminalNode *REPLACE_SYMBOL();
    antlr4::tree::TerminalNode *RANDOM_SYMBOL();
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();
    RetainCurrentPasswordContext *retainCurrentPassword();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *AS_SYMBOL();
    TextStringHashContext *textStringHash();
    DiscardOldPasswordContext *discardOldPassword();

   
  };

  OldAlterUserContext* oldAlterUser();

  class PARSERS_PUBLIC_TYPE UserFunctionContext : public antlr4::ParserRuleContext {
  public:
    UserFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USER_SYMBOL();
    ParenthesesContext *parentheses();

   
  };

  UserFunctionContext* userFunction();

  class PARSERS_PUBLIC_TYPE CreateUserStatementContext : public antlr4::ParserRuleContext {
  public:
    CreateUserStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    CreateUserListContext *createUserList();
    CreateUserTailContext *createUserTail();
    IfNotExistsContext *ifNotExists();
    DefaultRoleClauseContext *defaultRoleClause();

   
  };

  CreateUserStatementContext* createUserStatement();

  class PARSERS_PUBLIC_TYPE CreateUserTailContext : public antlr4::ParserRuleContext {
  public:
    CreateUserTailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RequireClauseContext *requireClause();
    ConnectOptionsContext *connectOptions();
    std::vector<AccountLockPasswordExpireOptionsContext *> accountLockPasswordExpireOptions();
    AccountLockPasswordExpireOptionsContext* accountLockPasswordExpireOptions(size_t i);
    UserAttributesContext *userAttributes();

   
  };

  CreateUserTailContext* createUserTail();

  class PARSERS_PUBLIC_TYPE UserAttributesContext : public antlr4::ParserRuleContext {
  public:
    UserAttributesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ATTRIBUTE_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();

   
  };

  UserAttributesContext* userAttributes();

  class PARSERS_PUBLIC_TYPE DefaultRoleClauseContext : public antlr4::ParserRuleContext {
  public:
    DefaultRoleClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *ROLE_SYMBOL();
    RoleListContext *roleList();

   
  };

  DefaultRoleClauseContext* defaultRoleClause();

  class PARSERS_PUBLIC_TYPE RequireClauseContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *option = nullptr;
    RequireClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REQUIRE_SYMBOL();
    RequireListContext *requireList();
    antlr4::tree::TerminalNode *SSL_SYMBOL();
    antlr4::tree::TerminalNode *X509_SYMBOL();
    antlr4::tree::TerminalNode *NONE_SYMBOL();

   
  };

  RequireClauseContext* requireClause();

  class PARSERS_PUBLIC_TYPE ConnectOptionsContext : public antlr4::ParserRuleContext {
  public:
    ConnectOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> MAX_QUERIES_PER_HOUR_SYMBOL();
    antlr4::tree::TerminalNode* MAX_QUERIES_PER_HOUR_SYMBOL(size_t i);
    std::vector<Ulong_numberContext *> ulong_number();
    Ulong_numberContext* ulong_number(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MAX_UPDATES_PER_HOUR_SYMBOL();
    antlr4::tree::TerminalNode* MAX_UPDATES_PER_HOUR_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MAX_CONNECTIONS_PER_HOUR_SYMBOL();
    antlr4::tree::TerminalNode* MAX_CONNECTIONS_PER_HOUR_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MAX_USER_CONNECTIONS_SYMBOL();
    antlr4::tree::TerminalNode* MAX_USER_CONNECTIONS_SYMBOL(size_t i);

   
  };

  ConnectOptionsContext* connectOptions();

  class PARSERS_PUBLIC_TYPE AccountLockPasswordExpireOptionsContext : public antlr4::ParserRuleContext {
  public:
    AccountLockPasswordExpireOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCOUNT_SYMBOL();
    antlr4::tree::TerminalNode *LOCK_SYMBOL();
    antlr4::tree::TerminalNode *UNLOCK_SYMBOL();
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *EXPIRE_SYMBOL();
    antlr4::tree::TerminalNode *HISTORY_SYMBOL();
    antlr4::tree::TerminalNode *REUSE_SYMBOL();
    antlr4::tree::TerminalNode *INTERVAL_SYMBOL();
    antlr4::tree::TerminalNode *REQUIRE_SYMBOL();
    antlr4::tree::TerminalNode *CURRENT_SYMBOL();
    Real_ulong_numberContext *real_ulong_number();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *DAY_SYMBOL();
    antlr4::tree::TerminalNode *NEVER_SYMBOL();
    antlr4::tree::TerminalNode *OPTIONAL_SYMBOL();
    antlr4::tree::TerminalNode *FAILED_LOGIN_ATTEMPTS_SYMBOL();
    antlr4::tree::TerminalNode *PASSWORD_LOCK_TIME_SYMBOL();
    antlr4::tree::TerminalNode *UNBOUNDED_SYMBOL();

   
  };

  AccountLockPasswordExpireOptionsContext* accountLockPasswordExpireOptions();

  class PARSERS_PUBLIC_TYPE UserAttributeContext : public antlr4::ParserRuleContext {
  public:
    UserAttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ATTRIBUTE_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();

   
  };

  UserAttributeContext* userAttribute();

  class PARSERS_PUBLIC_TYPE DropUserStatementContext : public antlr4::ParserRuleContext {
  public:
    DropUserStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    UserListContext *userList();
    IfExistsContext *ifExists();

   
  };

  DropUserStatementContext* dropUserStatement();

  class PARSERS_PUBLIC_TYPE GrantStatementContext : public antlr4::ParserRuleContext {
  public:
    GrantStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> GRANT_SYMBOL();
    antlr4::tree::TerminalNode* GRANT_SYMBOL(size_t i);
    RoleOrPrivilegesListContext *roleOrPrivilegesList();
    antlr4::tree::TerminalNode *TO_SYMBOL();
    UserListContext *userList();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    GrantIdentifierContext *grantIdentifier();
    GrantTargetListContext *grantTargetList();
    antlr4::tree::TerminalNode *PROXY_SYMBOL();
    UserContext *user();
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *ADMIN_SYMBOL();
    antlr4::tree::TerminalNode *OPTION_SYMBOL();
    AclTypeContext *aclType();
    VersionedRequireClauseContext *versionedRequireClause();
    GrantOptionsContext *grantOptions();
    GrantAsContext *grantAs();
    antlr4::tree::TerminalNode *PRIVILEGES_SYMBOL();

   
  };

  GrantStatementContext* grantStatement();

  class PARSERS_PUBLIC_TYPE GrantTargetListContext : public antlr4::ParserRuleContext {
  public:
    GrantTargetListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CreateUserListContext *createUserList();
    UserListContext *userList();

   
  };

  GrantTargetListContext* grantTargetList();

  class PARSERS_PUBLIC_TYPE GrantOptionsContext : public antlr4::ParserRuleContext {
  public:
    GrantOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    std::vector<GrantOptionContext *> grantOption();
    GrantOptionContext* grantOption(size_t i);
    antlr4::tree::TerminalNode *GRANT_SYMBOL();
    antlr4::tree::TerminalNode *OPTION_SYMBOL();

   
  };

  GrantOptionsContext* grantOptions();

  class PARSERS_PUBLIC_TYPE ExceptRoleListContext : public antlr4::ParserRuleContext {
  public:
    ExceptRoleListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXCEPT_SYMBOL();
    RoleListContext *roleList();

   
  };

  ExceptRoleListContext* exceptRoleList();

  class PARSERS_PUBLIC_TYPE WithRolesContext : public antlr4::ParserRuleContext {
  public:
    WithRolesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *ROLE_SYMBOL();
    RoleListContext *roleList();
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    antlr4::tree::TerminalNode *NONE_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    ExceptRoleListContext *exceptRoleList();

   
  };

  WithRolesContext* withRoles();

  class PARSERS_PUBLIC_TYPE GrantAsContext : public antlr4::ParserRuleContext {
  public:
    GrantAsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    WithRolesContext *withRoles();

   
  };

  GrantAsContext* grantAs();

  class PARSERS_PUBLIC_TYPE VersionedRequireClauseContext : public antlr4::ParserRuleContext {
  public:
    VersionedRequireClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RequireClauseContext *requireClause();

   
  };

  VersionedRequireClauseContext* versionedRequireClause();

  class PARSERS_PUBLIC_TYPE RenameUserStatementContext : public antlr4::ParserRuleContext {
  public:
    RenameUserStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RENAME_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    std::vector<UserContext *> user();
    UserContext* user(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TO_SYMBOL();
    antlr4::tree::TerminalNode* TO_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  RenameUserStatementContext* renameUserStatement();

  class PARSERS_PUBLIC_TYPE RevokeStatementContext : public antlr4::ParserRuleContext {
  public:
    RevokeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE_SYMBOL();
    RoleOrPrivilegesListContext *roleOrPrivilegesList();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    UserListContext *userList();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    GrantIdentifierContext *grantIdentifier();
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    antlr4::tree::TerminalNode *PROXY_SYMBOL();
    UserContext *user();
    IfExistsContext *ifExists();
    IgnoreUnknownUserContext *ignoreUnknownUser();
    antlr4::tree::TerminalNode *COMMA_SYMBOL();
    antlr4::tree::TerminalNode *GRANT_SYMBOL();
    antlr4::tree::TerminalNode *OPTION_SYMBOL();
    AclTypeContext *aclType();
    antlr4::tree::TerminalNode *PRIVILEGES_SYMBOL();

   
  };

  RevokeStatementContext* revokeStatement();

  class PARSERS_PUBLIC_TYPE AclTypeContext : public antlr4::ParserRuleContext {
  public:
    AclTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    antlr4::tree::TerminalNode *FUNCTION_SYMBOL();
    antlr4::tree::TerminalNode *PROCEDURE_SYMBOL();

   
  };

  AclTypeContext* aclType();

  class PARSERS_PUBLIC_TYPE RoleOrPrivilegesListContext : public antlr4::ParserRuleContext {
  public:
    RoleOrPrivilegesListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RoleOrPrivilegeContext *> roleOrPrivilege();
    RoleOrPrivilegeContext* roleOrPrivilege(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  RoleOrPrivilegesListContext* roleOrPrivilegesList();

  class PARSERS_PUBLIC_TYPE RoleOrPrivilegeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *object = nullptr;
    RoleOrPrivilegeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RoleIdentifierOrTextContext *roleIdentifierOrText();
    antlr4::tree::TerminalNode *AT_TEXT_SUFFIX();
    antlr4::tree::TerminalNode *AT_SIGN_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    ColumnInternalRefListContext *columnInternalRefList();
    antlr4::tree::TerminalNode *SELECT_SYMBOL();
    antlr4::tree::TerminalNode *INSERT_SYMBOL();
    antlr4::tree::TerminalNode *UPDATE_SYMBOL();
    antlr4::tree::TerminalNode *REFERENCES_SYMBOL();
    antlr4::tree::TerminalNode *DELETE_SYMBOL();
    antlr4::tree::TerminalNode *USAGE_SYMBOL();
    antlr4::tree::TerminalNode *INDEX_SYMBOL();
    antlr4::tree::TerminalNode *DROP_SYMBOL();
    antlr4::tree::TerminalNode *EXECUTE_SYMBOL();
    antlr4::tree::TerminalNode *RELOAD_SYMBOL();
    antlr4::tree::TerminalNode *SHUTDOWN_SYMBOL();
    antlr4::tree::TerminalNode *PROCESS_SYMBOL();
    antlr4::tree::TerminalNode *FILE_SYMBOL();
    antlr4::tree::TerminalNode *PROXY_SYMBOL();
    antlr4::tree::TerminalNode *SUPER_SYMBOL();
    antlr4::tree::TerminalNode *EVENT_SYMBOL();
    antlr4::tree::TerminalNode *TRIGGER_SYMBOL();
    antlr4::tree::TerminalNode *GRANT_SYMBOL();
    antlr4::tree::TerminalNode *OPTION_SYMBOL();
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *DATABASES_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *TEMPORARY_SYMBOL();
    antlr4::tree::TerminalNode *TABLES_SYMBOL();
    antlr4::tree::TerminalNode *ROUTINE_SYMBOL();
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    antlr4::tree::TerminalNode *VIEW_SYMBOL();
    antlr4::tree::TerminalNode *LOCK_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATION_SYMBOL();
    antlr4::tree::TerminalNode *CLIENT_SYMBOL();
    ReplicaContext *replica();
    antlr4::tree::TerminalNode *ALTER_SYMBOL();
    antlr4::tree::TerminalNode *ROLE_SYMBOL();

   
  };

  RoleOrPrivilegeContext* roleOrPrivilege();

  class PARSERS_PUBLIC_TYPE GrantIdentifierContext : public antlr4::ParserRuleContext {
  public:
    GrantIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> MULT_OPERATOR();
    antlr4::tree::TerminalNode* MULT_OPERATOR(size_t i);
    antlr4::tree::TerminalNode *DOT_SYMBOL();
    SchemaRefContext *schemaRef();
    TableRefContext *tableRef();

   
  };

  GrantIdentifierContext* grantIdentifier();

  class PARSERS_PUBLIC_TYPE RequireListContext : public antlr4::ParserRuleContext {
  public:
    RequireListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RequireListElementContext *> requireListElement();
    RequireListElementContext* requireListElement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND_SYMBOL();
    antlr4::tree::TerminalNode* AND_SYMBOL(size_t i);

   
  };

  RequireListContext* requireList();

  class PARSERS_PUBLIC_TYPE RequireListElementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *element = nullptr;
    RequireListElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextStringContext *textString();
    antlr4::tree::TerminalNode *CIPHER_SYMBOL();
    antlr4::tree::TerminalNode *ISSUER_SYMBOL();
    antlr4::tree::TerminalNode *SUBJECT_SYMBOL();

   
  };

  RequireListElementContext* requireListElement();

  class PARSERS_PUBLIC_TYPE GrantOptionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *option = nullptr;
    GrantOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTION_SYMBOL();
    antlr4::tree::TerminalNode *GRANT_SYMBOL();
    Ulong_numberContext *ulong_number();
    antlr4::tree::TerminalNode *MAX_QUERIES_PER_HOUR_SYMBOL();
    antlr4::tree::TerminalNode *MAX_UPDATES_PER_HOUR_SYMBOL();
    antlr4::tree::TerminalNode *MAX_CONNECTIONS_PER_HOUR_SYMBOL();
    antlr4::tree::TerminalNode *MAX_USER_CONNECTIONS_SYMBOL();

   
  };

  GrantOptionContext* grantOption();

  class PARSERS_PUBLIC_TYPE SetRoleStatementContext : public antlr4::ParserRuleContext {
  public:
    SetRoleStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_SYMBOL();
    antlr4::tree::TerminalNode *ROLE_SYMBOL();
    std::vector<RoleListContext *> roleList();
    RoleListContext* roleList(size_t i);
    antlr4::tree::TerminalNode *NONE_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *TO_SYMBOL();
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    antlr4::tree::TerminalNode *EXCEPT_SYMBOL();

   
  };

  SetRoleStatementContext* setRoleStatement();

  class PARSERS_PUBLIC_TYPE RoleListContext : public antlr4::ParserRuleContext {
  public:
    RoleListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RoleContext *> role();
    RoleContext* role(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  RoleListContext* roleList();

  class PARSERS_PUBLIC_TYPE RoleContext : public antlr4::ParserRuleContext {
  public:
    RoleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RoleIdentifierOrTextContext *roleIdentifierOrText();
    UserVariableContext *userVariable();

   
  };

  RoleContext* role();

  class PARSERS_PUBLIC_TYPE TableAdministrationStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    TableAdministrationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    TableRefListContext *tableRefList();
    antlr4::tree::TerminalNode *ANALYZE_SYMBOL();
    NoWriteToBinLogContext *noWriteToBinLog();
    HistogramContext *histogram();
    antlr4::tree::TerminalNode *CHECK_SYMBOL();
    std::vector<CheckOptionContext *> checkOption();
    CheckOptionContext* checkOption(size_t i);
    antlr4::tree::TerminalNode *CHECKSUM_SYMBOL();
    antlr4::tree::TerminalNode *QUICK_SYMBOL();
    antlr4::tree::TerminalNode *EXTENDED_SYMBOL();
    antlr4::tree::TerminalNode *OPTIMIZE_SYMBOL();
    antlr4::tree::TerminalNode *REPAIR_SYMBOL();
    std::vector<RepairTypeContext *> repairType();
    RepairTypeContext* repairType(size_t i);

   
  };

  TableAdministrationStatementContext* tableAdministrationStatement();

  class PARSERS_PUBLIC_TYPE HistogramContext : public antlr4::ParserRuleContext {
  public:
    HistogramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE_SYMBOL();
    antlr4::tree::TerminalNode *HISTOGRAM_SYMBOL();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *INT_NUMBER();
    antlr4::tree::TerminalNode *BUCKETS_SYMBOL();
    antlr4::tree::TerminalNode *USING_SYMBOL();
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *DROP_SYMBOL();

   
  };

  HistogramContext* histogram();

  class PARSERS_PUBLIC_TYPE CheckOptionContext : public antlr4::ParserRuleContext {
  public:
    CheckOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *UPGRADE_SYMBOL();
    antlr4::tree::TerminalNode *QUICK_SYMBOL();
    antlr4::tree::TerminalNode *FAST_SYMBOL();
    antlr4::tree::TerminalNode *MEDIUM_SYMBOL();
    antlr4::tree::TerminalNode *EXTENDED_SYMBOL();
    antlr4::tree::TerminalNode *CHANGED_SYMBOL();

   
  };

  CheckOptionContext* checkOption();

  class PARSERS_PUBLIC_TYPE RepairTypeContext : public antlr4::ParserRuleContext {
  public:
    RepairTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUICK_SYMBOL();
    antlr4::tree::TerminalNode *EXTENDED_SYMBOL();
    antlr4::tree::TerminalNode *USE_FRM_SYMBOL();

   
  };

  RepairTypeContext* repairType();

  class PARSERS_PUBLIC_TYPE InstallUninstallStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *action = nullptr;
    antlr4::Token *type = nullptr;
    InstallUninstallStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SONAME_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *INSTALL_SYMBOL();
    antlr4::tree::TerminalNode *PLUGIN_SYMBOL();
    TextStringLiteralListContext *textStringLiteralList();
    antlr4::tree::TerminalNode *COMPONENT_SYMBOL();
    PluginRefContext *pluginRef();
    antlr4::tree::TerminalNode *UNINSTALL_SYMBOL();
    std::vector<ComponentRefContext *> componentRef();
    ComponentRefContext* componentRef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  InstallUninstallStatementContext* installUninstallStatement();

  class PARSERS_PUBLIC_TYPE SetStatementContext : public antlr4::ParserRuleContext {
  public:
    SetStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_SYMBOL();
    StartOptionValueListContext *startOptionValueList();

   
  };

  SetStatementContext* setStatement();

  class PARSERS_PUBLIC_TYPE StartOptionValueListContext : public antlr4::ParserRuleContext {
  public:
    StartOptionValueListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptionValueNoOptionTypeContext *optionValueNoOptionType();
    OptionValueListContinuedContext *optionValueListContinued();
    antlr4::tree::TerminalNode *TRANSACTION_SYMBOL();
    TransactionCharacteristicsContext *transactionCharacteristics();
    OptionTypeContext *optionType();
    StartOptionValueListFollowingOptionTypeContext *startOptionValueListFollowingOptionType();
    std::vector<antlr4::tree::TerminalNode *> PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode* PASSWORD_SYMBOL(size_t i);
    EqualContext *equal();
    TextStringContext *textString();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    UserContext *user();
    ReplacePasswordContext *replacePassword();
    RetainCurrentPasswordContext *retainCurrentPassword();
    antlr4::tree::TerminalNode *TO_SYMBOL();
    antlr4::tree::TerminalNode *RANDOM_SYMBOL();

   
  };

  StartOptionValueListContext* startOptionValueList();

  class PARSERS_PUBLIC_TYPE TransactionCharacteristicsContext : public antlr4::ParserRuleContext {
  public:
    TransactionCharacteristicsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TransactionAccessModeContext *transactionAccessMode();
    IsolationLevelContext *isolationLevel();
    antlr4::tree::TerminalNode *COMMA_SYMBOL();

   
  };

  TransactionCharacteristicsContext* transactionCharacteristics();

  class PARSERS_PUBLIC_TYPE TransactionAccessModeContext : public antlr4::ParserRuleContext {
  public:
    TransactionAccessModeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *READ_SYMBOL();
    antlr4::tree::TerminalNode *WRITE_SYMBOL();
    antlr4::tree::TerminalNode *ONLY_SYMBOL();

   
  };

  TransactionAccessModeContext* transactionAccessMode();

  class PARSERS_PUBLIC_TYPE IsolationLevelContext : public antlr4::ParserRuleContext {
  public:
    IsolationLevelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ISOLATION_SYMBOL();
    antlr4::tree::TerminalNode *LEVEL_SYMBOL();
    antlr4::tree::TerminalNode *REPEATABLE_SYMBOL();
    antlr4::tree::TerminalNode *READ_SYMBOL();
    antlr4::tree::TerminalNode *SERIALIZABLE_SYMBOL();
    antlr4::tree::TerminalNode *COMMITTED_SYMBOL();
    antlr4::tree::TerminalNode *UNCOMMITTED_SYMBOL();

   
  };

  IsolationLevelContext* isolationLevel();

  class PARSERS_PUBLIC_TYPE OptionValueListContinuedContext : public antlr4::ParserRuleContext {
  public:
    OptionValueListContinuedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);
    std::vector<OptionValueContext *> optionValue();
    OptionValueContext* optionValue(size_t i);

   
  };

  OptionValueListContinuedContext* optionValueListContinued();

  class PARSERS_PUBLIC_TYPE OptionValueNoOptionTypeContext : public antlr4::ParserRuleContext {
  public:
    OptionValueNoOptionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LvalueVariableContext *lvalueVariable();
    EqualContext *equal();
    SetExprOrDefaultContext *setExprOrDefault();
    CharsetClauseContext *charsetClause();
    UserVariableContext *userVariable();
    ExprContext *expr();
    antlr4::tree::TerminalNode *AT_AT_SIGN_SYMBOL();
    SetVarIdentTypeContext *setVarIdentType();
    antlr4::tree::TerminalNode *NAMES_SYMBOL();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    CollateContext *collate();

   
  };

  OptionValueNoOptionTypeContext* optionValueNoOptionType();

  class PARSERS_PUBLIC_TYPE OptionValueContext : public antlr4::ParserRuleContext {
  public:
    OptionValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptionTypeContext *optionType();
    LvalueVariableContext *lvalueVariable();
    EqualContext *equal();
    SetExprOrDefaultContext *setExprOrDefault();
    OptionValueNoOptionTypeContext *optionValueNoOptionType();

   
  };

  OptionValueContext* optionValue();

  class PARSERS_PUBLIC_TYPE SetSystemVariableContext : public antlr4::ParserRuleContext {
  public:
    SetSystemVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT_AT_SIGN_SYMBOL();
    LvalueVariableContext *lvalueVariable();
    SetVarIdentTypeContext *setVarIdentType();

   
  };

  SetSystemVariableContext* setSystemVariable();

  class PARSERS_PUBLIC_TYPE StartOptionValueListFollowingOptionTypeContext : public antlr4::ParserRuleContext {
  public:
    StartOptionValueListFollowingOptionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptionValueFollowingOptionTypeContext *optionValueFollowingOptionType();
    OptionValueListContinuedContext *optionValueListContinued();
    antlr4::tree::TerminalNode *TRANSACTION_SYMBOL();
    TransactionCharacteristicsContext *transactionCharacteristics();

   
  };

  StartOptionValueListFollowingOptionTypeContext* startOptionValueListFollowingOptionType();

  class PARSERS_PUBLIC_TYPE OptionValueFollowingOptionTypeContext : public antlr4::ParserRuleContext {
  public:
    OptionValueFollowingOptionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LvalueVariableContext *lvalueVariable();
    EqualContext *equal();
    SetExprOrDefaultContext *setExprOrDefault();

   
  };

  OptionValueFollowingOptionTypeContext* optionValueFollowingOptionType();

  class PARSERS_PUBLIC_TYPE SetExprOrDefaultContext : public antlr4::ParserRuleContext {
  public:
    SetExprOrDefaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();
    antlr4::tree::TerminalNode *ROW_SYMBOL();
    antlr4::tree::TerminalNode *SYSTEM_SYMBOL();

   
  };

  SetExprOrDefaultContext* setExprOrDefault();

  class PARSERS_PUBLIC_TYPE ShowDatabasesStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowDatabasesStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *DATABASES_SYMBOL();
    LikeOrWhereContext *likeOrWhere();

   
  };

  ShowDatabasesStatementContext* showDatabasesStatement();

  class PARSERS_PUBLIC_TYPE ShowTablesStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *value = nullptr;
    ShowTablesStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *TABLES_SYMBOL();
    ShowCommandTypeContext *showCommandType();
    InDbContext *inDb();
    LikeOrWhereContext *likeOrWhere();

   
  };

  ShowTablesStatementContext* showTablesStatement();

  class PARSERS_PUBLIC_TYPE ShowTriggersStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowTriggersStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *TRIGGERS_SYMBOL();
    antlr4::tree::TerminalNode *FULL_SYMBOL();
    InDbContext *inDb();
    LikeOrWhereContext *likeOrWhere();

   
  };

  ShowTriggersStatementContext* showTriggersStatement();

  class PARSERS_PUBLIC_TYPE ShowEventsStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowEventsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *EVENTS_SYMBOL();
    InDbContext *inDb();
    LikeOrWhereContext *likeOrWhere();

   
  };

  ShowEventsStatementContext* showEventsStatement();

  class PARSERS_PUBLIC_TYPE ShowTableStatusStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowTableStatusStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    antlr4::tree::TerminalNode *STATUS_SYMBOL();
    InDbContext *inDb();
    LikeOrWhereContext *likeOrWhere();

   
  };

  ShowTableStatusStatementContext* showTableStatusStatement();

  class PARSERS_PUBLIC_TYPE ShowOpenTablesStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowOpenTablesStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_SYMBOL();
    antlr4::tree::TerminalNode *TABLES_SYMBOL();
    InDbContext *inDb();
    LikeOrWhereContext *likeOrWhere();

   
  };

  ShowOpenTablesStatementContext* showOpenTablesStatement();

  class PARSERS_PUBLIC_TYPE ShowPluginsStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowPluginsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *PLUGINS_SYMBOL();

   
  };

  ShowPluginsStatementContext* showPluginsStatement();

  class PARSERS_PUBLIC_TYPE ShowEngineLogsStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowEngineLogsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *ENGINE_SYMBOL();
    EngineOrAllContext *engineOrAll();
    antlr4::tree::TerminalNode *LOGS_SYMBOL();

   
  };

  ShowEngineLogsStatementContext* showEngineLogsStatement();

  class PARSERS_PUBLIC_TYPE ShowEngineMutexStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowEngineMutexStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *ENGINE_SYMBOL();
    EngineOrAllContext *engineOrAll();
    antlr4::tree::TerminalNode *MUTEX_SYMBOL();

   
  };

  ShowEngineMutexStatementContext* showEngineMutexStatement();

  class PARSERS_PUBLIC_TYPE ShowEngineStatusStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowEngineStatusStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *ENGINE_SYMBOL();
    EngineOrAllContext *engineOrAll();
    antlr4::tree::TerminalNode *STATUS_SYMBOL();

   
  };

  ShowEngineStatusStatementContext* showEngineStatusStatement();

  class PARSERS_PUBLIC_TYPE ShowColumnsStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowColumnsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *COLUMNS_SYMBOL();
    TableRefContext *tableRef();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    antlr4::tree::TerminalNode *IN_SYMBOL();
    ShowCommandTypeContext *showCommandType();
    InDbContext *inDb();
    LikeOrWhereContext *likeOrWhere();

   
  };

  ShowColumnsStatementContext* showColumnsStatement();

  class PARSERS_PUBLIC_TYPE ShowBinaryLogsStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *value = nullptr;
    ShowBinaryLogsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SYMBOL();
    antlr4::tree::TerminalNode *LOGS_SYMBOL();

   
  };

  ShowBinaryLogsStatementContext* showBinaryLogsStatement();

  class PARSERS_PUBLIC_TYPE ShowReplicasStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowReplicasStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    ReplicaContext *replica();
    antlr4::tree::TerminalNode *HOSTS_SYMBOL();
    antlr4::tree::TerminalNode *REPLICAS_SYMBOL();

   
  };

  ShowReplicasStatementContext* showReplicasStatement();

  class PARSERS_PUBLIC_TYPE ShowBinlogEventsStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowBinlogEventsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *BINLOG_SYMBOL();
    antlr4::tree::TerminalNode *EVENTS_SYMBOL();
    antlr4::tree::TerminalNode *IN_SYMBOL();
    TextStringContext *textString();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    Ulonglong_numberContext *ulonglong_number();
    LimitClauseContext *limitClause();
    ChannelContext *channel();

   
  };

  ShowBinlogEventsStatementContext* showBinlogEventsStatement();

  class PARSERS_PUBLIC_TYPE ShowRelaylogEventsStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowRelaylogEventsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *RELAYLOG_SYMBOL();
    antlr4::tree::TerminalNode *EVENTS_SYMBOL();
    antlr4::tree::TerminalNode *IN_SYMBOL();
    TextStringContext *textString();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    Ulonglong_numberContext *ulonglong_number();
    LimitClauseContext *limitClause();
    ChannelContext *channel();

   
  };

  ShowRelaylogEventsStatementContext* showRelaylogEventsStatement();

  class PARSERS_PUBLIC_TYPE ShowKeysStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowKeysStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    FromOrInContext *fromOrIn();
    TableRefContext *tableRef();
    antlr4::tree::TerminalNode *INDEX_SYMBOL();
    antlr4::tree::TerminalNode *INDEXES_SYMBOL();
    antlr4::tree::TerminalNode *KEYS_SYMBOL();
    antlr4::tree::TerminalNode *EXTENDED_SYMBOL();
    InDbContext *inDb();
    WhereClauseContext *whereClause();

   
  };

  ShowKeysStatementContext* showKeysStatement();

  class PARSERS_PUBLIC_TYPE ShowEnginesStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *value = nullptr;
    ShowEnginesStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *ENGINES_SYMBOL();
    antlr4::tree::TerminalNode *STORAGE_SYMBOL();

   
  };

  ShowEnginesStatementContext* showEnginesStatement();

  class PARSERS_PUBLIC_TYPE ShowCountWarningsStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCountWarningsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *COUNT_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *MULT_OPERATOR();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *WARNINGS_SYMBOL();

   
  };

  ShowCountWarningsStatementContext* showCountWarningsStatement();

  class PARSERS_PUBLIC_TYPE ShowCountErrorsStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCountErrorsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *COUNT_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *MULT_OPERATOR();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *ERRORS_SYMBOL();

   
  };

  ShowCountErrorsStatementContext* showCountErrorsStatement();

  class PARSERS_PUBLIC_TYPE ShowWarningsStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowWarningsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *WARNINGS_SYMBOL();
    LimitClauseContext *limitClause();

   
  };

  ShowWarningsStatementContext* showWarningsStatement();

  class PARSERS_PUBLIC_TYPE ShowErrorsStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowErrorsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *ERRORS_SYMBOL();
    LimitClauseContext *limitClause();

   
  };

  ShowErrorsStatementContext* showErrorsStatement();

  class PARSERS_PUBLIC_TYPE ShowProfilesStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowProfilesStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *PROFILES_SYMBOL();

   
  };

  ShowProfilesStatementContext* showProfilesStatement();

  class PARSERS_PUBLIC_TYPE ShowProfileStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowProfileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *PROFILE_SYMBOL();
    ProfileDefinitionsContext *profileDefinitions();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *QUERY_SYMBOL();
    antlr4::tree::TerminalNode *INT_NUMBER();
    LimitClauseContext *limitClause();

   
  };

  ShowProfileStatementContext* showProfileStatement();

  class PARSERS_PUBLIC_TYPE ShowStatusStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowStatusStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *STATUS_SYMBOL();
    OptionTypeContext *optionType();
    LikeOrWhereContext *likeOrWhere();

   
  };

  ShowStatusStatementContext* showStatusStatement();

  class PARSERS_PUBLIC_TYPE ShowProcessListStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowProcessListStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *PROCESSLIST_SYMBOL();
    antlr4::tree::TerminalNode *FULL_SYMBOL();

   
  };

  ShowProcessListStatementContext* showProcessListStatement();

  class PARSERS_PUBLIC_TYPE ShowVariablesStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowVariablesStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *VARIABLES_SYMBOL();
    OptionTypeContext *optionType();
    LikeOrWhereContext *likeOrWhere();

   
  };

  ShowVariablesStatementContext* showVariablesStatement();

  class PARSERS_PUBLIC_TYPE ShowCharacterSetStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCharacterSetStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    CharsetContext *charset();
    LikeOrWhereContext *likeOrWhere();

   
  };

  ShowCharacterSetStatementContext* showCharacterSetStatement();

  class PARSERS_PUBLIC_TYPE ShowCollationStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCollationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *COLLATION_SYMBOL();
    LikeOrWhereContext *likeOrWhere();

   
  };

  ShowCollationStatementContext* showCollationStatement();

  class PARSERS_PUBLIC_TYPE ShowPrivilegesStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowPrivilegesStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *PRIVILEGES_SYMBOL();

   
  };

  ShowPrivilegesStatementContext* showPrivilegesStatement();

  class PARSERS_PUBLIC_TYPE ShowGrantsStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowGrantsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *GRANTS_SYMBOL();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    UserContext *user();
    antlr4::tree::TerminalNode *USING_SYMBOL();
    UserListContext *userList();

   
  };

  ShowGrantsStatementContext* showGrantsStatement();

  class PARSERS_PUBLIC_TYPE ShowCreateDatabaseStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateDatabaseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *DATABASE_SYMBOL();
    SchemaRefContext *schemaRef();
    IfNotExistsContext *ifNotExists();

   
  };

  ShowCreateDatabaseStatementContext* showCreateDatabaseStatement();

  class PARSERS_PUBLIC_TYPE ShowCreateTableStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateTableStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    TableRefContext *tableRef();

   
  };

  ShowCreateTableStatementContext* showCreateTableStatement();

  class PARSERS_PUBLIC_TYPE ShowCreateViewStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateViewStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *VIEW_SYMBOL();
    ViewRefContext *viewRef();

   
  };

  ShowCreateViewStatementContext* showCreateViewStatement();

  class PARSERS_PUBLIC_TYPE ShowMasterStatusStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowMasterStatusStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SYMBOL();
    antlr4::tree::TerminalNode *STATUS_SYMBOL();

   
  };

  ShowMasterStatusStatementContext* showMasterStatusStatement();

  class PARSERS_PUBLIC_TYPE ShowReplicaStatusStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowReplicaStatusStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    ReplicaContext *replica();
    antlr4::tree::TerminalNode *STATUS_SYMBOL();
    ChannelContext *channel();

   
  };

  ShowReplicaStatusStatementContext* showReplicaStatusStatement();

  class PARSERS_PUBLIC_TYPE ShowCreateProcedureStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateProcedureStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *PROCEDURE_SYMBOL();
    ProcedureRefContext *procedureRef();

   
  };

  ShowCreateProcedureStatementContext* showCreateProcedureStatement();

  class PARSERS_PUBLIC_TYPE ShowCreateFunctionStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateFunctionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *FUNCTION_SYMBOL();
    FunctionRefContext *functionRef();

   
  };

  ShowCreateFunctionStatementContext* showCreateFunctionStatement();

  class PARSERS_PUBLIC_TYPE ShowCreateTriggerStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateTriggerStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *TRIGGER_SYMBOL();
    TriggerRefContext *triggerRef();

   
  };

  ShowCreateTriggerStatementContext* showCreateTriggerStatement();

  class PARSERS_PUBLIC_TYPE ShowCreateProcedureStatusStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateProcedureStatusStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *PROCEDURE_SYMBOL();
    antlr4::tree::TerminalNode *STATUS_SYMBOL();
    LikeOrWhereContext *likeOrWhere();

   
  };

  ShowCreateProcedureStatusStatementContext* showCreateProcedureStatusStatement();

  class PARSERS_PUBLIC_TYPE ShowCreateFunctionStatusStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateFunctionStatusStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *FUNCTION_SYMBOL();
    antlr4::tree::TerminalNode *STATUS_SYMBOL();
    LikeOrWhereContext *likeOrWhere();

   
  };

  ShowCreateFunctionStatusStatementContext* showCreateFunctionStatusStatement();

  class PARSERS_PUBLIC_TYPE ShowCreateProcedureCodeStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateProcedureCodeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *PROCEDURE_SYMBOL();
    antlr4::tree::TerminalNode *CODE_SYMBOL();
    ProcedureRefContext *procedureRef();

   
  };

  ShowCreateProcedureCodeStatementContext* showCreateProcedureCodeStatement();

  class PARSERS_PUBLIC_TYPE ShowCreateFunctionCodeStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateFunctionCodeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *FUNCTION_SYMBOL();
    antlr4::tree::TerminalNode *CODE_SYMBOL();
    FunctionRefContext *functionRef();

   
  };

  ShowCreateFunctionCodeStatementContext* showCreateFunctionCodeStatement();

  class PARSERS_PUBLIC_TYPE ShowCreateEventStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateEventStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *EVENT_SYMBOL();
    EventRefContext *eventRef();

   
  };

  ShowCreateEventStatementContext* showCreateEventStatement();

  class PARSERS_PUBLIC_TYPE ShowCreateUserStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateUserStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    UserContext *user();

   
  };

  ShowCreateUserStatementContext* showCreateUserStatement();

  class PARSERS_PUBLIC_TYPE ShowCommandTypeContext : public antlr4::ParserRuleContext {
  public:
    ShowCommandTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FULL_SYMBOL();
    antlr4::tree::TerminalNode *EXTENDED_SYMBOL();

   
  };

  ShowCommandTypeContext* showCommandType();

  class PARSERS_PUBLIC_TYPE EngineOrAllContext : public antlr4::ParserRuleContext {
  public:
    EngineOrAllContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EngineRefContext *engineRef();
    antlr4::tree::TerminalNode *ALL_SYMBOL();

   
  };

  EngineOrAllContext* engineOrAll();

  class PARSERS_PUBLIC_TYPE FromOrInContext : public antlr4::ParserRuleContext {
  public:
    FromOrInContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    antlr4::tree::TerminalNode *IN_SYMBOL();

   
  };

  FromOrInContext* fromOrIn();

  class PARSERS_PUBLIC_TYPE InDbContext : public antlr4::ParserRuleContext {
  public:
    InDbContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FromOrInContext *fromOrIn();
    IdentifierContext *identifier();

   
  };

  InDbContext* inDb();

  class PARSERS_PUBLIC_TYPE ProfileDefinitionsContext : public antlr4::ParserRuleContext {
  public:
    ProfileDefinitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ProfileDefinitionContext *> profileDefinition();
    ProfileDefinitionContext* profileDefinition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  ProfileDefinitionsContext* profileDefinitions();

  class PARSERS_PUBLIC_TYPE ProfileDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ProfileDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BLOCK_SYMBOL();
    antlr4::tree::TerminalNode *IO_SYMBOL();
    antlr4::tree::TerminalNode *CONTEXT_SYMBOL();
    antlr4::tree::TerminalNode *SWITCHES_SYMBOL();
    antlr4::tree::TerminalNode *PAGE_SYMBOL();
    antlr4::tree::TerminalNode *FAULTS_SYMBOL();
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    antlr4::tree::TerminalNode *CPU_SYMBOL();
    antlr4::tree::TerminalNode *IPC_SYMBOL();
    antlr4::tree::TerminalNode *MEMORY_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SYMBOL();
    antlr4::tree::TerminalNode *SWAPS_SYMBOL();

   
  };

  ProfileDefinitionContext* profileDefinition();

  class PARSERS_PUBLIC_TYPE OtherAdministrativeStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    OtherAdministrativeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *BINLOG_SYMBOL();
    antlr4::tree::TerminalNode *INDEX_SYMBOL();
    KeyCacheListOrPartsContext *keyCacheListOrParts();
    antlr4::tree::TerminalNode *IN_SYMBOL();
    antlr4::tree::TerminalNode *CACHE_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *FLUSH_SYMBOL();
    FlushTablesContext *flushTables();
    std::vector<FlushOptionContext *> flushOption();
    FlushOptionContext* flushOption(size_t i);
    NoWriteToBinLogContext *noWriteToBinLog();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);
    ExprContext *expr();
    antlr4::tree::TerminalNode *KILL_SYMBOL();
    antlr4::tree::TerminalNode *CONNECTION_SYMBOL();
    antlr4::tree::TerminalNode *QUERY_SYMBOL();
    antlr4::tree::TerminalNode *INTO_SYMBOL();
    PreloadTailContext *preloadTail();
    antlr4::tree::TerminalNode *LOAD_SYMBOL();
    antlr4::tree::TerminalNode *SHUTDOWN_SYMBOL();

   
  };

  OtherAdministrativeStatementContext* otherAdministrativeStatement();

  class PARSERS_PUBLIC_TYPE KeyCacheListOrPartsContext : public antlr4::ParserRuleContext {
  public:
    KeyCacheListOrPartsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeyCacheListContext *keyCacheList();
    AssignToKeycachePartitionContext *assignToKeycachePartition();

   
  };

  KeyCacheListOrPartsContext* keyCacheListOrParts();

  class PARSERS_PUBLIC_TYPE KeyCacheListContext : public antlr4::ParserRuleContext {
  public:
    KeyCacheListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AssignToKeycacheContext *> assignToKeycache();
    AssignToKeycacheContext* assignToKeycache(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  KeyCacheListContext* keyCacheList();

  class PARSERS_PUBLIC_TYPE AssignToKeycacheContext : public antlr4::ParserRuleContext {
  public:
    AssignToKeycacheContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefContext *tableRef();
    CacheKeyListContext *cacheKeyList();

   
  };

  AssignToKeycacheContext* assignToKeycache();

  class PARSERS_PUBLIC_TYPE AssignToKeycachePartitionContext : public antlr4::ParserRuleContext {
  public:
    AssignToKeycachePartitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefContext *tableRef();
    antlr4::tree::TerminalNode *PARTITION_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    AllOrPartitionNameListContext *allOrPartitionNameList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    CacheKeyListContext *cacheKeyList();

   
  };

  AssignToKeycachePartitionContext* assignToKeycachePartition();

  class PARSERS_PUBLIC_TYPE CacheKeyListContext : public antlr4::ParserRuleContext {
  public:
    CacheKeyListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeyOrIndexContext *keyOrIndex();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    KeyUsageListContext *keyUsageList();

   
  };

  CacheKeyListContext* cacheKeyList();

  class PARSERS_PUBLIC_TYPE KeyUsageElementContext : public antlr4::ParserRuleContext {
  public:
    KeyUsageElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *PRIMARY_SYMBOL();

   
  };

  KeyUsageElementContext* keyUsageElement();

  class PARSERS_PUBLIC_TYPE KeyUsageListContext : public antlr4::ParserRuleContext {
  public:
    KeyUsageListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<KeyUsageElementContext *> keyUsageElement();
    KeyUsageElementContext* keyUsageElement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  KeyUsageListContext* keyUsageList();

  class PARSERS_PUBLIC_TYPE FlushOptionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *option = nullptr;
    FlushOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HOSTS_SYMBOL();
    antlr4::tree::TerminalNode *PRIVILEGES_SYMBOL();
    antlr4::tree::TerminalNode *STATUS_SYMBOL();
    antlr4::tree::TerminalNode *USER_RESOURCES_SYMBOL();
    antlr4::tree::TerminalNode *LOGS_SYMBOL();
    LogTypeContext *logType();
    antlr4::tree::TerminalNode *RELAY_SYMBOL();
    ChannelContext *channel();
    antlr4::tree::TerminalNode *OPTIMIZER_COSTS_SYMBOL();

   
  };

  FlushOptionContext* flushOption();

  class PARSERS_PUBLIC_TYPE LogTypeContext : public antlr4::ParserRuleContext {
  public:
    LogTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY_SYMBOL();
    antlr4::tree::TerminalNode *ENGINE_SYMBOL();
    antlr4::tree::TerminalNode *ERROR_SYMBOL();
    antlr4::tree::TerminalNode *GENERAL_SYMBOL();
    antlr4::tree::TerminalNode *SLOW_SYMBOL();

   
  };

  LogTypeContext* logType();

  class PARSERS_PUBLIC_TYPE FlushTablesContext : public antlr4::ParserRuleContext {
  public:
    FlushTablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLES_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *READ_SYMBOL();
    antlr4::tree::TerminalNode *LOCK_SYMBOL();
    IdentifierListContext *identifierList();
    FlushTablesOptionsContext *flushTablesOptions();

   
  };

  FlushTablesContext* flushTables();

  class PARSERS_PUBLIC_TYPE FlushTablesOptionsContext : public antlr4::ParserRuleContext {
  public:
    FlushTablesOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *EXPORT_SYMBOL();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *READ_SYMBOL();
    antlr4::tree::TerminalNode *LOCK_SYMBOL();

   
  };

  FlushTablesOptionsContext* flushTablesOptions();

  class PARSERS_PUBLIC_TYPE PreloadTailContext : public antlr4::ParserRuleContext {
  public:
    PreloadTailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefContext *tableRef();
    AdminPartitionContext *adminPartition();
    CacheKeyListContext *cacheKeyList();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();
    antlr4::tree::TerminalNode *LEAVES_SYMBOL();
    PreloadListContext *preloadList();

   
  };

  PreloadTailContext* preloadTail();

  class PARSERS_PUBLIC_TYPE PreloadListContext : public antlr4::ParserRuleContext {
  public:
    PreloadListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PreloadKeysContext *> preloadKeys();
    PreloadKeysContext* preloadKeys(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  PreloadListContext* preloadList();

  class PARSERS_PUBLIC_TYPE PreloadKeysContext : public antlr4::ParserRuleContext {
  public:
    PreloadKeysContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefContext *tableRef();
    CacheKeyListContext *cacheKeyList();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();
    antlr4::tree::TerminalNode *LEAVES_SYMBOL();

   
  };

  PreloadKeysContext* preloadKeys();

  class PARSERS_PUBLIC_TYPE AdminPartitionContext : public antlr4::ParserRuleContext {
  public:
    AdminPartitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    AllOrPartitionNameListContext *allOrPartitionNameList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

   
  };

  AdminPartitionContext* adminPartition();

  class PARSERS_PUBLIC_TYPE ResourceGroupManagementContext : public antlr4::ParserRuleContext {
  public:
    ResourceGroupManagementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CreateResourceGroupContext *createResourceGroup();
    AlterResourceGroupContext *alterResourceGroup();
    SetResourceGroupContext *setResourceGroup();
    DropResourceGroupContext *dropResourceGroup();

   
  };

  ResourceGroupManagementContext* resourceGroupManagement();

  class PARSERS_PUBLIC_TYPE CreateResourceGroupContext : public antlr4::ParserRuleContext {
  public:
    CreateResourceGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *RESOURCE_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *TYPE_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    antlr4::tree::TerminalNode *SYSTEM_SYMBOL();
    EqualContext *equal();
    ResourceGroupVcpuListContext *resourceGroupVcpuList();
    ResourceGroupPriorityContext *resourceGroupPriority();
    ResourceGroupEnableDisableContext *resourceGroupEnableDisable();

   
  };

  CreateResourceGroupContext* createResourceGroup();

  class PARSERS_PUBLIC_TYPE ResourceGroupVcpuListContext : public antlr4::ParserRuleContext {
  public:
    ResourceGroupVcpuListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VCPU_SYMBOL();
    std::vector<VcpuNumOrRangeContext *> vcpuNumOrRange();
    VcpuNumOrRangeContext* vcpuNumOrRange(size_t i);
    EqualContext *equal();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  ResourceGroupVcpuListContext* resourceGroupVcpuList();

  class PARSERS_PUBLIC_TYPE VcpuNumOrRangeContext : public antlr4::ParserRuleContext {
  public:
    VcpuNumOrRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> INT_NUMBER();
    antlr4::tree::TerminalNode* INT_NUMBER(size_t i);
    antlr4::tree::TerminalNode *MINUS_OPERATOR();

   
  };

  VcpuNumOrRangeContext* vcpuNumOrRange();

  class PARSERS_PUBLIC_TYPE ResourceGroupPriorityContext : public antlr4::ParserRuleContext {
  public:
    ResourceGroupPriorityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THREAD_PRIORITY_SYMBOL();
    antlr4::tree::TerminalNode *INT_NUMBER();
    EqualContext *equal();

   
  };

  ResourceGroupPriorityContext* resourceGroupPriority();

  class PARSERS_PUBLIC_TYPE ResourceGroupEnableDisableContext : public antlr4::ParserRuleContext {
  public:
    ResourceGroupEnableDisableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENABLE_SYMBOL();
    antlr4::tree::TerminalNode *DISABLE_SYMBOL();

   
  };

  ResourceGroupEnableDisableContext* resourceGroupEnableDisable();

  class PARSERS_PUBLIC_TYPE AlterResourceGroupContext : public antlr4::ParserRuleContext {
  public:
    AlterResourceGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_SYMBOL();
    antlr4::tree::TerminalNode *RESOURCE_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_SYMBOL();
    ResourceGroupRefContext *resourceGroupRef();
    ResourceGroupVcpuListContext *resourceGroupVcpuList();
    ResourceGroupPriorityContext *resourceGroupPriority();
    ResourceGroupEnableDisableContext *resourceGroupEnableDisable();
    antlr4::tree::TerminalNode *FORCE_SYMBOL();

   
  };

  AlterResourceGroupContext* alterResourceGroup();

  class PARSERS_PUBLIC_TYPE SetResourceGroupContext : public antlr4::ParserRuleContext {
  public:
    SetResourceGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_SYMBOL();
    antlr4::tree::TerminalNode *RESOURCE_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    ThreadIdListContext *threadIdList();

   
  };

  SetResourceGroupContext* setResourceGroup();

  class PARSERS_PUBLIC_TYPE ThreadIdListContext : public antlr4::ParserRuleContext {
  public:
    ThreadIdListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Real_ulong_numberContext *> real_ulong_number();
    Real_ulong_numberContext* real_ulong_number(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  ThreadIdListContext* threadIdList();

  class PARSERS_PUBLIC_TYPE DropResourceGroupContext : public antlr4::ParserRuleContext {
  public:
    DropResourceGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_SYMBOL();
    antlr4::tree::TerminalNode *RESOURCE_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_SYMBOL();
    ResourceGroupRefContext *resourceGroupRef();
    antlr4::tree::TerminalNode *FORCE_SYMBOL();

   
  };

  DropResourceGroupContext* dropResourceGroup();

  class PARSERS_PUBLIC_TYPE UtilityStatementContext : public antlr4::ParserRuleContext {
  public:
    UtilityStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DescribeStatementContext *describeStatement();
    ExplainStatementContext *explainStatement();
    HelpCommandContext *helpCommand();
    UseCommandContext *useCommand();
    RestartServerContext *restartServer();

   
  };

  UtilityStatementContext* utilityStatement();

  class PARSERS_PUBLIC_TYPE DescribeStatementContext : public antlr4::ParserRuleContext {
  public:
    DescribeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefContext *tableRef();
    antlr4::tree::TerminalNode *EXPLAIN_SYMBOL();
    antlr4::tree::TerminalNode *DESCRIBE_SYMBOL();
    antlr4::tree::TerminalNode *DESC_SYMBOL();
    TextStringContext *textString();
    ColumnRefContext *columnRef();

   
  };

  DescribeStatementContext* describeStatement();

  class PARSERS_PUBLIC_TYPE ExplainStatementContext : public antlr4::ParserRuleContext {
  public:
    ExplainStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExplainableStatementContext *explainableStatement();
    antlr4::tree::TerminalNode *EXPLAIN_SYMBOL();
    antlr4::tree::TerminalNode *DESCRIBE_SYMBOL();
    antlr4::tree::TerminalNode *DESC_SYMBOL();
    antlr4::tree::TerminalNode *EXTENDED_SYMBOL();
    antlr4::tree::TerminalNode *FORMAT_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *ANALYZE_SYMBOL();

   
  };

  ExplainStatementContext* explainStatement();

  class PARSERS_PUBLIC_TYPE ExplainableStatementContext : public antlr4::ParserRuleContext {
  public:
    ExplainableStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectStatementContext *selectStatement();
    DeleteStatementContext *deleteStatement();
    InsertStatementContext *insertStatement();
    ReplaceStatementContext *replaceStatement();
    UpdateStatementContext *updateStatement();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *CONNECTION_SYMBOL();
    Real_ulong_numberContext *real_ulong_number();

   
  };

  ExplainableStatementContext* explainableStatement();

  class PARSERS_PUBLIC_TYPE HelpCommandContext : public antlr4::ParserRuleContext {
  public:
    HelpCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HELP_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();

   
  };

  HelpCommandContext* helpCommand();

  class PARSERS_PUBLIC_TYPE UseCommandContext : public antlr4::ParserRuleContext {
  public:
    UseCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE_SYMBOL();
    SchemaRefContext *schemaRef();

   
  };

  UseCommandContext* useCommand();

  class PARSERS_PUBLIC_TYPE RestartServerContext : public antlr4::ParserRuleContext {
  public:
    RestartServerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESTART_SYMBOL();

   
  };

  RestartServerContext* restartServer();

  class PARSERS_PUBLIC_TYPE ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class PARSERS_PUBLIC_TYPE ExprOrContext : public ExprContext {
  public:
    ExprOrContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *OR_SYMBOL();
    antlr4::tree::TerminalNode *LOGICAL_OR_OPERATOR();
  };

  class PARSERS_PUBLIC_TYPE ExprNotContext : public ExprContext {
  public:
    ExprNotContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NOT_SYMBOL();
    ExprContext *expr();
  };

  class PARSERS_PUBLIC_TYPE ExprIsContext : public ExprContext {
  public:
    ExprIsContext(ExprContext *ctx);

    antlr4::Token *type = nullptr;
    BoolPriContext *boolPri();
    antlr4::tree::TerminalNode *IS_SYMBOL();
    antlr4::tree::TerminalNode *TRUE_SYMBOL();
    antlr4::tree::TerminalNode *FALSE_SYMBOL();
    antlr4::tree::TerminalNode *UNKNOWN_SYMBOL();
    NotRuleContext *notRule();
  };

  class PARSERS_PUBLIC_TYPE ExprAndContext : public ExprContext {
  public:
    ExprAndContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *AND_SYMBOL();
    antlr4::tree::TerminalNode *LOGICAL_AND_OPERATOR();
  };

  class PARSERS_PUBLIC_TYPE ExprXorContext : public ExprContext {
  public:
    ExprXorContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *XOR_SYMBOL();
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class PARSERS_PUBLIC_TYPE BoolPriContext : public antlr4::ParserRuleContext {
  public:
    BoolPriContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    BoolPriContext() = default;
    void copyFrom(BoolPriContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class PARSERS_PUBLIC_TYPE PrimaryExprPredicateContext : public BoolPriContext {
  public:
    PrimaryExprPredicateContext(BoolPriContext *ctx);

    PredicateContext *predicate();
  };

  class PARSERS_PUBLIC_TYPE PrimaryExprCompareContext : public BoolPriContext {
  public:
    PrimaryExprCompareContext(BoolPriContext *ctx);

    BoolPriContext *boolPri();
    CompOpContext *compOp();
    PredicateContext *predicate();
  };

  class PARSERS_PUBLIC_TYPE PrimaryExprAllAnyContext : public BoolPriContext {
  public:
    PrimaryExprAllAnyContext(BoolPriContext *ctx);

    BoolPriContext *boolPri();
    CompOpContext *compOp();
    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    antlr4::tree::TerminalNode *ANY_SYMBOL();
  };

  class PARSERS_PUBLIC_TYPE PrimaryExprIsNullContext : public BoolPriContext {
  public:
    PrimaryExprIsNullContext(BoolPriContext *ctx);

    BoolPriContext *boolPri();
    antlr4::tree::TerminalNode *IS_SYMBOL();
    antlr4::tree::TerminalNode *NULL_SYMBOL();
    NotRuleContext *notRule();
  };

  BoolPriContext* boolPri();
  BoolPriContext* boolPri(int precedence);
  class PARSERS_PUBLIC_TYPE CompOpContext : public antlr4::ParserRuleContext {
  public:
    CompOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *NULL_SAFE_EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *GREATER_OR_EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *GREATER_THAN_OPERATOR();
    antlr4::tree::TerminalNode *LESS_OR_EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *LESS_THAN_OPERATOR();
    antlr4::tree::TerminalNode *NOT_EQUAL_OPERATOR();

   
  };

  CompOpContext* compOp();

  class PARSERS_PUBLIC_TYPE PredicateContext : public antlr4::ParserRuleContext {
  public:
    PredicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BitExprContext *> bitExpr();
    BitExprContext* bitExpr(size_t i);
    PredicateOperationsContext *predicateOperations();
    antlr4::tree::TerminalNode *MEMBER_SYMBOL();
    SimpleExprWithParenthesesContext *simpleExprWithParentheses();
    antlr4::tree::TerminalNode *SOUNDS_SYMBOL();
    antlr4::tree::TerminalNode *LIKE_SYMBOL();
    NotRuleContext *notRule();
    antlr4::tree::TerminalNode *OF_SYMBOL();

   
  };

  PredicateContext* predicate();

  class PARSERS_PUBLIC_TYPE PredicateOperationsContext : public antlr4::ParserRuleContext {
  public:
    PredicateOperationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PredicateOperationsContext() = default;
    void copyFrom(PredicateOperationsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class PARSERS_PUBLIC_TYPE PredicateExprRegexContext : public PredicateOperationsContext {
  public:
    PredicateExprRegexContext(PredicateOperationsContext *ctx);

    antlr4::tree::TerminalNode *REGEXP_SYMBOL();
    BitExprContext *bitExpr();
  };

  class PARSERS_PUBLIC_TYPE PredicateExprBetweenContext : public PredicateOperationsContext {
  public:
    PredicateExprBetweenContext(PredicateOperationsContext *ctx);

    antlr4::tree::TerminalNode *BETWEEN_SYMBOL();
    BitExprContext *bitExpr();
    antlr4::tree::TerminalNode *AND_SYMBOL();
    PredicateContext *predicate();
  };

  class PARSERS_PUBLIC_TYPE PredicateExprInContext : public PredicateOperationsContext {
  public:
    PredicateExprInContext(PredicateOperationsContext *ctx);

    antlr4::tree::TerminalNode *IN_SYMBOL();
    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprListContext *exprList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
  };

  class PARSERS_PUBLIC_TYPE PredicateExprLikeContext : public PredicateOperationsContext {
  public:
    PredicateExprLikeContext(PredicateOperationsContext *ctx);

    antlr4::tree::TerminalNode *LIKE_SYMBOL();
    std::vector<SimpleExprContext *> simpleExpr();
    SimpleExprContext* simpleExpr(size_t i);
    antlr4::tree::TerminalNode *ESCAPE_SYMBOL();
  };

  PredicateOperationsContext* predicateOperations();

  class PARSERS_PUBLIC_TYPE BitExprContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    BitExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleExprContext *simpleExpr();
    std::vector<BitExprContext *> bitExpr();
    BitExprContext* bitExpr(size_t i);
    antlr4::tree::TerminalNode *BITWISE_XOR_OPERATOR();
    antlr4::tree::TerminalNode *MULT_OPERATOR();
    antlr4::tree::TerminalNode *DIV_OPERATOR();
    antlr4::tree::TerminalNode *MOD_OPERATOR();
    antlr4::tree::TerminalNode *DIV_SYMBOL();
    antlr4::tree::TerminalNode *MOD_SYMBOL();
    antlr4::tree::TerminalNode *PLUS_OPERATOR();
    antlr4::tree::TerminalNode *MINUS_OPERATOR();
    antlr4::tree::TerminalNode *SHIFT_LEFT_OPERATOR();
    antlr4::tree::TerminalNode *SHIFT_RIGHT_OPERATOR();
    antlr4::tree::TerminalNode *BITWISE_AND_OPERATOR();
    antlr4::tree::TerminalNode *BITWISE_OR_OPERATOR();
    antlr4::tree::TerminalNode *INTERVAL_SYMBOL();
    ExprContext *expr();
    IntervalContext *interval();

   
  };

  BitExprContext* bitExpr();
  BitExprContext* bitExpr(int precedence);
  class PARSERS_PUBLIC_TYPE SimpleExprContext : public antlr4::ParserRuleContext {
  public:
    SimpleExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SimpleExprContext() = default;
    void copyFrom(SimpleExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class PARSERS_PUBLIC_TYPE SimpleExprConvertContext : public SimpleExprContext {
  public:
    SimpleExprConvertContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *CONVERT_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *COMMA_SYMBOL();
    CastTypeContext *castType();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
  };

  class PARSERS_PUBLIC_TYPE SimpleExprCastContext : public SimpleExprContext {
  public:
    SimpleExprCastContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *CAST_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *AS_SYMBOL();
    CastTypeContext *castType();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *AT_SYMBOL();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    ArrayCastContext *arrayCast();
  };

  class PARSERS_PUBLIC_TYPE SimpleExprUnaryContext : public SimpleExprContext {
  public:
    SimpleExprUnaryContext(SimpleExprContext *ctx);

    antlr4::Token *op = nullptr;
    SimpleExprContext *simpleExpr();
    antlr4::tree::TerminalNode *PLUS_OPERATOR();
    antlr4::tree::TerminalNode *MINUS_OPERATOR();
    antlr4::tree::TerminalNode *BITWISE_NOT_OPERATOR();
  };

  class PARSERS_PUBLIC_TYPE SimpleExpressionRValueContext : public SimpleExprContext {
  public:
    SimpleExpressionRValueContext(SimpleExprContext *ctx);

    RvalueSystemOrUserVariableContext *rvalueSystemOrUserVariable();
  };

  class PARSERS_PUBLIC_TYPE SimpleExprOdbcContext : public SimpleExprContext {
  public:
    SimpleExprOdbcContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *OPEN_CURLY_SYMBOL();
    IdentifierContext *identifier();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CLOSE_CURLY_SYMBOL();
  };

  class PARSERS_PUBLIC_TYPE SimpleExprRuntimeFunctionContext : public SimpleExprContext {
  public:
    SimpleExprRuntimeFunctionContext(SimpleExprContext *ctx);

    RuntimeFunctionCallContext *runtimeFunctionCall();
  };

  class PARSERS_PUBLIC_TYPE SimpleExprFunctionContext : public SimpleExprContext {
  public:
    SimpleExprFunctionContext(SimpleExprContext *ctx);

    FunctionCallContext *functionCall();
  };

  class PARSERS_PUBLIC_TYPE SimpleExprCollateContext : public SimpleExprContext {
  public:
    SimpleExprCollateContext(SimpleExprContext *ctx);

    SimpleExprContext *simpleExpr();
    antlr4::tree::TerminalNode *COLLATE_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
  };

  class PARSERS_PUBLIC_TYPE SimpleExprMatchContext : public SimpleExprContext {
  public:
    SimpleExprMatchContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *MATCH_SYMBOL();
    IdentListArgContext *identListArg();
    antlr4::tree::TerminalNode *AGAINST_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    BitExprContext *bitExpr();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    FulltextOptionsContext *fulltextOptions();
  };

  class PARSERS_PUBLIC_TYPE SimpleExprWindowingFunctionContext : public SimpleExprContext {
  public:
    SimpleExprWindowingFunctionContext(SimpleExprContext *ctx);

    WindowFunctionCallContext *windowFunctionCall();
  };

  class PARSERS_PUBLIC_TYPE SimpleExprBinaryContext : public SimpleExprContext {
  public:
    SimpleExprBinaryContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *BINARY_SYMBOL();
    SimpleExprContext *simpleExpr();
  };

  class PARSERS_PUBLIC_TYPE SimpleExprColumnRefContext : public SimpleExprContext {
  public:
    SimpleExprColumnRefContext(SimpleExprContext *ctx);

    ColumnRefContext *columnRef();
    JsonOperatorContext *jsonOperator();
  };

  class PARSERS_PUBLIC_TYPE SimpleExprParamMarkerContext : public SimpleExprContext {
  public:
    SimpleExprParamMarkerContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *PARAM_MARKER();
  };

  class PARSERS_PUBLIC_TYPE SimpleExprSumContext : public SimpleExprContext {
  public:
    SimpleExprSumContext(SimpleExprContext *ctx);

    SumExprContext *sumExpr();
  };

  class PARSERS_PUBLIC_TYPE SimpleExprCastTimeContext : public SimpleExprContext {
  public:
    SimpleExprCastTimeContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *CAST_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *AT_SYMBOL();
    antlr4::tree::TerminalNode *TIME_SYMBOL();
    antlr4::tree::TerminalNode *ZONE_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *AS_SYMBOL();
    antlr4::tree::TerminalNode *DATETIME_SYMBOL();
    TypeDatetimePrecisionContext *typeDatetimePrecision();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *INTERVAL_SYMBOL();
  };

  class PARSERS_PUBLIC_TYPE SimpleExprConvertUsingContext : public SimpleExprContext {
  public:
    SimpleExprConvertUsingContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *CONVERT_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *USING_SYMBOL();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
  };

  class PARSERS_PUBLIC_TYPE SimpleExprSubQueryContext : public SimpleExprContext {
  public:
    SimpleExprSubQueryContext(SimpleExprContext *ctx);

    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *EXISTS_SYMBOL();
  };

  class PARSERS_PUBLIC_TYPE SimpleExprGroupingOperationContext : public SimpleExprContext {
  public:
    SimpleExprGroupingOperationContext(SimpleExprContext *ctx);

    GroupingOperationContext *groupingOperation();
  };

  class PARSERS_PUBLIC_TYPE SimpleExprNotContext : public SimpleExprContext {
  public:
    SimpleExprNotContext(SimpleExprContext *ctx);

    Not2RuleContext *not2Rule();
    SimpleExprContext *simpleExpr();
  };

  class PARSERS_PUBLIC_TYPE SimpleExprValuesContext : public SimpleExprContext {
  public:
    SimpleExprValuesContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *VALUES_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    SimpleIdentifierContext *simpleIdentifier();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
  };

  class PARSERS_PUBLIC_TYPE SimpleExprUserVariableAssignmentContext : public SimpleExprContext {
  public:
    SimpleExprUserVariableAssignmentContext(SimpleExprContext *ctx);

    InExpressionUserVariableAssignmentContext *inExpressionUserVariableAssignment();
  };

  class PARSERS_PUBLIC_TYPE SimpleExprDefaultContext : public SimpleExprContext {
  public:
    SimpleExprDefaultContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    SimpleIdentifierContext *simpleIdentifier();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
  };

  class PARSERS_PUBLIC_TYPE SimpleExprListContext : public SimpleExprContext {
  public:
    SimpleExprListContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprListContext *exprList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *ROW_SYMBOL();
  };

  class PARSERS_PUBLIC_TYPE SimpleExprIntervalContext : public SimpleExprContext {
  public:
    SimpleExprIntervalContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *INTERVAL_SYMBOL();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    IntervalContext *interval();
    antlr4::tree::TerminalNode *PLUS_OPERATOR();
  };

  class PARSERS_PUBLIC_TYPE SimpleExprCaseContext : public SimpleExprContext {
  public:
    SimpleExprCaseContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *CASE_SYMBOL();
    antlr4::tree::TerminalNode *END_SYMBOL();
    ExprContext *expr();
    std::vector<WhenExpressionContext *> whenExpression();
    WhenExpressionContext* whenExpression(size_t i);
    std::vector<ThenExpressionContext *> thenExpression();
    ThenExpressionContext* thenExpression(size_t i);
    ElseExpressionContext *elseExpression();
  };

  class PARSERS_PUBLIC_TYPE SimpleExprConcatContext : public SimpleExprContext {
  public:
    SimpleExprConcatContext(SimpleExprContext *ctx);

    std::vector<SimpleExprContext *> simpleExpr();
    SimpleExprContext* simpleExpr(size_t i);
    antlr4::tree::TerminalNode *CONCAT_PIPES_SYMBOL();
  };

  class PARSERS_PUBLIC_TYPE SimpleExprLiteralContext : public SimpleExprContext {
  public:
    SimpleExprLiteralContext(SimpleExprContext *ctx);

    LiteralOrNullContext *literalOrNull();
  };

  SimpleExprContext* simpleExpr();
  SimpleExprContext* simpleExpr(int precedence);
  class PARSERS_PUBLIC_TYPE ArrayCastContext : public antlr4::ParserRuleContext {
  public:
    ArrayCastContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARRAY_SYMBOL();

   
  };

  ArrayCastContext* arrayCast();

  class PARSERS_PUBLIC_TYPE JsonOperatorContext : public antlr4::ParserRuleContext {
  public:
    JsonOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JSON_SEPARATOR_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *JSON_UNQUOTED_SEPARATOR_SYMBOL();

   
  };

  JsonOperatorContext* jsonOperator();

  class PARSERS_PUBLIC_TYPE SumExprContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    SumExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    InSumExprContext *inSumExpr();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *AVG_SYMBOL();
    antlr4::tree::TerminalNode *DISTINCT_SYMBOL();
    WindowingClauseContext *windowingClause();
    antlr4::tree::TerminalNode *BIT_AND_SYMBOL();
    antlr4::tree::TerminalNode *BIT_OR_SYMBOL();
    antlr4::tree::TerminalNode *BIT_XOR_SYMBOL();
    JsonFunctionContext *jsonFunction();
    antlr4::tree::TerminalNode *ST_COLLECT_SYMBOL();
    antlr4::tree::TerminalNode *COUNT_SYMBOL();
    antlr4::tree::TerminalNode *MULT_OPERATOR();
    ExprListContext *exprList();
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    antlr4::tree::TerminalNode *MIN_SYMBOL();
    antlr4::tree::TerminalNode *MAX_SYMBOL();
    antlr4::tree::TerminalNode *STD_SYMBOL();
    antlr4::tree::TerminalNode *VARIANCE_SYMBOL();
    antlr4::tree::TerminalNode *STDDEV_SAMP_SYMBOL();
    antlr4::tree::TerminalNode *VAR_SAMP_SYMBOL();
    antlr4::tree::TerminalNode *SUM_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_CONCAT_SYMBOL();
    OrderClauseContext *orderClause();
    antlr4::tree::TerminalNode *SEPARATOR_SYMBOL();
    TextStringContext *textString();

   
  };

  SumExprContext* sumExpr();

  class PARSERS_PUBLIC_TYPE GroupingOperationContext : public antlr4::ParserRuleContext {
  public:
    GroupingOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUPING_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprListContext *exprList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

   
  };

  GroupingOperationContext* groupingOperation();

  class PARSERS_PUBLIC_TYPE WindowFunctionCallContext : public antlr4::ParserRuleContext {
  public:
    WindowFunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParenthesesContext *parentheses();
    WindowingClauseContext *windowingClause();
    antlr4::tree::TerminalNode *ROW_NUMBER_SYMBOL();
    antlr4::tree::TerminalNode *RANK_SYMBOL();
    antlr4::tree::TerminalNode *DENSE_RANK_SYMBOL();
    antlr4::tree::TerminalNode *CUME_DIST_SYMBOL();
    antlr4::tree::TerminalNode *PERCENT_RANK_SYMBOL();
    antlr4::tree::TerminalNode *NTILE_SYMBOL();
    SimpleExprWithParenthesesContext *simpleExprWithParentheses();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    StableIntegerContext *stableInteger();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *LEAD_SYMBOL();
    antlr4::tree::TerminalNode *LAG_SYMBOL();
    LeadLagInfoContext *leadLagInfo();
    NullTreatmentContext *nullTreatment();
    ExprWithParenthesesContext *exprWithParentheses();
    antlr4::tree::TerminalNode *FIRST_VALUE_SYMBOL();
    antlr4::tree::TerminalNode *LAST_VALUE_SYMBOL();
    antlr4::tree::TerminalNode *NTH_VALUE_SYMBOL();
    antlr4::tree::TerminalNode *COMMA_SYMBOL();
    SimpleExprContext *simpleExpr();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    antlr4::tree::TerminalNode *FIRST_SYMBOL();
    antlr4::tree::TerminalNode *LAST_SYMBOL();

   
  };

  WindowFunctionCallContext* windowFunctionCall();

  class PARSERS_PUBLIC_TYPE WindowingClauseContext : public antlr4::ParserRuleContext {
  public:
    WindowingClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OVER_SYMBOL();
    WindowNameContext *windowName();
    WindowSpecContext *windowSpec();

   
  };

  WindowingClauseContext* windowingClause();

  class PARSERS_PUBLIC_TYPE LeadLagInfoContext : public antlr4::ParserRuleContext {
  public:
    LeadLagInfoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);
    StableIntegerContext *stableInteger();
    ExprContext *expr();
    Ulonglong_numberContext *ulonglong_number();
    antlr4::tree::TerminalNode *PARAM_MARKER();

   
  };

  LeadLagInfoContext* leadLagInfo();

  class PARSERS_PUBLIC_TYPE StableIntegerContext : public antlr4::ParserRuleContext {
  public:
    StableIntegerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Int64LiteralContext *int64Literal();
    ParamOrVarContext *paramOrVar();

   
  };

  StableIntegerContext* stableInteger();

  class PARSERS_PUBLIC_TYPE ParamOrVarContext : public antlr4::ParserRuleContext {
  public:
    ParamOrVarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARAM_MARKER();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *AT_SIGN_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();

   
  };

  ParamOrVarContext* paramOrVar();

  class PARSERS_PUBLIC_TYPE NullTreatmentContext : public antlr4::ParserRuleContext {
  public:
    NullTreatmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULLS_SYMBOL();
    antlr4::tree::TerminalNode *RESPECT_SYMBOL();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();

   
  };

  NullTreatmentContext* nullTreatment();

  class PARSERS_PUBLIC_TYPE JsonFunctionContext : public antlr4::ParserRuleContext {
  public:
    JsonFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JSON_ARRAYAGG_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<InSumExprContext *> inSumExpr();
    InSumExprContext* inSumExpr(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    WindowingClauseContext *windowingClause();
    antlr4::tree::TerminalNode *JSON_OBJECTAGG_SYMBOL();
    antlr4::tree::TerminalNode *COMMA_SYMBOL();

   
  };

  JsonFunctionContext* jsonFunction();

  class PARSERS_PUBLIC_TYPE InSumExprContext : public antlr4::ParserRuleContext {
  public:
    InSumExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *ALL_SYMBOL();

   
  };

  InSumExprContext* inSumExpr();

  class PARSERS_PUBLIC_TYPE IdentListArgContext : public antlr4::ParserRuleContext {
  public:
    IdentListArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentListContext *identList();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

   
  };

  IdentListArgContext* identListArg();

  class PARSERS_PUBLIC_TYPE IdentListContext : public antlr4::ParserRuleContext {
  public:
    IdentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SimpleIdentifierContext *> simpleIdentifier();
    SimpleIdentifierContext* simpleIdentifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  IdentListContext* identList();

  class PARSERS_PUBLIC_TYPE FulltextOptionsContext : public antlr4::ParserRuleContext {
  public:
    FulltextOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN_SYMBOL();
    antlr4::tree::TerminalNode *BOOLEAN_SYMBOL();
    antlr4::tree::TerminalNode *MODE_SYMBOL();
    antlr4::tree::TerminalNode *NATURAL_SYMBOL();
    antlr4::tree::TerminalNode *LANGUAGE_SYMBOL();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *QUERY_SYMBOL();
    antlr4::tree::TerminalNode *EXPANSION_SYMBOL();

   
  };

  FulltextOptionsContext* fulltextOptions();

  class PARSERS_PUBLIC_TYPE RuntimeFunctionCallContext : public antlr4::ParserRuleContext {
  public:
    RuntimeFunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHAR_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprListContext *exprList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *USING_SYMBOL();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *CURRENT_USER_SYMBOL();
    ParenthesesContext *parentheses();
    antlr4::tree::TerminalNode *DATE_SYMBOL();
    ExprWithParenthesesContext *exprWithParentheses();
    antlr4::tree::TerminalNode *DAY_SYMBOL();
    antlr4::tree::TerminalNode *HOUR_SYMBOL();
    antlr4::tree::TerminalNode *INSERT_SYMBOL();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *INTERVAL_SYMBOL();
    antlr4::tree::TerminalNode *JSON_VALUE_SYMBOL();
    SimpleExprContext *simpleExpr();
    TextLiteralContext *textLiteral();
    OnEmptyOrErrorContext *onEmptyOrError();
    ReturningTypeContext *returningType();
    antlr4::tree::TerminalNode *LEFT_SYMBOL();
    antlr4::tree::TerminalNode *MINUTE_SYMBOL();
    antlr4::tree::TerminalNode *MONTH_SYMBOL();
    antlr4::tree::TerminalNode *RIGHT_SYMBOL();
    antlr4::tree::TerminalNode *SECOND_SYMBOL();
    antlr4::tree::TerminalNode *TIME_SYMBOL();
    antlr4::tree::TerminalNode *TIMESTAMP_SYMBOL();
    TrimFunctionContext *trimFunction();
    UserFunctionContext *userFunction();
    antlr4::tree::TerminalNode *VALUES_SYMBOL();
    antlr4::tree::TerminalNode *YEAR_SYMBOL();
    antlr4::tree::TerminalNode *ADDDATE_SYMBOL();
    antlr4::tree::TerminalNode *SUBDATE_SYMBOL();
    IntervalContext *interval();
    antlr4::tree::TerminalNode *CURDATE_SYMBOL();
    antlr4::tree::TerminalNode *CURTIME_SYMBOL();
    TimeFunctionParametersContext *timeFunctionParameters();
    antlr4::tree::TerminalNode *DATE_ADD_SYMBOL();
    antlr4::tree::TerminalNode *DATE_SUB_SYMBOL();
    antlr4::tree::TerminalNode *EXTRACT_SYMBOL();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    antlr4::tree::TerminalNode *GET_FORMAT_SYMBOL();
    DateTimeTtypeContext *dateTimeTtype();
    antlr4::tree::TerminalNode *NOW_SYMBOL();
    antlr4::tree::TerminalNode *POSITION_SYMBOL();
    BitExprContext *bitExpr();
    antlr4::tree::TerminalNode *IN_SYMBOL();
    SubstringFunctionContext *substringFunction();
    antlr4::tree::TerminalNode *SYSDATE_SYMBOL();
    IntervalTimeStampContext *intervalTimeStamp();
    antlr4::tree::TerminalNode *TIMESTAMPADD_SYMBOL();
    antlr4::tree::TerminalNode *TIMESTAMPDIFF_SYMBOL();
    antlr4::tree::TerminalNode *UTC_DATE_SYMBOL();
    antlr4::tree::TerminalNode *UTC_TIME_SYMBOL();
    antlr4::tree::TerminalNode *UTC_TIMESTAMP_SYMBOL();
    antlr4::tree::TerminalNode *ASCII_SYMBOL();
    antlr4::tree::TerminalNode *CHARSET_SYMBOL();
    antlr4::tree::TerminalNode *COALESCE_SYMBOL();
    ExprListWithParenthesesContext *exprListWithParentheses();
    antlr4::tree::TerminalNode *COLLATION_SYMBOL();
    antlr4::tree::TerminalNode *DATABASE_SYMBOL();
    antlr4::tree::TerminalNode *IF_SYMBOL();
    antlr4::tree::TerminalNode *FORMAT_SYMBOL();
    antlr4::tree::TerminalNode *MICROSECOND_SYMBOL();
    antlr4::tree::TerminalNode *MOD_SYMBOL();
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *QUARTER_SYMBOL();
    antlr4::tree::TerminalNode *REPEAT_SYMBOL();
    antlr4::tree::TerminalNode *REPLACE_SYMBOL();
    antlr4::tree::TerminalNode *REVERSE_SYMBOL();
    antlr4::tree::TerminalNode *ROW_COUNT_SYMBOL();
    antlr4::tree::TerminalNode *TRUNCATE_SYMBOL();
    antlr4::tree::TerminalNode *WEEK_SYMBOL();
    antlr4::tree::TerminalNode *WEIGHT_STRING_SYMBOL();
    antlr4::tree::TerminalNode *AS_SYMBOL();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();
    WsNumCodepointsContext *wsNumCodepoints();
    std::vector<Ulong_numberContext *> ulong_number();
    Ulong_numberContext* ulong_number(size_t i);
    GeometryFunctionContext *geometryFunction();

   
  };

  RuntimeFunctionCallContext* runtimeFunctionCall();

  class PARSERS_PUBLIC_TYPE ReturningTypeContext : public antlr4::ParserRuleContext {
  public:
    ReturningTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURNING_SYMBOL();
    CastTypeContext *castType();

   
  };

  ReturningTypeContext* returningType();

  class PARSERS_PUBLIC_TYPE GeometryFunctionContext : public antlr4::ParserRuleContext {
  public:
    GeometryFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTION_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    ExprListContext *exprList();
    antlr4::tree::TerminalNode *LINESTRING_SYMBOL();
    ExprListWithParenthesesContext *exprListWithParentheses();
    antlr4::tree::TerminalNode *MULTILINESTRING_SYMBOL();
    antlr4::tree::TerminalNode *MULTIPOINT_SYMBOL();
    antlr4::tree::TerminalNode *MULTIPOLYGON_SYMBOL();
    antlr4::tree::TerminalNode *POINT_SYMBOL();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *COMMA_SYMBOL();
    antlr4::tree::TerminalNode *POLYGON_SYMBOL();

   
  };

  GeometryFunctionContext* geometryFunction();

  class PARSERS_PUBLIC_TYPE TimeFunctionParametersContext : public antlr4::ParserRuleContext {
  public:
    TimeFunctionParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    FractionalPrecisionContext *fractionalPrecision();

   
  };

  TimeFunctionParametersContext* timeFunctionParameters();

  class PARSERS_PUBLIC_TYPE FractionalPrecisionContext : public antlr4::ParserRuleContext {
  public:
    FractionalPrecisionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_NUMBER();

   
  };

  FractionalPrecisionContext* fractionalPrecision();

  class PARSERS_PUBLIC_TYPE WeightStringLevelsContext : public antlr4::ParserRuleContext {
  public:
    WeightStringLevelsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEVEL_SYMBOL();
    std::vector<Real_ulong_numberContext *> real_ulong_number();
    Real_ulong_numberContext* real_ulong_number(size_t i);
    antlr4::tree::TerminalNode *MINUS_OPERATOR();
    std::vector<WeightStringLevelListItemContext *> weightStringLevelListItem();
    WeightStringLevelListItemContext* weightStringLevelListItem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  WeightStringLevelsContext* weightStringLevels();

  class PARSERS_PUBLIC_TYPE WeightStringLevelListItemContext : public antlr4::ParserRuleContext {
  public:
    WeightStringLevelListItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Real_ulong_numberContext *real_ulong_number();
    antlr4::tree::TerminalNode *REVERSE_SYMBOL();
    antlr4::tree::TerminalNode *ASC_SYMBOL();
    antlr4::tree::TerminalNode *DESC_SYMBOL();

   
  };

  WeightStringLevelListItemContext* weightStringLevelListItem();

  class PARSERS_PUBLIC_TYPE DateTimeTtypeContext : public antlr4::ParserRuleContext {
  public:
    DateTimeTtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATE_SYMBOL();
    antlr4::tree::TerminalNode *TIME_SYMBOL();
    antlr4::tree::TerminalNode *DATETIME_SYMBOL();
    antlr4::tree::TerminalNode *TIMESTAMP_SYMBOL();

   
  };

  DateTimeTtypeContext* dateTimeTtype();

  class PARSERS_PUBLIC_TYPE TrimFunctionContext : public antlr4::ParserRuleContext {
  public:
    TrimFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRIM_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *LEADING_SYMBOL();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    antlr4::tree::TerminalNode *TRAILING_SYMBOL();
    antlr4::tree::TerminalNode *BOTH_SYMBOL();

   
  };

  TrimFunctionContext* trimFunction();

  class PARSERS_PUBLIC_TYPE SubstringFunctionContext : public antlr4::ParserRuleContext {
  public:
    SubstringFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBSTRING_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    antlr4::tree::TerminalNode *FOR_SYMBOL();

   
  };

  SubstringFunctionContext* substringFunction();

  class PARSERS_PUBLIC_TYPE FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PureIdentifierContext *pureIdentifier();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    UdfExprListContext *udfExprList();
    QualifiedIdentifierContext *qualifiedIdentifier();
    ExprListContext *exprList();

   
  };

  FunctionCallContext* functionCall();

  class PARSERS_PUBLIC_TYPE UdfExprListContext : public antlr4::ParserRuleContext {
  public:
    UdfExprListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UdfExprContext *> udfExpr();
    UdfExprContext* udfExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  UdfExprListContext* udfExprList();

  class PARSERS_PUBLIC_TYPE UdfExprContext : public antlr4::ParserRuleContext {
  public:
    UdfExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    SelectAliasContext *selectAlias();

   
  };

  UdfExprContext* udfExpr();

  class PARSERS_PUBLIC_TYPE UserVariableContext : public antlr4::ParserRuleContext {
  public:
    UserVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT_SIGN_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *AT_TEXT_SUFFIX();

   
  };

  UserVariableContext* userVariable();

  class PARSERS_PUBLIC_TYPE InExpressionUserVariableAssignmentContext : public antlr4::ParserRuleContext {
  public:
    InExpressionUserVariableAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserVariableContext *userVariable();
    antlr4::tree::TerminalNode *ASSIGN_OPERATOR();
    ExprContext *expr();

   
  };

  InExpressionUserVariableAssignmentContext* inExpressionUserVariableAssignment();

  class PARSERS_PUBLIC_TYPE RvalueSystemOrUserVariableContext : public antlr4::ParserRuleContext {
  public:
    RvalueSystemOrUserVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserVariableContext *userVariable();
    antlr4::tree::TerminalNode *AT_AT_SIGN_SYMBOL();
    RvalueSystemVariableContext *rvalueSystemVariable();
    RvalueSystemVariableTypeContext *rvalueSystemVariableType();

   
  };

  RvalueSystemOrUserVariableContext* rvalueSystemOrUserVariable();

  class PARSERS_PUBLIC_TYPE LvalueVariableContext : public antlr4::ParserRuleContext {
  public:
    LvalueVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    LValueIdentifierContext *lValueIdentifier();
    DotIdentifierContext *dotIdentifier();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();

   
  };

  LvalueVariableContext* lvalueVariable();

  class PARSERS_PUBLIC_TYPE RvalueSystemVariableContext : public antlr4::ParserRuleContext {
  public:
    RvalueSystemVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();
    DotIdentifierContext *dotIdentifier();

   
  };

  RvalueSystemVariableContext* rvalueSystemVariable();

  class PARSERS_PUBLIC_TYPE WhenExpressionContext : public antlr4::ParserRuleContext {
  public:
    WhenExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN_SYMBOL();
    ExprContext *expr();

   
  };

  WhenExpressionContext* whenExpression();

  class PARSERS_PUBLIC_TYPE ThenExpressionContext : public antlr4::ParserRuleContext {
  public:
    ThenExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THEN_SYMBOL();
    ExprContext *expr();

   
  };

  ThenExpressionContext* thenExpression();

  class PARSERS_PUBLIC_TYPE ElseExpressionContext : public antlr4::ParserRuleContext {
  public:
    ElseExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE_SYMBOL();
    ExprContext *expr();

   
  };

  ElseExpressionContext* elseExpression();

  class PARSERS_PUBLIC_TYPE CastTypeContext : public antlr4::ParserRuleContext {
  public:
    CastTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY_SYMBOL();
    FieldLengthContext *fieldLength();
    antlr4::tree::TerminalNode *CHAR_SYMBOL();
    CharsetWithOptBinaryContext *charsetWithOptBinary();
    NcharContext *nchar();
    antlr4::tree::TerminalNode *SIGNED_SYMBOL();
    antlr4::tree::TerminalNode *INT_SYMBOL();
    antlr4::tree::TerminalNode *UNSIGNED_SYMBOL();
    antlr4::tree::TerminalNode *DATE_SYMBOL();
    antlr4::tree::TerminalNode *YEAR_SYMBOL();
    antlr4::tree::TerminalNode *TIME_SYMBOL();
    TypeDatetimePrecisionContext *typeDatetimePrecision();
    antlr4::tree::TerminalNode *DATETIME_SYMBOL();
    antlr4::tree::TerminalNode *DECIMAL_SYMBOL();
    FloatOptionsContext *floatOptions();
    antlr4::tree::TerminalNode *JSON_SYMBOL();
    RealTypeContext *realType();
    antlr4::tree::TerminalNode *FLOAT_SYMBOL();
    StandardFloatOptionsContext *standardFloatOptions();
    antlr4::tree::TerminalNode *POINT_SYMBOL();
    antlr4::tree::TerminalNode *LINESTRING_SYMBOL();
    antlr4::tree::TerminalNode *POLYGON_SYMBOL();
    antlr4::tree::TerminalNode *MULTIPOINT_SYMBOL();
    antlr4::tree::TerminalNode *MULTILINESTRING_SYMBOL();
    antlr4::tree::TerminalNode *MULTIPOLYGON_SYMBOL();
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTION_SYMBOL();

   
  };

  CastTypeContext* castType();

  class PARSERS_PUBLIC_TYPE ExprListContext : public antlr4::ParserRuleContext {
  public:
    ExprListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  ExprListContext* exprList();

  class PARSERS_PUBLIC_TYPE CharsetContext : public antlr4::ParserRuleContext {
  public:
    CharsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHAR_SYMBOL();
    antlr4::tree::TerminalNode *SET_SYMBOL();
    antlr4::tree::TerminalNode *CHARSET_SYMBOL();

   
  };

  CharsetContext* charset();

  class PARSERS_PUBLIC_TYPE NotRuleContext : public antlr4::ParserRuleContext {
  public:
    NotRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT_SYMBOL();
    antlr4::tree::TerminalNode *NOT2_SYMBOL();

   
  };

  NotRuleContext* notRule();

  class PARSERS_PUBLIC_TYPE Not2RuleContext : public antlr4::ParserRuleContext {
  public:
    Not2RuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOGICAL_NOT_OPERATOR();
    antlr4::tree::TerminalNode *NOT2_SYMBOL();

   
  };

  Not2RuleContext* not2Rule();

  class PARSERS_PUBLIC_TYPE IntervalContext : public antlr4::ParserRuleContext {
  public:
    IntervalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntervalTimeStampContext *intervalTimeStamp();
    antlr4::tree::TerminalNode *SECOND_MICROSECOND_SYMBOL();
    antlr4::tree::TerminalNode *MINUTE_MICROSECOND_SYMBOL();
    antlr4::tree::TerminalNode *MINUTE_SECOND_SYMBOL();
    antlr4::tree::TerminalNode *HOUR_MICROSECOND_SYMBOL();
    antlr4::tree::TerminalNode *HOUR_SECOND_SYMBOL();
    antlr4::tree::TerminalNode *HOUR_MINUTE_SYMBOL();
    antlr4::tree::TerminalNode *DAY_MICROSECOND_SYMBOL();
    antlr4::tree::TerminalNode *DAY_SECOND_SYMBOL();
    antlr4::tree::TerminalNode *DAY_MINUTE_SYMBOL();
    antlr4::tree::TerminalNode *DAY_HOUR_SYMBOL();
    antlr4::tree::TerminalNode *YEAR_MONTH_SYMBOL();

   
  };

  IntervalContext* interval();

  class PARSERS_PUBLIC_TYPE IntervalTimeStampContext : public antlr4::ParserRuleContext {
  public:
    IntervalTimeStampContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MICROSECOND_SYMBOL();
    antlr4::tree::TerminalNode *SECOND_SYMBOL();
    antlr4::tree::TerminalNode *MINUTE_SYMBOL();
    antlr4::tree::TerminalNode *HOUR_SYMBOL();
    antlr4::tree::TerminalNode *DAY_SYMBOL();
    antlr4::tree::TerminalNode *WEEK_SYMBOL();
    antlr4::tree::TerminalNode *MONTH_SYMBOL();
    antlr4::tree::TerminalNode *QUARTER_SYMBOL();
    antlr4::tree::TerminalNode *YEAR_SYMBOL();

   
  };

  IntervalTimeStampContext* intervalTimeStamp();

  class PARSERS_PUBLIC_TYPE ExprListWithParenthesesContext : public antlr4::ParserRuleContext {
  public:
    ExprListWithParenthesesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprListContext *exprList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

   
  };

  ExprListWithParenthesesContext* exprListWithParentheses();

  class PARSERS_PUBLIC_TYPE ExprWithParenthesesContext : public antlr4::ParserRuleContext {
  public:
    ExprWithParenthesesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

   
  };

  ExprWithParenthesesContext* exprWithParentheses();

  class PARSERS_PUBLIC_TYPE SimpleExprWithParenthesesContext : public antlr4::ParserRuleContext {
  public:
    SimpleExprWithParenthesesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    SimpleExprContext *simpleExpr();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

   
  };

  SimpleExprWithParenthesesContext* simpleExprWithParentheses();

  class PARSERS_PUBLIC_TYPE OrderListContext : public antlr4::ParserRuleContext {
  public:
    OrderListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OrderExpressionContext *> orderExpression();
    OrderExpressionContext* orderExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  OrderListContext* orderList();

  class PARSERS_PUBLIC_TYPE OrderExpressionContext : public antlr4::ParserRuleContext {
  public:
    OrderExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    DirectionContext *direction();

   
  };

  OrderExpressionContext* orderExpression();

  class PARSERS_PUBLIC_TYPE GroupListContext : public antlr4::ParserRuleContext {
  public:
    GroupListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<GroupingExpressionContext *> groupingExpression();
    GroupingExpressionContext* groupingExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  GroupListContext* groupList();

  class PARSERS_PUBLIC_TYPE GroupingExpressionContext : public antlr4::ParserRuleContext {
  public:
    GroupingExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();

   
  };

  GroupingExpressionContext* groupingExpression();

  class PARSERS_PUBLIC_TYPE ChannelContext : public antlr4::ParserRuleContext {
  public:
    ChannelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *CHANNEL_SYMBOL();
    TextStringNoLinebreakContext *textStringNoLinebreak();

   
  };

  ChannelContext* channel();

  class PARSERS_PUBLIC_TYPE CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleStatementContext *simpleStatement();
    ReturnStatementContext *returnStatement();
    IfStatementContext *ifStatement();
    CaseStatementContext *caseStatement();
    LabeledBlockContext *labeledBlock();
    UnlabeledBlockContext *unlabeledBlock();
    LabeledControlContext *labeledControl();
    UnlabeledControlContext *unlabeledControl();
    LeaveStatementContext *leaveStatement();
    IterateStatementContext *iterateStatement();
    CursorOpenContext *cursorOpen();
    CursorFetchContext *cursorFetch();
    CursorCloseContext *cursorClose();

   
  };

  CompoundStatementContext* compoundStatement();

  class PARSERS_PUBLIC_TYPE ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN_SYMBOL();
    ExprContext *expr();

   
  };

  ReturnStatementContext* returnStatement();

  class PARSERS_PUBLIC_TYPE IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IF_SYMBOL();
    antlr4::tree::TerminalNode* IF_SYMBOL(size_t i);
    IfBodyContext *ifBody();
    antlr4::tree::TerminalNode *END_SYMBOL();

   
  };

  IfStatementContext* ifStatement();

  class PARSERS_PUBLIC_TYPE IfBodyContext : public antlr4::ParserRuleContext {
  public:
    IfBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    ThenStatementContext *thenStatement();
    antlr4::tree::TerminalNode *ELSEIF_SYMBOL();
    IfBodyContext *ifBody();
    antlr4::tree::TerminalNode *ELSE_SYMBOL();
    CompoundStatementListContext *compoundStatementList();

   
  };

  IfBodyContext* ifBody();

  class PARSERS_PUBLIC_TYPE ThenStatementContext : public antlr4::ParserRuleContext {
  public:
    ThenStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THEN_SYMBOL();
    CompoundStatementListContext *compoundStatementList();

   
  };

  ThenStatementContext* thenStatement();

  class PARSERS_PUBLIC_TYPE CompoundStatementListContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CompoundStatementContext *> compoundStatement();
    CompoundStatementContext* compoundStatement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON_SYMBOL();
    antlr4::tree::TerminalNode* SEMICOLON_SYMBOL(size_t i);

   
  };

  CompoundStatementListContext* compoundStatementList();

  class PARSERS_PUBLIC_TYPE CaseStatementContext : public antlr4::ParserRuleContext {
  public:
    CaseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> CASE_SYMBOL();
    antlr4::tree::TerminalNode* CASE_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *END_SYMBOL();
    ExprContext *expr();
    std::vector<WhenExpressionContext *> whenExpression();
    WhenExpressionContext* whenExpression(size_t i);
    std::vector<ThenStatementContext *> thenStatement();
    ThenStatementContext* thenStatement(size_t i);
    ElseStatementContext *elseStatement();

   
  };

  CaseStatementContext* caseStatement();

  class PARSERS_PUBLIC_TYPE ElseStatementContext : public antlr4::ParserRuleContext {
  public:
    ElseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE_SYMBOL();
    CompoundStatementListContext *compoundStatementList();

   
  };

  ElseStatementContext* elseStatement();

  class PARSERS_PUBLIC_TYPE LabeledBlockContext : public antlr4::ParserRuleContext {
  public:
    LabeledBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabelContext *label();
    BeginEndBlockContext *beginEndBlock();
    LabelRefContext *labelRef();

   
  };

  LabeledBlockContext* labeledBlock();

  class PARSERS_PUBLIC_TYPE UnlabeledBlockContext : public antlr4::ParserRuleContext {
  public:
    UnlabeledBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BeginEndBlockContext *beginEndBlock();

   
  };

  UnlabeledBlockContext* unlabeledBlock();

  class PARSERS_PUBLIC_TYPE LabelContext : public antlr4::ParserRuleContext {
  public:
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabelIdentifierContext *labelIdentifier();
    antlr4::tree::TerminalNode *COLON_SYMBOL();

   
  };

  LabelContext* label();

  class PARSERS_PUBLIC_TYPE BeginEndBlockContext : public antlr4::ParserRuleContext {
  public:
    BeginEndBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN_SYMBOL();
    antlr4::tree::TerminalNode *END_SYMBOL();
    SpDeclarationsContext *spDeclarations();
    CompoundStatementListContext *compoundStatementList();

   
  };

  BeginEndBlockContext* beginEndBlock();

  class PARSERS_PUBLIC_TYPE LabeledControlContext : public antlr4::ParserRuleContext {
  public:
    LabeledControlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabelContext *label();
    UnlabeledControlContext *unlabeledControl();
    LabelRefContext *labelRef();

   
  };

  LabeledControlContext* labeledControl();

  class PARSERS_PUBLIC_TYPE UnlabeledControlContext : public antlr4::ParserRuleContext {
  public:
    UnlabeledControlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoopBlockContext *loopBlock();
    WhileDoBlockContext *whileDoBlock();
    RepeatUntilBlockContext *repeatUntilBlock();

   
  };

  UnlabeledControlContext* unlabeledControl();

  class PARSERS_PUBLIC_TYPE LoopBlockContext : public antlr4::ParserRuleContext {
  public:
    LoopBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LOOP_SYMBOL();
    antlr4::tree::TerminalNode* LOOP_SYMBOL(size_t i);
    CompoundStatementListContext *compoundStatementList();
    antlr4::tree::TerminalNode *END_SYMBOL();

   
  };

  LoopBlockContext* loopBlock();

  class PARSERS_PUBLIC_TYPE WhileDoBlockContext : public antlr4::ParserRuleContext {
  public:
    WhileDoBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WHILE_SYMBOL();
    antlr4::tree::TerminalNode* WHILE_SYMBOL(size_t i);
    ExprContext *expr();
    antlr4::tree::TerminalNode *DO_SYMBOL();
    CompoundStatementListContext *compoundStatementList();
    antlr4::tree::TerminalNode *END_SYMBOL();

   
  };

  WhileDoBlockContext* whileDoBlock();

  class PARSERS_PUBLIC_TYPE RepeatUntilBlockContext : public antlr4::ParserRuleContext {
  public:
    RepeatUntilBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> REPEAT_SYMBOL();
    antlr4::tree::TerminalNode* REPEAT_SYMBOL(size_t i);
    CompoundStatementListContext *compoundStatementList();
    antlr4::tree::TerminalNode *UNTIL_SYMBOL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *END_SYMBOL();

   
  };

  RepeatUntilBlockContext* repeatUntilBlock();

  class PARSERS_PUBLIC_TYPE SpDeclarationsContext : public antlr4::ParserRuleContext {
  public:
    SpDeclarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SpDeclarationContext *> spDeclaration();
    SpDeclarationContext* spDeclaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON_SYMBOL();
    antlr4::tree::TerminalNode* SEMICOLON_SYMBOL(size_t i);

   
  };

  SpDeclarationsContext* spDeclarations();

  class PARSERS_PUBLIC_TYPE SpDeclarationContext : public antlr4::ParserRuleContext {
  public:
    SpDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclarationContext *variableDeclaration();
    ConditionDeclarationContext *conditionDeclaration();
    HandlerDeclarationContext *handlerDeclaration();
    CursorDeclarationContext *cursorDeclaration();

   
  };

  SpDeclarationContext* spDeclaration();

  class PARSERS_PUBLIC_TYPE VariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE_SYMBOL();
    IdentifierListContext *identifierList();
    DataTypeContext *dataType();
    CollateContext *collate();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    ExprContext *expr();

   
  };

  VariableDeclarationContext* variableDeclaration();

  class PARSERS_PUBLIC_TYPE ConditionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ConditionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *CONDITION_SYMBOL();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    SpConditionContext *spCondition();

   
  };

  ConditionDeclarationContext* conditionDeclaration();

  class PARSERS_PUBLIC_TYPE SpConditionContext : public antlr4::ParserRuleContext {
  public:
    SpConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ulong_numberContext *ulong_number();
    SqlstateContext *sqlstate();

   
  };

  SpConditionContext* spCondition();

  class PARSERS_PUBLIC_TYPE SqlstateContext : public antlr4::ParserRuleContext {
  public:
    SqlstateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SQLSTATE_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *VALUE_SYMBOL();

   
  };

  SqlstateContext* sqlstate();

  class PARSERS_PUBLIC_TYPE HandlerDeclarationContext : public antlr4::ParserRuleContext {
  public:
    HandlerDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE_SYMBOL();
    antlr4::tree::TerminalNode *HANDLER_SYMBOL();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    std::vector<HandlerConditionContext *> handlerCondition();
    HandlerConditionContext* handlerCondition(size_t i);
    CompoundStatementContext *compoundStatement();
    antlr4::tree::TerminalNode *CONTINUE_SYMBOL();
    antlr4::tree::TerminalNode *EXIT_SYMBOL();
    antlr4::tree::TerminalNode *UNDO_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  HandlerDeclarationContext* handlerDeclaration();

  class PARSERS_PUBLIC_TYPE HandlerConditionContext : public antlr4::ParserRuleContext {
  public:
    HandlerConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SpConditionContext *spCondition();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SQLWARNING_SYMBOL();
    NotRuleContext *notRule();
    antlr4::tree::TerminalNode *FOUND_SYMBOL();
    antlr4::tree::TerminalNode *SQLEXCEPTION_SYMBOL();

   
  };

  HandlerConditionContext* handlerCondition();

  class PARSERS_PUBLIC_TYPE CursorDeclarationContext : public antlr4::ParserRuleContext {
  public:
    CursorDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *CURSOR_SYMBOL();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    SelectStatementContext *selectStatement();

   
  };

  CursorDeclarationContext* cursorDeclaration();

  class PARSERS_PUBLIC_TYPE IterateStatementContext : public antlr4::ParserRuleContext {
  public:
    IterateStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ITERATE_SYMBOL();
    LabelRefContext *labelRef();

   
  };

  IterateStatementContext* iterateStatement();

  class PARSERS_PUBLIC_TYPE LeaveStatementContext : public antlr4::ParserRuleContext {
  public:
    LeaveStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEAVE_SYMBOL();
    LabelRefContext *labelRef();

   
  };

  LeaveStatementContext* leaveStatement();

  class PARSERS_PUBLIC_TYPE GetDiagnosticsStatementContext : public antlr4::ParserRuleContext {
  public:
    GetDiagnosticsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GET_SYMBOL();
    antlr4::tree::TerminalNode *DIAGNOSTICS_SYMBOL();
    std::vector<StatementInformationItemContext *> statementInformationItem();
    StatementInformationItemContext* statementInformationItem(size_t i);
    antlr4::tree::TerminalNode *CONDITION_SYMBOL();
    SignalAllowedExprContext *signalAllowedExpr();
    std::vector<ConditionInformationItemContext *> conditionInformationItem();
    ConditionInformationItemContext* conditionInformationItem(size_t i);
    antlr4::tree::TerminalNode *CURRENT_SYMBOL();
    antlr4::tree::TerminalNode *STACKED_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  GetDiagnosticsStatementContext* getDiagnosticsStatement();

  class PARSERS_PUBLIC_TYPE SignalAllowedExprContext : public antlr4::ParserRuleContext {
  public:
    SignalAllowedExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    RvalueSystemOrUserVariableContext *rvalueSystemOrUserVariable();
    QualifiedIdentifierContext *qualifiedIdentifier();

   
  };

  SignalAllowedExprContext* signalAllowedExpr();

  class PARSERS_PUBLIC_TYPE StatementInformationItemContext : public antlr4::ParserRuleContext {
  public:
    StatementInformationItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *NUMBER_SYMBOL();
    antlr4::tree::TerminalNode *ROW_COUNT_SYMBOL();
    UserVariableContext *userVariable();
    IdentifierContext *identifier();

   
  };

  StatementInformationItemContext* statementInformationItem();

  class PARSERS_PUBLIC_TYPE ConditionInformationItemContext : public antlr4::ParserRuleContext {
  public:
    ConditionInformationItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    UserVariableContext *userVariable();
    IdentifierContext *identifier();
    SignalInformationItemNameContext *signalInformationItemName();
    antlr4::tree::TerminalNode *RETURNED_SQLSTATE_SYMBOL();

   
  };

  ConditionInformationItemContext* conditionInformationItem();

  class PARSERS_PUBLIC_TYPE SignalInformationItemNameContext : public antlr4::ParserRuleContext {
  public:
    SignalInformationItemNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS_ORIGIN_SYMBOL();
    antlr4::tree::TerminalNode *SUBCLASS_ORIGIN_SYMBOL();
    antlr4::tree::TerminalNode *CONSTRAINT_CATALOG_SYMBOL();
    antlr4::tree::TerminalNode *CONSTRAINT_SCHEMA_SYMBOL();
    antlr4::tree::TerminalNode *CONSTRAINT_NAME_SYMBOL();
    antlr4::tree::TerminalNode *CATALOG_NAME_SYMBOL();
    antlr4::tree::TerminalNode *SCHEMA_NAME_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_NAME_SYMBOL();
    antlr4::tree::TerminalNode *COLUMN_NAME_SYMBOL();
    antlr4::tree::TerminalNode *CURSOR_NAME_SYMBOL();
    antlr4::tree::TerminalNode *MESSAGE_TEXT_SYMBOL();
    antlr4::tree::TerminalNode *MYSQL_ERRNO_SYMBOL();

   
  };

  SignalInformationItemNameContext* signalInformationItemName();

  class PARSERS_PUBLIC_TYPE SignalStatementContext : public antlr4::ParserRuleContext {
  public:
    SignalStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIGNAL_SYMBOL();
    IdentifierContext *identifier();
    SqlstateContext *sqlstate();
    antlr4::tree::TerminalNode *SET_SYMBOL();
    std::vector<SignalInformationItemContext *> signalInformationItem();
    SignalInformationItemContext* signalInformationItem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  SignalStatementContext* signalStatement();

  class PARSERS_PUBLIC_TYPE ResignalStatementContext : public antlr4::ParserRuleContext {
  public:
    ResignalStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESIGNAL_SYMBOL();
    IdentifierContext *identifier();
    SqlstateContext *sqlstate();
    antlr4::tree::TerminalNode *SET_SYMBOL();
    std::vector<SignalInformationItemContext *> signalInformationItem();
    SignalInformationItemContext* signalInformationItem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  ResignalStatementContext* resignalStatement();

  class PARSERS_PUBLIC_TYPE SignalInformationItemContext : public antlr4::ParserRuleContext {
  public:
    SignalInformationItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SignalInformationItemNameContext *signalInformationItemName();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    SignalAllowedExprContext *signalAllowedExpr();

   
  };

  SignalInformationItemContext* signalInformationItem();

  class PARSERS_PUBLIC_TYPE CursorOpenContext : public antlr4::ParserRuleContext {
  public:
    CursorOpenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_SYMBOL();
    IdentifierContext *identifier();

   
  };

  CursorOpenContext* cursorOpen();

  class PARSERS_PUBLIC_TYPE CursorCloseContext : public antlr4::ParserRuleContext {
  public:
    CursorCloseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOSE_SYMBOL();
    IdentifierContext *identifier();

   
  };

  CursorCloseContext* cursorClose();

  class PARSERS_PUBLIC_TYPE CursorFetchContext : public antlr4::ParserRuleContext {
  public:
    CursorFetchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FETCH_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *INTO_SYMBOL();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    antlr4::tree::TerminalNode *NEXT_SYMBOL();

   
  };

  CursorFetchContext* cursorFetch();

  class PARSERS_PUBLIC_TYPE ScheduleContext : public antlr4::ParserRuleContext {
  public:
    ScheduleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT_SYMBOL();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *EVERY_SYMBOL();
    IntervalContext *interval();
    antlr4::tree::TerminalNode *STARTS_SYMBOL();
    antlr4::tree::TerminalNode *ENDS_SYMBOL();

   
  };

  ScheduleContext* schedule();

  class PARSERS_PUBLIC_TYPE ColumnDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ColumnDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnNameContext *columnName();
    FieldDefinitionContext *fieldDefinition();
    CheckOrReferencesContext *checkOrReferences();

   
  };

  ColumnDefinitionContext* columnDefinition();

  class PARSERS_PUBLIC_TYPE CheckOrReferencesContext : public antlr4::ParserRuleContext {
  public:
    CheckOrReferencesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CheckConstraintContext *checkConstraint();
    ReferencesContext *references();

   
  };

  CheckOrReferencesContext* checkOrReferences();

  class PARSERS_PUBLIC_TYPE CheckConstraintContext : public antlr4::ParserRuleContext {
  public:
    CheckConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECK_SYMBOL();
    ExprWithParenthesesContext *exprWithParentheses();

   
  };

  CheckConstraintContext* checkConstraint();

  class PARSERS_PUBLIC_TYPE ConstraintEnforcementContext : public antlr4::ParserRuleContext {
  public:
    ConstraintEnforcementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENFORCED_SYMBOL();
    antlr4::tree::TerminalNode *NOT_SYMBOL();

   
  };

  ConstraintEnforcementContext* constraintEnforcement();

  class PARSERS_PUBLIC_TYPE TableConstraintDefContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    TableConstraintDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeyListVariantsContext *keyListVariants();
    antlr4::tree::TerminalNode *KEY_SYMBOL();
    antlr4::tree::TerminalNode *INDEX_SYMBOL();
    IndexNameAndTypeContext *indexNameAndType();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    antlr4::tree::TerminalNode *FULLTEXT_SYMBOL();
    KeyOrIndexContext *keyOrIndex();
    IndexNameContext *indexName();
    std::vector<FulltextIndexOptionContext *> fulltextIndexOption();
    FulltextIndexOptionContext* fulltextIndexOption(size_t i);
    antlr4::tree::TerminalNode *SPATIAL_SYMBOL();
    std::vector<SpatialIndexOptionContext *> spatialIndexOption();
    SpatialIndexOptionContext* spatialIndexOption(size_t i);
    KeyListContext *keyList();
    ReferencesContext *references();
    CheckConstraintContext *checkConstraint();
    ConstraintNameContext *constraintName();
    antlr4::tree::TerminalNode *FOREIGN_SYMBOL();
    antlr4::tree::TerminalNode *PRIMARY_SYMBOL();
    antlr4::tree::TerminalNode *UNIQUE_SYMBOL();
    ConstraintEnforcementContext *constraintEnforcement();

   
  };

  TableConstraintDefContext* tableConstraintDef();

  class PARSERS_PUBLIC_TYPE ConstraintNameContext : public antlr4::ParserRuleContext {
  public:
    ConstraintNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSTRAINT_SYMBOL();
    IdentifierContext *identifier();

   
  };

  ConstraintNameContext* constraintName();

  class PARSERS_PUBLIC_TYPE FieldDefinitionContext : public antlr4::ParserRuleContext {
  public:
    FieldDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *AS_SYMBOL();
    ExprWithParenthesesContext *exprWithParentheses();
    std::vector<ColumnAttributeContext *> columnAttribute();
    ColumnAttributeContext* columnAttribute(size_t i);
    CollateContext *collate();
    antlr4::tree::TerminalNode *GENERATED_SYMBOL();
    antlr4::tree::TerminalNode *ALWAYS_SYMBOL();
    antlr4::tree::TerminalNode *VIRTUAL_SYMBOL();
    antlr4::tree::TerminalNode *STORED_SYMBOL();

   
  };

  FieldDefinitionContext* fieldDefinition();

  class PARSERS_PUBLIC_TYPE ColumnAttributeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *value = nullptr;
    ColumnAttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NullLiteralContext *nullLiteral();
    antlr4::tree::TerminalNode *NOT_SYMBOL();
    antlr4::tree::TerminalNode *SECONDARY_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    SignedLiteralContext *signedLiteral();
    NowOrSignedLiteralContext *nowOrSignedLiteral();
    antlr4::tree::TerminalNode *NOW_SYMBOL();
    ExprWithParenthesesContext *exprWithParentheses();
    TimeFunctionParametersContext *timeFunctionParameters();
    antlr4::tree::TerminalNode *UPDATE_SYMBOL();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    antlr4::tree::TerminalNode *AUTO_INCREMENT_SYMBOL();
    antlr4::tree::TerminalNode *VALUE_SYMBOL();
    antlr4::tree::TerminalNode *SERIAL_SYMBOL();
    antlr4::tree::TerminalNode *KEY_SYMBOL();
    antlr4::tree::TerminalNode *PRIMARY_SYMBOL();
    antlr4::tree::TerminalNode *UNIQUE_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();
    CollateContext *collate();
    ColumnFormatContext *columnFormat();
    antlr4::tree::TerminalNode *COLUMN_FORMAT_SYMBOL();
    StorageMediaContext *storageMedia();
    antlr4::tree::TerminalNode *STORAGE_SYMBOL();
    Real_ulonglong_numberContext *real_ulonglong_number();
    antlr4::tree::TerminalNode *SRID_SYMBOL();
    CheckConstraintContext *checkConstraint();
    ConstraintNameContext *constraintName();
    ConstraintEnforcementContext *constraintEnforcement();
    JsonAttributeContext *jsonAttribute();
    antlr4::tree::TerminalNode *ENGINE_ATTRIBUTE_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *SECONDARY_ENGINE_ATTRIBUTE_SYMBOL();
    VisibilityContext *visibility();

   
  };

  ColumnAttributeContext* columnAttribute();

  class PARSERS_PUBLIC_TYPE ColumnFormatContext : public antlr4::ParserRuleContext {
  public:
    ColumnFormatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FIXED_SYMBOL();
    antlr4::tree::TerminalNode *DYNAMIC_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();

   
  };

  ColumnFormatContext* columnFormat();

  class PARSERS_PUBLIC_TYPE StorageMediaContext : public antlr4::ParserRuleContext {
  public:
    StorageMediaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISK_SYMBOL();
    antlr4::tree::TerminalNode *MEMORY_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();

   
  };

  StorageMediaContext* storageMedia();

  class PARSERS_PUBLIC_TYPE NowContext : public antlr4::ParserRuleContext {
  public:
    NowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOW_SYMBOL();
    FunctionDatetimePrecisionContext *functionDatetimePrecision();

   
  };

  NowContext* now();

  class PARSERS_PUBLIC_TYPE NowOrSignedLiteralContext : public antlr4::ParserRuleContext {
  public:
    NowOrSignedLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NowContext *now();
    SignedLiteralOrNullContext *signedLiteralOrNull();

   
  };

  NowOrSignedLiteralContext* nowOrSignedLiteral();

  class PARSERS_PUBLIC_TYPE GcolAttributeContext : public antlr4::ParserRuleContext {
  public:
    GcolAttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNIQUE_SYMBOL();
    antlr4::tree::TerminalNode *KEY_SYMBOL();
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();
    TextStringContext *textString();
    antlr4::tree::TerminalNode *NULL_SYMBOL();
    NotRuleContext *notRule();
    antlr4::tree::TerminalNode *PRIMARY_SYMBOL();

   
  };

  GcolAttributeContext* gcolAttribute();

  class PARSERS_PUBLIC_TYPE ReferencesContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *match = nullptr;
    antlr4::Token *option = nullptr;
    ReferencesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REFERENCES_SYMBOL();
    TableRefContext *tableRef();
    IdentifierListWithParenthesesContext *identifierListWithParentheses();
    antlr4::tree::TerminalNode *MATCH_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> ON_SYMBOL();
    antlr4::tree::TerminalNode* ON_SYMBOL(size_t i);
    std::vector<DeleteOptionContext *> deleteOption();
    DeleteOptionContext* deleteOption(size_t i);
    antlr4::tree::TerminalNode *UPDATE_SYMBOL();
    antlr4::tree::TerminalNode *DELETE_SYMBOL();
    antlr4::tree::TerminalNode *FULL_SYMBOL();
    antlr4::tree::TerminalNode *PARTIAL_SYMBOL();
    antlr4::tree::TerminalNode *SIMPLE_SYMBOL();

   
  };

  ReferencesContext* references();

  class PARSERS_PUBLIC_TYPE DeleteOptionContext : public antlr4::ParserRuleContext {
  public:
    DeleteOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESTRICT_SYMBOL();
    antlr4::tree::TerminalNode *CASCADE_SYMBOL();
    antlr4::tree::TerminalNode *SET_SYMBOL();
    NullLiteralContext *nullLiteral();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *NO_SYMBOL();
    antlr4::tree::TerminalNode *ACTION_SYMBOL();

   
  };

  DeleteOptionContext* deleteOption();

  class PARSERS_PUBLIC_TYPE KeyListContext : public antlr4::ParserRuleContext {
  public:
    KeyListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<KeyPartContext *> keyPart();
    KeyPartContext* keyPart(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  KeyListContext* keyList();

  class PARSERS_PUBLIC_TYPE KeyPartContext : public antlr4::ParserRuleContext {
  public:
    KeyPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    FieldLengthContext *fieldLength();
    DirectionContext *direction();

   
  };

  KeyPartContext* keyPart();

  class PARSERS_PUBLIC_TYPE KeyListWithExpressionContext : public antlr4::ParserRuleContext {
  public:
    KeyListWithExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<KeyPartOrExpressionContext *> keyPartOrExpression();
    KeyPartOrExpressionContext* keyPartOrExpression(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  KeyListWithExpressionContext* keyListWithExpression();

  class PARSERS_PUBLIC_TYPE KeyPartOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    KeyPartOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeyPartContext *keyPart();
    ExprWithParenthesesContext *exprWithParentheses();
    DirectionContext *direction();

   
  };

  KeyPartOrExpressionContext* keyPartOrExpression();

  class PARSERS_PUBLIC_TYPE KeyListVariantsContext : public antlr4::ParserRuleContext {
  public:
    KeyListVariantsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeyListWithExpressionContext *keyListWithExpression();
    KeyListContext *keyList();

   
  };

  KeyListVariantsContext* keyListVariants();

  class PARSERS_PUBLIC_TYPE IndexTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *algorithm = nullptr;
    IndexTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BTREE_SYMBOL();
    antlr4::tree::TerminalNode *RTREE_SYMBOL();
    antlr4::tree::TerminalNode *HASH_SYMBOL();

   
  };

  IndexTypeContext* indexType();

  class PARSERS_PUBLIC_TYPE IndexOptionContext : public antlr4::ParserRuleContext {
  public:
    IndexOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommonIndexOptionContext *commonIndexOption();
    IndexTypeClauseContext *indexTypeClause();

   
  };

  IndexOptionContext* indexOption();

  class PARSERS_PUBLIC_TYPE CommonIndexOptionContext : public antlr4::ParserRuleContext {
  public:
    CommonIndexOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_BLOCK_SIZE_SYMBOL();
    Ulong_numberContext *ulong_number();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();
    TextLiteralContext *textLiteral();
    VisibilityContext *visibility();
    antlr4::tree::TerminalNode *ENGINE_ATTRIBUTE_SYMBOL();
    JsonAttributeContext *jsonAttribute();
    antlr4::tree::TerminalNode *SECONDARY_ENGINE_ATTRIBUTE_SYMBOL();

   
  };

  CommonIndexOptionContext* commonIndexOption();

  class PARSERS_PUBLIC_TYPE VisibilityContext : public antlr4::ParserRuleContext {
  public:
    VisibilityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VISIBLE_SYMBOL();
    antlr4::tree::TerminalNode *INVISIBLE_SYMBOL();

   
  };

  VisibilityContext* visibility();

  class PARSERS_PUBLIC_TYPE IndexTypeClauseContext : public antlr4::ParserRuleContext {
  public:
    IndexTypeClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndexTypeContext *indexType();
    antlr4::tree::TerminalNode *USING_SYMBOL();
    antlr4::tree::TerminalNode *TYPE_SYMBOL();

   
  };

  IndexTypeClauseContext* indexTypeClause();

  class PARSERS_PUBLIC_TYPE FulltextIndexOptionContext : public antlr4::ParserRuleContext {
  public:
    FulltextIndexOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommonIndexOptionContext *commonIndexOption();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *PARSER_SYMBOL();
    IdentifierContext *identifier();

   
  };

  FulltextIndexOptionContext* fulltextIndexOption();

  class PARSERS_PUBLIC_TYPE SpatialIndexOptionContext : public antlr4::ParserRuleContext {
  public:
    SpatialIndexOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommonIndexOptionContext *commonIndexOption();

   
  };

  SpatialIndexOptionContext* spatialIndexOption();

  class PARSERS_PUBLIC_TYPE DataTypeDefinitionContext : public antlr4::ParserRuleContext {
  public:
    DataTypeDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *EOF();

   
  };

  DataTypeDefinitionContext* dataTypeDefinition();

  class PARSERS_PUBLIC_TYPE DataTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    DataTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_SYMBOL();
    antlr4::tree::TerminalNode *TINYINT_SYMBOL();
    antlr4::tree::TerminalNode *SMALLINT_SYMBOL();
    antlr4::tree::TerminalNode *MEDIUMINT_SYMBOL();
    antlr4::tree::TerminalNode *BIGINT_SYMBOL();
    FieldLengthContext *fieldLength();
    FieldOptionsContext *fieldOptions();
    antlr4::tree::TerminalNode *REAL_SYMBOL();
    antlr4::tree::TerminalNode *DOUBLE_SYMBOL();
    PrecisionContext *precision();
    antlr4::tree::TerminalNode *PRECISION_SYMBOL();
    antlr4::tree::TerminalNode *FLOAT_SYMBOL();
    antlr4::tree::TerminalNode *DECIMAL_SYMBOL();
    antlr4::tree::TerminalNode *NUMERIC_SYMBOL();
    antlr4::tree::TerminalNode *FIXED_SYMBOL();
    FloatOptionsContext *floatOptions();
    antlr4::tree::TerminalNode *BIT_SYMBOL();
    antlr4::tree::TerminalNode *BOOL_SYMBOL();
    antlr4::tree::TerminalNode *BOOLEAN_SYMBOL();
    antlr4::tree::TerminalNode *CHAR_SYMBOL();
    CharsetWithOptBinaryContext *charsetWithOptBinary();
    NcharContext *nchar();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();
    antlr4::tree::TerminalNode *VARYING_SYMBOL();
    antlr4::tree::TerminalNode *VARCHAR_SYMBOL();
    antlr4::tree::TerminalNode *NATIONAL_SYMBOL();
    antlr4::tree::TerminalNode *NVARCHAR_SYMBOL();
    antlr4::tree::TerminalNode *NCHAR_SYMBOL();
    antlr4::tree::TerminalNode *VARBINARY_SYMBOL();
    antlr4::tree::TerminalNode *YEAR_SYMBOL();
    antlr4::tree::TerminalNode *DATE_SYMBOL();
    antlr4::tree::TerminalNode *TIME_SYMBOL();
    TypeDatetimePrecisionContext *typeDatetimePrecision();
    antlr4::tree::TerminalNode *TIMESTAMP_SYMBOL();
    antlr4::tree::TerminalNode *DATETIME_SYMBOL();
    antlr4::tree::TerminalNode *TINYBLOB_SYMBOL();
    antlr4::tree::TerminalNode *BLOB_SYMBOL();
    antlr4::tree::TerminalNode *MEDIUMBLOB_SYMBOL();
    antlr4::tree::TerminalNode *LONGBLOB_SYMBOL();
    antlr4::tree::TerminalNode *LONG_SYMBOL();
    antlr4::tree::TerminalNode *TINYTEXT_SYMBOL();
    antlr4::tree::TerminalNode *TEXT_SYMBOL();
    antlr4::tree::TerminalNode *MEDIUMTEXT_SYMBOL();
    antlr4::tree::TerminalNode *LONGTEXT_SYMBOL();
    StringListContext *stringList();
    antlr4::tree::TerminalNode *ENUM_SYMBOL();
    antlr4::tree::TerminalNode *SET_SYMBOL();
    antlr4::tree::TerminalNode *SERIAL_SYMBOL();
    antlr4::tree::TerminalNode *JSON_SYMBOL();
    antlr4::tree::TerminalNode *GEOMETRY_SYMBOL();
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTION_SYMBOL();
    antlr4::tree::TerminalNode *POINT_SYMBOL();
    antlr4::tree::TerminalNode *MULTIPOINT_SYMBOL();
    antlr4::tree::TerminalNode *LINESTRING_SYMBOL();
    antlr4::tree::TerminalNode *MULTILINESTRING_SYMBOL();
    antlr4::tree::TerminalNode *POLYGON_SYMBOL();
    antlr4::tree::TerminalNode *MULTIPOLYGON_SYMBOL();

   
  };

  DataTypeContext* dataType();

  class PARSERS_PUBLIC_TYPE NcharContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    NcharContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NCHAR_SYMBOL();
    antlr4::tree::TerminalNode *CHAR_SYMBOL();
    antlr4::tree::TerminalNode *NATIONAL_SYMBOL();

   
  };

  NcharContext* nchar();

  class PARSERS_PUBLIC_TYPE RealTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    RealTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REAL_SYMBOL();
    antlr4::tree::TerminalNode *DOUBLE_SYMBOL();
    antlr4::tree::TerminalNode *PRECISION_SYMBOL();

   
  };

  RealTypeContext* realType();

  class PARSERS_PUBLIC_TYPE FieldLengthContext : public antlr4::ParserRuleContext {
  public:
    FieldLengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    Real_ulonglong_numberContext *real_ulonglong_number();
    antlr4::tree::TerminalNode *DECIMAL_NUMBER();

   
  };

  FieldLengthContext* fieldLength();

  class PARSERS_PUBLIC_TYPE FieldOptionsContext : public antlr4::ParserRuleContext {
  public:
    FieldOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SIGNED_SYMBOL();
    antlr4::tree::TerminalNode* SIGNED_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNSIGNED_SYMBOL();
    antlr4::tree::TerminalNode* UNSIGNED_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ZEROFILL_SYMBOL();
    antlr4::tree::TerminalNode* ZEROFILL_SYMBOL(size_t i);

   
  };

  FieldOptionsContext* fieldOptions();

  class PARSERS_PUBLIC_TYPE CharsetWithOptBinaryContext : public antlr4::ParserRuleContext {
  public:
    CharsetWithOptBinaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AsciiContext *ascii();
    UnicodeContext *unicode();
    antlr4::tree::TerminalNode *BYTE_SYMBOL();
    CharsetContext *charset();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();

   
  };

  CharsetWithOptBinaryContext* charsetWithOptBinary();

  class PARSERS_PUBLIC_TYPE AsciiContext : public antlr4::ParserRuleContext {
  public:
    AsciiContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASCII_SYMBOL();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();

   
  };

  AsciiContext* ascii();

  class PARSERS_PUBLIC_TYPE UnicodeContext : public antlr4::ParserRuleContext {
  public:
    UnicodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNICODE_SYMBOL();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();

   
  };

  UnicodeContext* unicode();

  class PARSERS_PUBLIC_TYPE WsNumCodepointsContext : public antlr4::ParserRuleContext {
  public:
    WsNumCodepointsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    Real_ulong_numberContext *real_ulong_number();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

   
  };

  WsNumCodepointsContext* wsNumCodepoints();

  class PARSERS_PUBLIC_TYPE TypeDatetimePrecisionContext : public antlr4::ParserRuleContext {
  public:
    TypeDatetimePrecisionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *INT_NUMBER();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

   
  };

  TypeDatetimePrecisionContext* typeDatetimePrecision();

  class PARSERS_PUBLIC_TYPE FunctionDatetimePrecisionContext : public antlr4::ParserRuleContext {
  public:
    FunctionDatetimePrecisionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParenthesesContext *parentheses();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *INT_NUMBER();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

   
  };

  FunctionDatetimePrecisionContext* functionDatetimePrecision();

  class PARSERS_PUBLIC_TYPE CharsetNameContext : public antlr4::ParserRuleContext {
  public:
    CharsetNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();

   
  };

  CharsetNameContext* charsetName();

  class PARSERS_PUBLIC_TYPE CollationNameContext : public antlr4::ParserRuleContext {
  public:
    CollationNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();

   
  };

  CollationNameContext* collationName();

  class PARSERS_PUBLIC_TYPE CreateTableOptionsContext : public antlr4::ParserRuleContext {
  public:
    CreateTableOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CreateTableOptionContext *> createTableOption();
    CreateTableOptionContext* createTableOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  CreateTableOptionsContext* createTableOptions();

  class PARSERS_PUBLIC_TYPE CreateTableOptionsEtcContext : public antlr4::ParserRuleContext {
  public:
    CreateTableOptionsEtcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CreateTableOptionsContext *createTableOptions();
    CreatePartitioningEtcContext *createPartitioningEtc();

   
  };

  CreateTableOptionsEtcContext* createTableOptionsEtc();

  class PARSERS_PUBLIC_TYPE CreatePartitioningEtcContext : public antlr4::ParserRuleContext {
  public:
    CreatePartitioningEtcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PartitionClauseContext *partitionClause();
    DuplicateAsQeContext *duplicateAsQe();

   
  };

  CreatePartitioningEtcContext* createPartitioningEtc();

  class PARSERS_PUBLIC_TYPE CreateTableOptionsSpaceSeparatedContext : public antlr4::ParserRuleContext {
  public:
    CreateTableOptionsSpaceSeparatedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CreateTableOptionContext *> createTableOption();
    CreateTableOptionContext* createTableOption(size_t i);

   
  };

  CreateTableOptionsSpaceSeparatedContext* createTableOptionsSpaceSeparated();

  class PARSERS_PUBLIC_TYPE CreateTableOptionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *option = nullptr;
    antlr4::Token *format = nullptr;
    antlr4::Token *method = nullptr;
    CreateTableOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EngineRefContext *engineRef();
    antlr4::tree::TerminalNode *ENGINE_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *SECONDARY_ENGINE_SYMBOL();
    antlr4::tree::TerminalNode *NULL_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    EqualContext *equal();
    Ulonglong_numberContext *ulonglong_number();
    antlr4::tree::TerminalNode *MAX_ROWS_SYMBOL();
    antlr4::tree::TerminalNode *MIN_ROWS_SYMBOL();
    antlr4::tree::TerminalNode *AVG_ROW_LENGTH_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();
    TextStringContext *textString();
    antlr4::tree::TerminalNode *COMPRESSION_SYMBOL();
    antlr4::tree::TerminalNode *ENCRYPTION_SYMBOL();
    antlr4::tree::TerminalNode *AUTO_INCREMENT_SYMBOL();
    TernaryOptionContext *ternaryOption();
    antlr4::tree::TerminalNode *PACK_KEYS_SYMBOL();
    antlr4::tree::TerminalNode *STATS_AUTO_RECALC_SYMBOL();
    antlr4::tree::TerminalNode *STATS_PERSISTENT_SYMBOL();
    antlr4::tree::TerminalNode *STATS_SAMPLE_PAGES_SYMBOL();
    Ulong_numberContext *ulong_number();
    antlr4::tree::TerminalNode *CHECKSUM_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_CHECKSUM_SYMBOL();
    antlr4::tree::TerminalNode *DELAY_KEY_WRITE_SYMBOL();
    antlr4::tree::TerminalNode *ROW_FORMAT_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *DYNAMIC_SYMBOL();
    antlr4::tree::TerminalNode *FIXED_SYMBOL();
    antlr4::tree::TerminalNode *COMPRESSED_SYMBOL();
    antlr4::tree::TerminalNode *REDUNDANT_SYMBOL();
    antlr4::tree::TerminalNode *COMPACT_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    TableRefListContext *tableRefList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *UNION_SYMBOL();
    DefaultCharsetContext *defaultCharset();
    DefaultCollationContext *defaultCollation();
    antlr4::tree::TerminalNode *INSERT_METHOD_SYMBOL();
    antlr4::tree::TerminalNode *NO_SYMBOL();
    antlr4::tree::TerminalNode *FIRST_SYMBOL();
    antlr4::tree::TerminalNode *LAST_SYMBOL();
    antlr4::tree::TerminalNode *DIRECTORY_SYMBOL();
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    antlr4::tree::TerminalNode *INDEX_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    antlr4::tree::TerminalNode *STORAGE_SYMBOL();
    antlr4::tree::TerminalNode *DISK_SYMBOL();
    antlr4::tree::TerminalNode *MEMORY_SYMBOL();
    antlr4::tree::TerminalNode *CONNECTION_SYMBOL();
    antlr4::tree::TerminalNode *KEY_BLOCK_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *TRANSACTION_SYMBOL();
    antlr4::tree::TerminalNode *START_SYMBOL();
    JsonAttributeContext *jsonAttribute();
    antlr4::tree::TerminalNode *ENGINE_ATTRIBUTE_SYMBOL();
    antlr4::tree::TerminalNode *SECONDARY_ENGINE_ATTRIBUTE_SYMBOL();
    TsOptionAutoextendSizeContext *tsOptionAutoextendSize();

   
  };

  CreateTableOptionContext* createTableOption();

  class PARSERS_PUBLIC_TYPE TernaryOptionContext : public antlr4::ParserRuleContext {
  public:
    TernaryOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ulong_numberContext *ulong_number();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();

   
  };

  TernaryOptionContext* ternaryOption();

  class PARSERS_PUBLIC_TYPE DefaultCollationContext : public antlr4::ParserRuleContext {
  public:
    DefaultCollationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLLATE_SYMBOL();
    CollationNameContext *collationName();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

   
  };

  DefaultCollationContext* defaultCollation();

  class PARSERS_PUBLIC_TYPE DefaultEncryptionContext : public antlr4::ParserRuleContext {
  public:
    DefaultEncryptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENCRYPTION_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

   
  };

  DefaultEncryptionContext* defaultEncryption();

  class PARSERS_PUBLIC_TYPE DefaultCharsetContext : public antlr4::ParserRuleContext {
  public:
    DefaultCharsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CharsetContext *charset();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

   
  };

  DefaultCharsetContext* defaultCharset();

  class PARSERS_PUBLIC_TYPE PartitionClauseContext : public antlr4::ParserRuleContext {
  public:
    PartitionClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    PartitionTypeDefContext *partitionTypeDef();
    antlr4::tree::TerminalNode *PARTITIONS_SYMBOL();
    Real_ulong_numberContext *real_ulong_number();
    SubPartitionsContext *subPartitions();
    PartitionDefinitionsContext *partitionDefinitions();

   
  };

  PartitionClauseContext* partitionClause();

  class PARSERS_PUBLIC_TYPE PartitionTypeDefContext : public antlr4::ParserRuleContext {
  public:
    PartitionTypeDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PartitionTypeDefContext() = default;
    void copyFrom(PartitionTypeDefContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class PARSERS_PUBLIC_TYPE PartitionDefRangeListContext : public PartitionTypeDefContext {
  public:
    PartitionDefRangeListContext(PartitionTypeDefContext *ctx);

    antlr4::tree::TerminalNode *RANGE_SYMBOL();
    antlr4::tree::TerminalNode *LIST_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    BitExprContext *bitExpr();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *COLUMNS_SYMBOL();
    IdentifierListContext *identifierList();
  };

  class PARSERS_PUBLIC_TYPE PartitionDefKeyContext : public PartitionTypeDefContext {
  public:
    PartitionDefKeyContext(PartitionTypeDefContext *ctx);

    antlr4::tree::TerminalNode *KEY_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *LINEAR_SYMBOL();
    PartitionKeyAlgorithmContext *partitionKeyAlgorithm();
    IdentifierListContext *identifierList();
  };

  class PARSERS_PUBLIC_TYPE PartitionDefHashContext : public PartitionTypeDefContext {
  public:
    PartitionDefHashContext(PartitionTypeDefContext *ctx);

    antlr4::tree::TerminalNode *HASH_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    BitExprContext *bitExpr();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *LINEAR_SYMBOL();
  };

  PartitionTypeDefContext* partitionTypeDef();

  class PARSERS_PUBLIC_TYPE SubPartitionsContext : public antlr4::ParserRuleContext {
  public:
    SubPartitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBPARTITION_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    antlr4::tree::TerminalNode *HASH_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    BitExprContext *bitExpr();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *KEY_SYMBOL();
    IdentifierListWithParenthesesContext *identifierListWithParentheses();
    antlr4::tree::TerminalNode *LINEAR_SYMBOL();
    antlr4::tree::TerminalNode *SUBPARTITIONS_SYMBOL();
    Real_ulong_numberContext *real_ulong_number();
    PartitionKeyAlgorithmContext *partitionKeyAlgorithm();

   
  };

  SubPartitionsContext* subPartitions();

  class PARSERS_PUBLIC_TYPE PartitionKeyAlgorithmContext : public antlr4::ParserRuleContext {
  public:
    PartitionKeyAlgorithmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALGORITHM_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    Real_ulong_numberContext *real_ulong_number();

   
  };

  PartitionKeyAlgorithmContext* partitionKeyAlgorithm();

  class PARSERS_PUBLIC_TYPE PartitionDefinitionsContext : public antlr4::ParserRuleContext {
  public:
    PartitionDefinitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<PartitionDefinitionContext *> partitionDefinition();
    PartitionDefinitionContext* partitionDefinition(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  PartitionDefinitionsContext* partitionDefinitions();

  class PARSERS_PUBLIC_TYPE PartitionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    PartitionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *VALUES_SYMBOL();
    antlr4::tree::TerminalNode *LESS_SYMBOL();
    antlr4::tree::TerminalNode *THAN_SYMBOL();
    antlr4::tree::TerminalNode *IN_SYMBOL();
    PartitionValuesInContext *partitionValuesIn();
    std::vector<PartitionOptionContext *> partitionOption();
    PartitionOptionContext* partitionOption(size_t i);
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<SubpartitionDefinitionContext *> subpartitionDefinition();
    SubpartitionDefinitionContext* subpartitionDefinition(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    PartitionValueItemListParenContext *partitionValueItemListParen();
    antlr4::tree::TerminalNode *MAXVALUE_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  PartitionDefinitionContext* partitionDefinition();

  class PARSERS_PUBLIC_TYPE PartitionValuesInContext : public antlr4::ParserRuleContext {
  public:
    PartitionValuesInContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PartitionValueItemListParenContext *> partitionValueItemListParen();
    PartitionValueItemListParenContext* partitionValueItemListParen(size_t i);
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  PartitionValuesInContext* partitionValuesIn();

  class PARSERS_PUBLIC_TYPE PartitionOptionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *option = nullptr;
    PartitionOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    EngineRefContext *engineRef();
    antlr4::tree::TerminalNode *ENGINE_SYMBOL();
    antlr4::tree::TerminalNode *STORAGE_SYMBOL();
    Real_ulong_numberContext *real_ulong_number();
    antlr4::tree::TerminalNode *NODEGROUP_SYMBOL();
    antlr4::tree::TerminalNode *MAX_ROWS_SYMBOL();
    antlr4::tree::TerminalNode *MIN_ROWS_SYMBOL();
    antlr4::tree::TerminalNode *DIRECTORY_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    antlr4::tree::TerminalNode *INDEX_SYMBOL();
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();

   
  };

  PartitionOptionContext* partitionOption();

  class PARSERS_PUBLIC_TYPE SubpartitionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    SubpartitionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBPARTITION_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    std::vector<PartitionOptionContext *> partitionOption();
    PartitionOptionContext* partitionOption(size_t i);

   
  };

  SubpartitionDefinitionContext* subpartitionDefinition();

  class PARSERS_PUBLIC_TYPE PartitionValueItemListParenContext : public antlr4::ParserRuleContext {
  public:
    PartitionValueItemListParenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<PartitionValueItemContext *> partitionValueItem();
    PartitionValueItemContext* partitionValueItem(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  PartitionValueItemListParenContext* partitionValueItemListParen();

  class PARSERS_PUBLIC_TYPE PartitionValueItemContext : public antlr4::ParserRuleContext {
  public:
    PartitionValueItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BitExprContext *bitExpr();
    antlr4::tree::TerminalNode *MAXVALUE_SYMBOL();

   
  };

  PartitionValueItemContext* partitionValueItem();

  class PARSERS_PUBLIC_TYPE DefinerClauseContext : public antlr4::ParserRuleContext {
  public:
    DefinerClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFINER_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    UserContext *user();

   
  };

  DefinerClauseContext* definerClause();

  class PARSERS_PUBLIC_TYPE IfExistsContext : public antlr4::ParserRuleContext {
  public:
    IfExistsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF_SYMBOL();
    antlr4::tree::TerminalNode *EXISTS_SYMBOL();

   
  };

  IfExistsContext* ifExists();

  class PARSERS_PUBLIC_TYPE IfNotExistsContext : public antlr4::ParserRuleContext {
  public:
    IfNotExistsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF_SYMBOL();
    NotRuleContext *notRule();
    antlr4::tree::TerminalNode *EXISTS_SYMBOL();

   
  };

  IfNotExistsContext* ifNotExists();

  class PARSERS_PUBLIC_TYPE IgnoreUnknownUserContext : public antlr4::ParserRuleContext {
  public:
    IgnoreUnknownUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();
    antlr4::tree::TerminalNode *UNKNOWN_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();

   
  };

  IgnoreUnknownUserContext* ignoreUnknownUser();

  class PARSERS_PUBLIC_TYPE ProcedureParameterContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    ProcedureParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionParameterContext *functionParameter();
    antlr4::tree::TerminalNode *IN_SYMBOL();
    antlr4::tree::TerminalNode *OUT_SYMBOL();
    antlr4::tree::TerminalNode *INOUT_SYMBOL();

   
  };

  ProcedureParameterContext* procedureParameter();

  class PARSERS_PUBLIC_TYPE FunctionParameterContext : public antlr4::ParserRuleContext {
  public:
    FunctionParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterNameContext *parameterName();
    TypeWithOptCollateContext *typeWithOptCollate();

   
  };

  FunctionParameterContext* functionParameter();

  class PARSERS_PUBLIC_TYPE CollateContext : public antlr4::ParserRuleContext {
  public:
    CollateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLLATE_SYMBOL();
    CollationNameContext *collationName();

   
  };

  CollateContext* collate();

  class PARSERS_PUBLIC_TYPE TypeWithOptCollateContext : public antlr4::ParserRuleContext {
  public:
    TypeWithOptCollateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    CollateContext *collate();

   
  };

  TypeWithOptCollateContext* typeWithOptCollate();

  class PARSERS_PUBLIC_TYPE SchemaIdentifierPairContext : public antlr4::ParserRuleContext {
  public:
    SchemaIdentifierPairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<SchemaRefContext *> schemaRef();
    SchemaRefContext* schemaRef(size_t i);
    antlr4::tree::TerminalNode *COMMA_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

   
  };

  SchemaIdentifierPairContext* schemaIdentifierPair();

  class PARSERS_PUBLIC_TYPE ViewRefListContext : public antlr4::ParserRuleContext {
  public:
    ViewRefListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ViewRefContext *> viewRef();
    ViewRefContext* viewRef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  ViewRefListContext* viewRefList();

  class PARSERS_PUBLIC_TYPE UpdateListContext : public antlr4::ParserRuleContext {
  public:
    UpdateListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UpdateElementContext *> updateElement();
    UpdateElementContext* updateElement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  UpdateListContext* updateList();

  class PARSERS_PUBLIC_TYPE UpdateElementContext : public antlr4::ParserRuleContext {
  public:
    UpdateElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnRefContext *columnRef();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    ExprContext *expr();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();

   
  };

  UpdateElementContext* updateElement();

  class PARSERS_PUBLIC_TYPE CharsetClauseContext : public antlr4::ParserRuleContext {
  public:
    CharsetClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CharsetContext *charset();
    CharsetNameContext *charsetName();

   
  };

  CharsetClauseContext* charsetClause();

  class PARSERS_PUBLIC_TYPE FieldsClauseContext : public antlr4::ParserRuleContext {
  public:
    FieldsClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLUMNS_SYMBOL();
    std::vector<FieldTermContext *> fieldTerm();
    FieldTermContext* fieldTerm(size_t i);

   
  };

  FieldsClauseContext* fieldsClause();

  class PARSERS_PUBLIC_TYPE FieldTermContext : public antlr4::ParserRuleContext {
  public:
    FieldTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TERMINATED_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    TextStringContext *textString();
    antlr4::tree::TerminalNode *ENCLOSED_SYMBOL();
    antlr4::tree::TerminalNode *OPTIONALLY_SYMBOL();
    antlr4::tree::TerminalNode *ESCAPED_SYMBOL();

   
  };

  FieldTermContext* fieldTerm();

  class PARSERS_PUBLIC_TYPE LinesClauseContext : public antlr4::ParserRuleContext {
  public:
    LinesClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LINES_SYMBOL();
    std::vector<LineTermContext *> lineTerm();
    LineTermContext* lineTerm(size_t i);

   
  };

  LinesClauseContext* linesClause();

  class PARSERS_PUBLIC_TYPE LineTermContext : public antlr4::ParserRuleContext {
  public:
    LineTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BY_SYMBOL();
    TextStringContext *textString();
    antlr4::tree::TerminalNode *TERMINATED_SYMBOL();
    antlr4::tree::TerminalNode *STARTING_SYMBOL();

   
  };

  LineTermContext* lineTerm();

  class PARSERS_PUBLIC_TYPE UserListContext : public antlr4::ParserRuleContext {
  public:
    UserListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UserContext *> user();
    UserContext* user(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  UserListContext* userList();

  class PARSERS_PUBLIC_TYPE CreateUserListContext : public antlr4::ParserRuleContext {
  public:
    CreateUserListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CreateUserContext *> createUser();
    CreateUserContext* createUser(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  CreateUserListContext* createUserList();

  class PARSERS_PUBLIC_TYPE CreateUserContext : public antlr4::ParserRuleContext {
  public:
    CreateUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserContext *user();
    IdentificationContext *identification();
    IdentifiedWithPluginContext *identifiedWithPlugin();
    CreateUserWithMfaContext *createUserWithMfa();
    InitialAuthContext *initialAuth();

   
  };

  CreateUserContext* createUser();

  class PARSERS_PUBLIC_TYPE CreateUserWithMfaContext : public antlr4::ParserRuleContext {
  public:
    CreateUserWithMfaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> AND_SYMBOL();
    antlr4::tree::TerminalNode* AND_SYMBOL(size_t i);
    std::vector<IdentificationContext *> identification();
    IdentificationContext* identification(size_t i);

   
  };

  CreateUserWithMfaContext* createUserWithMfa();

  class PARSERS_PUBLIC_TYPE IdentificationContext : public antlr4::ParserRuleContext {
  public:
    IdentificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifiedByPasswordContext *identifiedByPassword();
    IdentifiedByRandomPasswordContext *identifiedByRandomPassword();
    IdentifiedWithPluginContext *identifiedWithPlugin();
    IdentifiedWithPluginAsAuthContext *identifiedWithPluginAsAuth();
    IdentifiedWithPluginByPasswordContext *identifiedWithPluginByPassword();
    IdentifiedWithPluginByRandomPasswordContext *identifiedWithPluginByRandomPassword();

   
  };

  IdentificationContext* identification();

  class PARSERS_PUBLIC_TYPE IdentifiedByPasswordContext : public antlr4::ParserRuleContext {
  public:
    IdentifiedByPasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    TextStringLiteralContext *textStringLiteral();

   
  };

  IdentifiedByPasswordContext* identifiedByPassword();

  class PARSERS_PUBLIC_TYPE IdentifiedByRandomPasswordContext : public antlr4::ParserRuleContext {
  public:
    IdentifiedByRandomPasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    antlr4::tree::TerminalNode *RANDOM_SYMBOL();
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();

   
  };

  IdentifiedByRandomPasswordContext* identifiedByRandomPassword();

  class PARSERS_PUBLIC_TYPE IdentifiedWithPluginContext : public antlr4::ParserRuleContext {
  public:
    IdentifiedWithPluginContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();

   
  };

  IdentifiedWithPluginContext* identifiedWithPlugin();

  class PARSERS_PUBLIC_TYPE IdentifiedWithPluginAsAuthContext : public antlr4::ParserRuleContext {
  public:
    IdentifiedWithPluginAsAuthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *AS_SYMBOL();
    TextStringHashContext *textStringHash();

   
  };

  IdentifiedWithPluginAsAuthContext* identifiedWithPluginAsAuth();

  class PARSERS_PUBLIC_TYPE IdentifiedWithPluginByPasswordContext : public antlr4::ParserRuleContext {
  public:
    IdentifiedWithPluginByPasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    TextStringLiteralContext *textStringLiteral();

   
  };

  IdentifiedWithPluginByPasswordContext* identifiedWithPluginByPassword();

  class PARSERS_PUBLIC_TYPE IdentifiedWithPluginByRandomPasswordContext : public antlr4::ParserRuleContext {
  public:
    IdentifiedWithPluginByRandomPasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    antlr4::tree::TerminalNode *RANDOM_SYMBOL();
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();

   
  };

  IdentifiedWithPluginByRandomPasswordContext* identifiedWithPluginByRandomPassword();

  class PARSERS_PUBLIC_TYPE InitialAuthContext : public antlr4::ParserRuleContext {
  public:
    InitialAuthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INITIAL_SYMBOL();
    antlr4::tree::TerminalNode *AUTHENTICATION_SYMBOL();
    IdentifiedByRandomPasswordContext *identifiedByRandomPassword();
    IdentifiedWithPluginAsAuthContext *identifiedWithPluginAsAuth();
    IdentifiedByPasswordContext *identifiedByPassword();

   
  };

  InitialAuthContext* initialAuth();

  class PARSERS_PUBLIC_TYPE RetainCurrentPasswordContext : public antlr4::ParserRuleContext {
  public:
    RetainCurrentPasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETAIN_SYMBOL();
    antlr4::tree::TerminalNode *CURRENT_SYMBOL();
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();

   
  };

  RetainCurrentPasswordContext* retainCurrentPassword();

  class PARSERS_PUBLIC_TYPE DiscardOldPasswordContext : public antlr4::ParserRuleContext {
  public:
    DiscardOldPasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISCARD_SYMBOL();
    antlr4::tree::TerminalNode *OLD_SYMBOL();
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();

   
  };

  DiscardOldPasswordContext* discardOldPassword();

  class PARSERS_PUBLIC_TYPE UserRegistrationContext : public antlr4::ParserRuleContext {
  public:
    UserRegistrationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FactorContext *factor();
    antlr4::tree::TerminalNode *INITIATE_SYMBOL();
    antlr4::tree::TerminalNode *REGISTRATION_SYMBOL();
    antlr4::tree::TerminalNode *UNREGISTER_SYMBOL();
    antlr4::tree::TerminalNode *FINISH_SYMBOL();
    antlr4::tree::TerminalNode *SET_SYMBOL();
    antlr4::tree::TerminalNode *CHALLENGE_RESPONSE_SYMBOL();
    antlr4::tree::TerminalNode *AS_SYMBOL();
    TextStringHashContext *textStringHash();

   
  };

  UserRegistrationContext* userRegistration();

  class PARSERS_PUBLIC_TYPE FactorContext : public antlr4::ParserRuleContext {
  public:
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumLiteralContext *numLiteral();
    antlr4::tree::TerminalNode *FACTOR_SYMBOL();

   
  };

  FactorContext* factor();

  class PARSERS_PUBLIC_TYPE ReplacePasswordContext : public antlr4::ParserRuleContext {
  public:
    ReplacePasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPLACE_SYMBOL();
    TextStringContext *textString();

   
  };

  ReplacePasswordContext* replacePassword();

  class PARSERS_PUBLIC_TYPE UserIdentifierOrTextContext : public antlr4::ParserRuleContext {
  public:
    UserIdentifierOrTextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();
    UserVariableContext *userVariable();

   
  };

  UserIdentifierOrTextContext* userIdentifierOrText();

  class PARSERS_PUBLIC_TYPE UserContext : public antlr4::ParserRuleContext {
  public:
    UserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserIdentifierOrTextContext *userIdentifierOrText();
    antlr4::tree::TerminalNode *CURRENT_USER_SYMBOL();
    ParenthesesContext *parentheses();

   
  };

  UserContext* user();

  class PARSERS_PUBLIC_TYPE LikeClauseContext : public antlr4::ParserRuleContext {
  public:
    LikeClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIKE_SYMBOL();
    TextStringLiteralContext *textStringLiteral();

   
  };

  LikeClauseContext* likeClause();

  class PARSERS_PUBLIC_TYPE LikeOrWhereContext : public antlr4::ParserRuleContext {
  public:
    LikeOrWhereContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LikeClauseContext *likeClause();
    WhereClauseContext *whereClause();

   
  };

  LikeOrWhereContext* likeOrWhere();

  class PARSERS_PUBLIC_TYPE OnlineOptionContext : public antlr4::ParserRuleContext {
  public:
    OnlineOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ONLINE_SYMBOL();
    antlr4::tree::TerminalNode *OFFLINE_SYMBOL();

   
  };

  OnlineOptionContext* onlineOption();

  class PARSERS_PUBLIC_TYPE NoWriteToBinLogContext : public antlr4::ParserRuleContext {
  public:
    NoWriteToBinLogContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    antlr4::tree::TerminalNode *NO_WRITE_TO_BINLOG_SYMBOL();

   
  };

  NoWriteToBinLogContext* noWriteToBinLog();

  class PARSERS_PUBLIC_TYPE UsePartitionContext : public antlr4::ParserRuleContext {
  public:
    UsePartitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION_SYMBOL();
    IdentifierListWithParenthesesContext *identifierListWithParentheses();

   
  };

  UsePartitionContext* usePartition();

  class PARSERS_PUBLIC_TYPE FieldIdentifierContext : public antlr4::ParserRuleContext {
  public:
    FieldIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DotIdentifierContext *dotIdentifier();
    QualifiedIdentifierContext *qualifiedIdentifier();

   
  };

  FieldIdentifierContext* fieldIdentifier();

  class PARSERS_PUBLIC_TYPE ColumnNameContext : public antlr4::ParserRuleContext {
  public:
    ColumnNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

   
  };

  ColumnNameContext* columnName();

  class PARSERS_PUBLIC_TYPE ColumnInternalRefContext : public antlr4::ParserRuleContext {
  public:
    ColumnInternalRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

   
  };

  ColumnInternalRefContext* columnInternalRef();

  class PARSERS_PUBLIC_TYPE ColumnInternalRefListContext : public antlr4::ParserRuleContext {
  public:
    ColumnInternalRefListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<ColumnInternalRefContext *> columnInternalRef();
    ColumnInternalRefContext* columnInternalRef(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  ColumnInternalRefListContext* columnInternalRefList();

  class PARSERS_PUBLIC_TYPE ColumnRefContext : public antlr4::ParserRuleContext {
  public:
    ColumnRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FieldIdentifierContext *fieldIdentifier();

   
  };

  ColumnRefContext* columnRef();

  class PARSERS_PUBLIC_TYPE InsertIdentifierContext : public antlr4::ParserRuleContext {
  public:
    InsertIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnRefContext *columnRef();
    TableWildContext *tableWild();

   
  };

  InsertIdentifierContext* insertIdentifier();

  class PARSERS_PUBLIC_TYPE IndexNameContext : public antlr4::ParserRuleContext {
  public:
    IndexNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

   
  };

  IndexNameContext* indexName();

  class PARSERS_PUBLIC_TYPE IndexRefContext : public antlr4::ParserRuleContext {
  public:
    IndexRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FieldIdentifierContext *fieldIdentifier();

   
  };

  IndexRefContext* indexRef();

  class PARSERS_PUBLIC_TYPE TableWildContext : public antlr4::ParserRuleContext {
  public:
    TableWildContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT_SYMBOL();
    antlr4::tree::TerminalNode* DOT_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *MULT_OPERATOR();

   
  };

  TableWildContext* tableWild();

  class PARSERS_PUBLIC_TYPE SchemaNameContext : public antlr4::ParserRuleContext {
  public:
    SchemaNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

   
  };

  SchemaNameContext* schemaName();

  class PARSERS_PUBLIC_TYPE SchemaRefContext : public antlr4::ParserRuleContext {
  public:
    SchemaRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

   
  };

  SchemaRefContext* schemaRef();

  class PARSERS_PUBLIC_TYPE ProcedureNameContext : public antlr4::ParserRuleContext {
  public:
    ProcedureNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();

   
  };

  ProcedureNameContext* procedureName();

  class PARSERS_PUBLIC_TYPE ProcedureRefContext : public antlr4::ParserRuleContext {
  public:
    ProcedureRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();

   
  };

  ProcedureRefContext* procedureRef();

  class PARSERS_PUBLIC_TYPE FunctionNameContext : public antlr4::ParserRuleContext {
  public:
    FunctionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();

   
  };

  FunctionNameContext* functionName();

  class PARSERS_PUBLIC_TYPE FunctionRefContext : public antlr4::ParserRuleContext {
  public:
    FunctionRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();

   
  };

  FunctionRefContext* functionRef();

  class PARSERS_PUBLIC_TYPE TriggerNameContext : public antlr4::ParserRuleContext {
  public:
    TriggerNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();

   
  };

  TriggerNameContext* triggerName();

  class PARSERS_PUBLIC_TYPE TriggerRefContext : public antlr4::ParserRuleContext {
  public:
    TriggerRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();

   
  };

  TriggerRefContext* triggerRef();

  class PARSERS_PUBLIC_TYPE ViewNameContext : public antlr4::ParserRuleContext {
  public:
    ViewNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();
    DotIdentifierContext *dotIdentifier();

   
  };

  ViewNameContext* viewName();

  class PARSERS_PUBLIC_TYPE ViewRefContext : public antlr4::ParserRuleContext {
  public:
    ViewRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();
    DotIdentifierContext *dotIdentifier();

   
  };

  ViewRefContext* viewRef();

  class PARSERS_PUBLIC_TYPE TablespaceNameContext : public antlr4::ParserRuleContext {
  public:
    TablespaceNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

   
  };

  TablespaceNameContext* tablespaceName();

  class PARSERS_PUBLIC_TYPE TablespaceRefContext : public antlr4::ParserRuleContext {
  public:
    TablespaceRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

   
  };

  TablespaceRefContext* tablespaceRef();

  class PARSERS_PUBLIC_TYPE LogfileGroupNameContext : public antlr4::ParserRuleContext {
  public:
    LogfileGroupNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

   
  };

  LogfileGroupNameContext* logfileGroupName();

  class PARSERS_PUBLIC_TYPE LogfileGroupRefContext : public antlr4::ParserRuleContext {
  public:
    LogfileGroupRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

   
  };

  LogfileGroupRefContext* logfileGroupRef();

  class PARSERS_PUBLIC_TYPE EventNameContext : public antlr4::ParserRuleContext {
  public:
    EventNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();

   
  };

  EventNameContext* eventName();

  class PARSERS_PUBLIC_TYPE EventRefContext : public antlr4::ParserRuleContext {
  public:
    EventRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();

   
  };

  EventRefContext* eventRef();

  class PARSERS_PUBLIC_TYPE UdfNameContext : public antlr4::ParserRuleContext {
  public:
    UdfNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

   
  };

  UdfNameContext* udfName();

  class PARSERS_PUBLIC_TYPE ServerNameContext : public antlr4::ParserRuleContext {
  public:
    ServerNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();

   
  };

  ServerNameContext* serverName();

  class PARSERS_PUBLIC_TYPE ServerRefContext : public antlr4::ParserRuleContext {
  public:
    ServerRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();

   
  };

  ServerRefContext* serverRef();

  class PARSERS_PUBLIC_TYPE EngineRefContext : public antlr4::ParserRuleContext {
  public:
    EngineRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();

   
  };

  EngineRefContext* engineRef();

  class PARSERS_PUBLIC_TYPE TableNameContext : public antlr4::ParserRuleContext {
  public:
    TableNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();
    DotIdentifierContext *dotIdentifier();

   
  };

  TableNameContext* tableName();

  class PARSERS_PUBLIC_TYPE FilterTableRefContext : public antlr4::ParserRuleContext {
  public:
    FilterTableRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SchemaRefContext *schemaRef();
    DotIdentifierContext *dotIdentifier();

   
  };

  FilterTableRefContext* filterTableRef();

  class PARSERS_PUBLIC_TYPE TableRefWithWildcardContext : public antlr4::ParserRuleContext {
  public:
    TableRefWithWildcardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DOT_SYMBOL();
    antlr4::tree::TerminalNode *MULT_OPERATOR();
    DotIdentifierContext *dotIdentifier();

   
  };

  TableRefWithWildcardContext* tableRefWithWildcard();

  class PARSERS_PUBLIC_TYPE TableRefContext : public antlr4::ParserRuleContext {
  public:
    TableRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();
    DotIdentifierContext *dotIdentifier();

   
  };

  TableRefContext* tableRef();

  class PARSERS_PUBLIC_TYPE TableRefListContext : public antlr4::ParserRuleContext {
  public:
    TableRefListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableRefContext *> tableRef();
    TableRefContext* tableRef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  TableRefListContext* tableRefList();

  class PARSERS_PUBLIC_TYPE TableAliasRefListContext : public antlr4::ParserRuleContext {
  public:
    TableAliasRefListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableRefWithWildcardContext *> tableRefWithWildcard();
    TableRefWithWildcardContext* tableRefWithWildcard(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  TableAliasRefListContext* tableAliasRefList();

  class PARSERS_PUBLIC_TYPE ParameterNameContext : public antlr4::ParserRuleContext {
  public:
    ParameterNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

   
  };

  ParameterNameContext* parameterName();

  class PARSERS_PUBLIC_TYPE LabelIdentifierContext : public antlr4::ParserRuleContext {
  public:
    LabelIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PureIdentifierContext *pureIdentifier();
    LabelKeywordContext *labelKeyword();

   
  };

  LabelIdentifierContext* labelIdentifier();

  class PARSERS_PUBLIC_TYPE LabelRefContext : public antlr4::ParserRuleContext {
  public:
    LabelRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabelIdentifierContext *labelIdentifier();

   
  };

  LabelRefContext* labelRef();

  class PARSERS_PUBLIC_TYPE RoleIdentifierContext : public antlr4::ParserRuleContext {
  public:
    RoleIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PureIdentifierContext *pureIdentifier();
    RoleKeywordContext *roleKeyword();

   
  };

  RoleIdentifierContext* roleIdentifier();

  class PARSERS_PUBLIC_TYPE PluginRefContext : public antlr4::ParserRuleContext {
  public:
    PluginRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

   
  };

  PluginRefContext* pluginRef();

  class PARSERS_PUBLIC_TYPE ComponentRefContext : public antlr4::ParserRuleContext {
  public:
    ComponentRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextStringLiteralContext *textStringLiteral();

   
  };

  ComponentRefContext* componentRef();

  class PARSERS_PUBLIC_TYPE ResourceGroupRefContext : public antlr4::ParserRuleContext {
  public:
    ResourceGroupRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

   
  };

  ResourceGroupRefContext* resourceGroupRef();

  class PARSERS_PUBLIC_TYPE WindowNameContext : public antlr4::ParserRuleContext {
  public:
    WindowNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

   
  };

  WindowNameContext* windowName();

  class PARSERS_PUBLIC_TYPE PureIdentifierContext : public antlr4::ParserRuleContext {
  public:
    PureIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *BACK_TICK_QUOTED_ID();
    antlr4::tree::TerminalNode *DOUBLE_QUOTED_TEXT();

   
  };

  PureIdentifierContext* pureIdentifier();

  class PARSERS_PUBLIC_TYPE IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PureIdentifierContext *pureIdentifier();
    IdentifierKeywordContext *identifierKeyword();

   
  };

  IdentifierContext* identifier();

  class PARSERS_PUBLIC_TYPE IdentifierListContext : public antlr4::ParserRuleContext {
  public:
    IdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  IdentifierListContext* identifierList();

  class PARSERS_PUBLIC_TYPE IdentifierListWithParenthesesContext : public antlr4::ParserRuleContext {
  public:
    IdentifierListWithParenthesesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

   
  };

  IdentifierListWithParenthesesContext* identifierListWithParentheses();

  class PARSERS_PUBLIC_TYPE QualifiedIdentifierContext : public antlr4::ParserRuleContext {
  public:
    QualifiedIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    DotIdentifierContext *dotIdentifier();

   
  };

  QualifiedIdentifierContext* qualifiedIdentifier();

  class PARSERS_PUBLIC_TYPE SimpleIdentifierContext : public antlr4::ParserRuleContext {
  public:
    SimpleIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<DotIdentifierContext *> dotIdentifier();
    DotIdentifierContext* dotIdentifier(size_t i);

   
  };

  SimpleIdentifierContext* simpleIdentifier();

  class PARSERS_PUBLIC_TYPE DotIdentifierContext : public antlr4::ParserRuleContext {
  public:
    DotIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT_SYMBOL();
    IdentifierContext *identifier();

   
  };

  DotIdentifierContext* dotIdentifier();

  class PARSERS_PUBLIC_TYPE Ulong_numberContext : public antlr4::ParserRuleContext {
  public:
    Ulong_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_NUMBER();
    antlr4::tree::TerminalNode *HEX_NUMBER();
    antlr4::tree::TerminalNode *LONG_NUMBER();
    antlr4::tree::TerminalNode *ULONGLONG_NUMBER();
    antlr4::tree::TerminalNode *DECIMAL_NUMBER();
    antlr4::tree::TerminalNode *FLOAT_NUMBER();

   
  };

  Ulong_numberContext* ulong_number();

  class PARSERS_PUBLIC_TYPE Real_ulong_numberContext : public antlr4::ParserRuleContext {
  public:
    Real_ulong_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_NUMBER();
    antlr4::tree::TerminalNode *HEX_NUMBER();
    antlr4::tree::TerminalNode *LONG_NUMBER();
    antlr4::tree::TerminalNode *ULONGLONG_NUMBER();

   
  };

  Real_ulong_numberContext* real_ulong_number();

  class PARSERS_PUBLIC_TYPE Ulonglong_numberContext : public antlr4::ParserRuleContext {
  public:
    Ulonglong_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_NUMBER();
    antlr4::tree::TerminalNode *LONG_NUMBER();
    antlr4::tree::TerminalNode *ULONGLONG_NUMBER();
    antlr4::tree::TerminalNode *DECIMAL_NUMBER();
    antlr4::tree::TerminalNode *FLOAT_NUMBER();

   
  };

  Ulonglong_numberContext* ulonglong_number();

  class PARSERS_PUBLIC_TYPE Real_ulonglong_numberContext : public antlr4::ParserRuleContext {
  public:
    Real_ulonglong_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_NUMBER();
    antlr4::tree::TerminalNode *HEX_NUMBER();
    antlr4::tree::TerminalNode *ULONGLONG_NUMBER();
    antlr4::tree::TerminalNode *LONG_NUMBER();

   
  };

  Real_ulonglong_numberContext* real_ulonglong_number();

  class PARSERS_PUBLIC_TYPE SignedLiteralContext : public antlr4::ParserRuleContext {
  public:
    SignedLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    antlr4::tree::TerminalNode *PLUS_OPERATOR();
    Ulong_numberContext *ulong_number();
    antlr4::tree::TerminalNode *MINUS_OPERATOR();

   
  };

  SignedLiteralContext* signedLiteral();

  class PARSERS_PUBLIC_TYPE SignedLiteralOrNullContext : public antlr4::ParserRuleContext {
  public:
    SignedLiteralOrNullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SignedLiteralContext *signedLiteral();
    NullAsLiteralContext *nullAsLiteral();

   
  };

  SignedLiteralOrNullContext* signedLiteralOrNull();

  class PARSERS_PUBLIC_TYPE LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextLiteralContext *textLiteral();
    NumLiteralContext *numLiteral();
    TemporalLiteralContext *temporalLiteral();
    NullLiteralContext *nullLiteral();
    BoolLiteralContext *boolLiteral();
    antlr4::tree::TerminalNode *HEX_NUMBER();
    antlr4::tree::TerminalNode *BIN_NUMBER();
    antlr4::tree::TerminalNode *UNDERSCORE_CHARSET();

   
  };

  LiteralContext* literal();

  class PARSERS_PUBLIC_TYPE LiteralOrNullContext : public antlr4::ParserRuleContext {
  public:
    LiteralOrNullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    NullAsLiteralContext *nullAsLiteral();

   
  };

  LiteralOrNullContext* literalOrNull();

  class PARSERS_PUBLIC_TYPE NullAsLiteralContext : public antlr4::ParserRuleContext {
  public:
    NullAsLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_SYMBOL();

   
  };

  NullAsLiteralContext* nullAsLiteral();

  class PARSERS_PUBLIC_TYPE StringListContext : public antlr4::ParserRuleContext {
  public:
    StringListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<TextStringContext *> textString();
    TextStringContext* textString(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  StringListContext* stringList();

  class PARSERS_PUBLIC_TYPE TextStringLiteralContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *value = nullptr;
    TextStringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SINGLE_QUOTED_TEXT();
    antlr4::tree::TerminalNode *DOUBLE_QUOTED_TEXT();

   
  };

  TextStringLiteralContext* textStringLiteral();

  class PARSERS_PUBLIC_TYPE TextStringContext : public antlr4::ParserRuleContext {
  public:
    TextStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *HEX_NUMBER();
    antlr4::tree::TerminalNode *BIN_NUMBER();

   
  };

  TextStringContext* textString();

  class PARSERS_PUBLIC_TYPE TextStringHashContext : public antlr4::ParserRuleContext {
  public:
    TextStringHashContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *HEX_NUMBER();

   
  };

  TextStringHashContext* textStringHash();

  class PARSERS_PUBLIC_TYPE TextLiteralContext : public antlr4::ParserRuleContext {
  public:
    TextLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TextStringLiteralContext *> textStringLiteral();
    TextStringLiteralContext* textStringLiteral(size_t i);
    antlr4::tree::TerminalNode *NCHAR_TEXT();
    antlr4::tree::TerminalNode *UNDERSCORE_CHARSET();

   
  };

  TextLiteralContext* textLiteral();

  class PARSERS_PUBLIC_TYPE TextStringNoLinebreakContext : public antlr4::ParserRuleContext {
  public:
    TextStringNoLinebreakContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextStringLiteralContext *textStringLiteral();

   
  };

  TextStringNoLinebreakContext* textStringNoLinebreak();

  class PARSERS_PUBLIC_TYPE TextStringLiteralListContext : public antlr4::ParserRuleContext {
  public:
    TextStringLiteralListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TextStringLiteralContext *> textStringLiteral();
    TextStringLiteralContext* textStringLiteral(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

   
  };

  TextStringLiteralListContext* textStringLiteralList();

  class PARSERS_PUBLIC_TYPE NumLiteralContext : public antlr4::ParserRuleContext {
  public:
    NumLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Int64LiteralContext *int64Literal();
    antlr4::tree::TerminalNode *DECIMAL_NUMBER();
    antlr4::tree::TerminalNode *FLOAT_NUMBER();

   
  };

  NumLiteralContext* numLiteral();

  class PARSERS_PUBLIC_TYPE BoolLiteralContext : public antlr4::ParserRuleContext {
  public:
    BoolLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE_SYMBOL();
    antlr4::tree::TerminalNode *FALSE_SYMBOL();

   
  };

  BoolLiteralContext* boolLiteral();

  class PARSERS_PUBLIC_TYPE NullLiteralContext : public antlr4::ParserRuleContext {
  public:
    NullLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_SYMBOL();
    antlr4::tree::TerminalNode *NULL2_SYMBOL();

   
  };

  NullLiteralContext* nullLiteral();

  class PARSERS_PUBLIC_TYPE Int64LiteralContext : public antlr4::ParserRuleContext {
  public:
    Int64LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_NUMBER();
    antlr4::tree::TerminalNode *LONG_NUMBER();
    antlr4::tree::TerminalNode *ULONGLONG_NUMBER();

   
  };

  Int64LiteralContext* int64Literal();

  class PARSERS_PUBLIC_TYPE TemporalLiteralContext : public antlr4::ParserRuleContext {
  public:
    TemporalLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATE_SYMBOL();
    antlr4::tree::TerminalNode *SINGLE_QUOTED_TEXT();
    antlr4::tree::TerminalNode *TIME_SYMBOL();
    antlr4::tree::TerminalNode *TIMESTAMP_SYMBOL();

   
  };

  TemporalLiteralContext* temporalLiteral();

  class PARSERS_PUBLIC_TYPE FloatOptionsContext : public antlr4::ParserRuleContext {
  public:
    FloatOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FieldLengthContext *fieldLength();
    PrecisionContext *precision();

   
  };

  FloatOptionsContext* floatOptions();

  class PARSERS_PUBLIC_TYPE StandardFloatOptionsContext : public antlr4::ParserRuleContext {
  public:
    StandardFloatOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrecisionContext *precision();

   
  };

  StandardFloatOptionsContext* standardFloatOptions();

  class PARSERS_PUBLIC_TYPE PrecisionContext : public antlr4::ParserRuleContext {
  public:
    PrecisionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> INT_NUMBER();
    antlr4::tree::TerminalNode* INT_NUMBER(size_t i);
    antlr4::tree::TerminalNode *COMMA_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

   
  };

  PrecisionContext* precision();

  class PARSERS_PUBLIC_TYPE TextOrIdentifierContext : public antlr4::ParserRuleContext {
  public:
    TextOrIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    TextStringLiteralContext *textStringLiteral();

   
  };

  TextOrIdentifierContext* textOrIdentifier();

  class PARSERS_PUBLIC_TYPE LValueIdentifierContext : public antlr4::ParserRuleContext {
  public:
    LValueIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PureIdentifierContext *pureIdentifier();
    LValueKeywordContext *lValueKeyword();

   
  };

  LValueIdentifierContext* lValueIdentifier();

  class PARSERS_PUBLIC_TYPE RoleIdentifierOrTextContext : public antlr4::ParserRuleContext {
  public:
    RoleIdentifierOrTextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RoleIdentifierContext *roleIdentifier();
    TextStringLiteralContext *textStringLiteral();

   
  };

  RoleIdentifierOrTextContext* roleIdentifierOrText();

  class PARSERS_PUBLIC_TYPE SizeNumberContext : public antlr4::ParserRuleContext {
  public:
    SizeNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Real_ulonglong_numberContext *real_ulonglong_number();
    PureIdentifierContext *pureIdentifier();

   
  };

  SizeNumberContext* sizeNumber();

  class PARSERS_PUBLIC_TYPE ParenthesesContext : public antlr4::ParserRuleContext {
  public:
    ParenthesesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

   
  };

  ParenthesesContext* parentheses();

  class PARSERS_PUBLIC_TYPE EqualContext : public antlr4::ParserRuleContext {
  public:
    EqualContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *ASSIGN_OPERATOR();

   
  };

  EqualContext* equal();

  class PARSERS_PUBLIC_TYPE OptionTypeContext : public antlr4::ParserRuleContext {
  public:
    OptionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PERSIST_SYMBOL();
    antlr4::tree::TerminalNode *PERSIST_ONLY_SYMBOL();
    antlr4::tree::TerminalNode *GLOBAL_SYMBOL();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    antlr4::tree::TerminalNode *SESSION_SYMBOL();

   
  };

  OptionTypeContext* optionType();

  class PARSERS_PUBLIC_TYPE RvalueSystemVariableTypeContext : public antlr4::ParserRuleContext {
  public:
    RvalueSystemVariableTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GLOBAL_SYMBOL();
    antlr4::tree::TerminalNode *DOT_SYMBOL();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    antlr4::tree::TerminalNode *SESSION_SYMBOL();

   
  };

  RvalueSystemVariableTypeContext* rvalueSystemVariableType();

  class PARSERS_PUBLIC_TYPE SetVarIdentTypeContext : public antlr4::ParserRuleContext {
  public:
    SetVarIdentTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT_SYMBOL();
    antlr4::tree::TerminalNode *PERSIST_SYMBOL();
    antlr4::tree::TerminalNode *PERSIST_ONLY_SYMBOL();
    antlr4::tree::TerminalNode *GLOBAL_SYMBOL();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    antlr4::tree::TerminalNode *SESSION_SYMBOL();

   
  };

  SetVarIdentTypeContext* setVarIdentType();

  class PARSERS_PUBLIC_TYPE JsonAttributeContext : public antlr4::ParserRuleContext {
  public:
    JsonAttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextStringLiteralContext *textStringLiteral();

   
  };

  JsonAttributeContext* jsonAttribute();

  class PARSERS_PUBLIC_TYPE IdentifierKeywordContext : public antlr4::ParserRuleContext {
  public:
    IdentifierKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabelKeywordContext *labelKeyword();
    RoleOrIdentifierKeywordContext *roleOrIdentifierKeyword();
    antlr4::tree::TerminalNode *EXECUTE_SYMBOL();
    antlr4::tree::TerminalNode *SHUTDOWN_SYMBOL();
    antlr4::tree::TerminalNode *RESTART_SYMBOL();
    IdentifierKeywordsUnambiguousContext *identifierKeywordsUnambiguous();
    IdentifierKeywordsAmbiguous1RolesAndLabelsContext *identifierKeywordsAmbiguous1RolesAndLabels();
    IdentifierKeywordsAmbiguous2LabelsContext *identifierKeywordsAmbiguous2Labels();
    IdentifierKeywordsAmbiguous3RolesContext *identifierKeywordsAmbiguous3Roles();
    IdentifierKeywordsAmbiguous4SystemVariablesContext *identifierKeywordsAmbiguous4SystemVariables();

   
  };

  IdentifierKeywordContext* identifierKeyword();

  class PARSERS_PUBLIC_TYPE IdentifierKeywordsAmbiguous1RolesAndLabelsContext : public antlr4::ParserRuleContext {
  public:
    IdentifierKeywordsAmbiguous1RolesAndLabelsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXECUTE_SYMBOL();
    antlr4::tree::TerminalNode *RESTART_SYMBOL();
    antlr4::tree::TerminalNode *SHUTDOWN_SYMBOL();

   
  };

  IdentifierKeywordsAmbiguous1RolesAndLabelsContext* identifierKeywordsAmbiguous1RolesAndLabels();

  class PARSERS_PUBLIC_TYPE IdentifierKeywordsAmbiguous2LabelsContext : public antlr4::ParserRuleContext {
  public:
    IdentifierKeywordsAmbiguous2LabelsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASCII_SYMBOL();
    antlr4::tree::TerminalNode *BEGIN_SYMBOL();
    antlr4::tree::TerminalNode *BYTE_SYMBOL();
    antlr4::tree::TerminalNode *CACHE_SYMBOL();
    antlr4::tree::TerminalNode *CHARSET_SYMBOL();
    antlr4::tree::TerminalNode *CHECKSUM_SYMBOL();
    antlr4::tree::TerminalNode *CLONE_SYMBOL();
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();
    antlr4::tree::TerminalNode *COMMIT_SYMBOL();
    antlr4::tree::TerminalNode *CONTAINS_SYMBOL();
    antlr4::tree::TerminalNode *DEALLOCATE_SYMBOL();
    antlr4::tree::TerminalNode *DO_SYMBOL();
    antlr4::tree::TerminalNode *END_SYMBOL();
    antlr4::tree::TerminalNode *FLUSH_SYMBOL();
    antlr4::tree::TerminalNode *FOLLOWS_SYMBOL();
    antlr4::tree::TerminalNode *HANDLER_SYMBOL();
    antlr4::tree::TerminalNode *HELP_SYMBOL();
    antlr4::tree::TerminalNode *IMPORT_SYMBOL();
    antlr4::tree::TerminalNode *INSTALL_SYMBOL();
    antlr4::tree::TerminalNode *LANGUAGE_SYMBOL();
    antlr4::tree::TerminalNode *NO_SYMBOL();
    antlr4::tree::TerminalNode *PRECEDES_SYMBOL();
    antlr4::tree::TerminalNode *PREPARE_SYMBOL();
    antlr4::tree::TerminalNode *REPAIR_SYMBOL();
    antlr4::tree::TerminalNode *RESET_SYMBOL();
    antlr4::tree::TerminalNode *ROLLBACK_SYMBOL();
    antlr4::tree::TerminalNode *SAVEPOINT_SYMBOL();
    antlr4::tree::TerminalNode *SIGNED_SYMBOL();
    antlr4::tree::TerminalNode *SLAVE_SYMBOL();
    antlr4::tree::TerminalNode *START_SYMBOL();
    antlr4::tree::TerminalNode *STOP_SYMBOL();
    antlr4::tree::TerminalNode *TRUNCATE_SYMBOL();
    antlr4::tree::TerminalNode *UNICODE_SYMBOL();
    antlr4::tree::TerminalNode *UNINSTALL_SYMBOL();
    antlr4::tree::TerminalNode *XA_SYMBOL();

   
  };

  IdentifierKeywordsAmbiguous2LabelsContext* identifierKeywordsAmbiguous2Labels();

  class PARSERS_PUBLIC_TYPE LabelKeywordContext : public antlr4::ParserRuleContext {
  public:
    LabelKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RoleOrLabelKeywordContext *roleOrLabelKeyword();
    antlr4::tree::TerminalNode *EVENT_SYMBOL();
    antlr4::tree::TerminalNode *FILE_SYMBOL();
    antlr4::tree::TerminalNode *NONE_SYMBOL();
    antlr4::tree::TerminalNode *PROCESS_SYMBOL();
    antlr4::tree::TerminalNode *PROXY_SYMBOL();
    antlr4::tree::TerminalNode *RELOAD_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATION_SYMBOL();
    antlr4::tree::TerminalNode *RESOURCE_SYMBOL();
    antlr4::tree::TerminalNode *SUPER_SYMBOL();
    IdentifierKeywordsUnambiguousContext *identifierKeywordsUnambiguous();
    IdentifierKeywordsAmbiguous3RolesContext *identifierKeywordsAmbiguous3Roles();
    IdentifierKeywordsAmbiguous4SystemVariablesContext *identifierKeywordsAmbiguous4SystemVariables();

   
  };

  LabelKeywordContext* labelKeyword();

  class PARSERS_PUBLIC_TYPE IdentifierKeywordsAmbiguous3RolesContext : public antlr4::ParserRuleContext {
  public:
    IdentifierKeywordsAmbiguous3RolesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVENT_SYMBOL();
    antlr4::tree::TerminalNode *FILE_SYMBOL();
    antlr4::tree::TerminalNode *NONE_SYMBOL();
    antlr4::tree::TerminalNode *PROCESS_SYMBOL();
    antlr4::tree::TerminalNode *PROXY_SYMBOL();
    antlr4::tree::TerminalNode *RELOAD_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATION_SYMBOL();
    antlr4::tree::TerminalNode *RESOURCE_SYMBOL();
    antlr4::tree::TerminalNode *SUPER_SYMBOL();

   
  };

  IdentifierKeywordsAmbiguous3RolesContext* identifierKeywordsAmbiguous3Roles();

  class PARSERS_PUBLIC_TYPE IdentifierKeywordsUnambiguousContext : public antlr4::ParserRuleContext {
  public:
    IdentifierKeywordsUnambiguousContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACTION_SYMBOL();
    antlr4::tree::TerminalNode *ACCOUNT_SYMBOL();
    antlr4::tree::TerminalNode *ACTIVE_SYMBOL();
    antlr4::tree::TerminalNode *ADDDATE_SYMBOL();
    antlr4::tree::TerminalNode *ADMIN_SYMBOL();
    antlr4::tree::TerminalNode *AFTER_SYMBOL();
    antlr4::tree::TerminalNode *AGAINST_SYMBOL();
    antlr4::tree::TerminalNode *AGGREGATE_SYMBOL();
    antlr4::tree::TerminalNode *ALGORITHM_SYMBOL();
    antlr4::tree::TerminalNode *ALWAYS_SYMBOL();
    antlr4::tree::TerminalNode *ANY_SYMBOL();
    antlr4::tree::TerminalNode *AT_SYMBOL();
    antlr4::tree::TerminalNode *ATTRIBUTE_SYMBOL();
    antlr4::tree::TerminalNode *AUTHENTICATION_SYMBOL();
    antlr4::tree::TerminalNode *AUTOEXTEND_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *AUTO_INCREMENT_SYMBOL();
    antlr4::tree::TerminalNode *AVG_ROW_LENGTH_SYMBOL();
    antlr4::tree::TerminalNode *AVG_SYMBOL();
    antlr4::tree::TerminalNode *BACKUP_SYMBOL();
    antlr4::tree::TerminalNode *BINLOG_SYMBOL();
    antlr4::tree::TerminalNode *BIT_SYMBOL();
    antlr4::tree::TerminalNode *BLOCK_SYMBOL();
    antlr4::tree::TerminalNode *BOOLEAN_SYMBOL();
    antlr4::tree::TerminalNode *BOOL_SYMBOL();
    antlr4::tree::TerminalNode *BTREE_SYMBOL();
    antlr4::tree::TerminalNode *BUCKETS_SYMBOL();
    antlr4::tree::TerminalNode *CASCADED_SYMBOL();
    antlr4::tree::TerminalNode *CATALOG_NAME_SYMBOL();
    antlr4::tree::TerminalNode *CHAIN_SYMBOL();
    antlr4::tree::TerminalNode *CHALLENGE_RESPONSE_SYMBOL();
    antlr4::tree::TerminalNode *CHANGED_SYMBOL();
    antlr4::tree::TerminalNode *CHANNEL_SYMBOL();
    antlr4::tree::TerminalNode *CIPHER_SYMBOL();
    antlr4::tree::TerminalNode *CLASS_ORIGIN_SYMBOL();
    antlr4::tree::TerminalNode *CLIENT_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_SYMBOL();
    antlr4::tree::TerminalNode *COALESCE_SYMBOL();
    antlr4::tree::TerminalNode *CODE_SYMBOL();
    antlr4::tree::TerminalNode *COLLATION_SYMBOL();
    antlr4::tree::TerminalNode *COLUMNS_SYMBOL();
    antlr4::tree::TerminalNode *COLUMN_FORMAT_SYMBOL();
    antlr4::tree::TerminalNode *COLUMN_NAME_SYMBOL();
    antlr4::tree::TerminalNode *COMMITTED_SYMBOL();
    antlr4::tree::TerminalNode *COMPACT_SYMBOL();
    antlr4::tree::TerminalNode *COMPLETION_SYMBOL();
    antlr4::tree::TerminalNode *COMPONENT_SYMBOL();
    antlr4::tree::TerminalNode *COMPRESSED_SYMBOL();
    antlr4::tree::TerminalNode *COMPRESSION_SYMBOL();
    antlr4::tree::TerminalNode *CONCURRENT_SYMBOL();
    antlr4::tree::TerminalNode *CONNECTION_SYMBOL();
    antlr4::tree::TerminalNode *CONSISTENT_SYMBOL();
    antlr4::tree::TerminalNode *CONSTRAINT_CATALOG_SYMBOL();
    antlr4::tree::TerminalNode *CONSTRAINT_NAME_SYMBOL();
    antlr4::tree::TerminalNode *CONSTRAINT_SCHEMA_SYMBOL();
    antlr4::tree::TerminalNode *CONTEXT_SYMBOL();
    antlr4::tree::TerminalNode *CPU_SYMBOL();
    antlr4::tree::TerminalNode *CURRENT_SYMBOL();
    antlr4::tree::TerminalNode *CURSOR_NAME_SYMBOL();
    antlr4::tree::TerminalNode *DATAFILE_SYMBOL();
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    antlr4::tree::TerminalNode *DATETIME_SYMBOL();
    antlr4::tree::TerminalNode *DATE_SYMBOL();
    antlr4::tree::TerminalNode *DAY_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_AUTH_SYMBOL();
    antlr4::tree::TerminalNode *DEFINER_SYMBOL();
    antlr4::tree::TerminalNode *DEFINITION_SYMBOL();
    antlr4::tree::TerminalNode *DELAY_KEY_WRITE_SYMBOL();
    antlr4::tree::TerminalNode *DESCRIPTION_SYMBOL();
    antlr4::tree::TerminalNode *DIAGNOSTICS_SYMBOL();
    antlr4::tree::TerminalNode *DIRECTORY_SYMBOL();
    antlr4::tree::TerminalNode *DISABLE_SYMBOL();
    antlr4::tree::TerminalNode *DISCARD_SYMBOL();
    antlr4::tree::TerminalNode *DISK_SYMBOL();
    antlr4::tree::TerminalNode *DUMPFILE_SYMBOL();
    antlr4::tree::TerminalNode *DUPLICATE_SYMBOL();
    antlr4::tree::TerminalNode *DYNAMIC_SYMBOL();
    antlr4::tree::TerminalNode *ENABLE_SYMBOL();
    antlr4::tree::TerminalNode *ENCRYPTION_SYMBOL();
    antlr4::tree::TerminalNode *ENDS_SYMBOL();
    antlr4::tree::TerminalNode *ENFORCED_SYMBOL();
    antlr4::tree::TerminalNode *ENGINES_SYMBOL();
    antlr4::tree::TerminalNode *ENGINE_SYMBOL();
    antlr4::tree::TerminalNode *ENUM_SYMBOL();
    antlr4::tree::TerminalNode *ERRORS_SYMBOL();
    antlr4::tree::TerminalNode *ERROR_SYMBOL();
    antlr4::tree::TerminalNode *ESCAPE_SYMBOL();
    antlr4::tree::TerminalNode *EVENTS_SYMBOL();
    antlr4::tree::TerminalNode *EVERY_SYMBOL();
    antlr4::tree::TerminalNode *EXCHANGE_SYMBOL();
    antlr4::tree::TerminalNode *EXCLUDE_SYMBOL();
    antlr4::tree::TerminalNode *EXPANSION_SYMBOL();
    antlr4::tree::TerminalNode *EXPIRE_SYMBOL();
    antlr4::tree::TerminalNode *EXPORT_SYMBOL();
    antlr4::tree::TerminalNode *EXTENDED_SYMBOL();
    antlr4::tree::TerminalNode *EXTENT_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *FACTOR_SYMBOL();
    antlr4::tree::TerminalNode *FAST_SYMBOL();
    antlr4::tree::TerminalNode *FAULTS_SYMBOL();
    antlr4::tree::TerminalNode *FILE_BLOCK_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *FILTER_SYMBOL();
    antlr4::tree::TerminalNode *FINISH_SYMBOL();
    antlr4::tree::TerminalNode *FIRST_SYMBOL();
    antlr4::tree::TerminalNode *FIXED_SYMBOL();
    antlr4::tree::TerminalNode *FOLLOWING_SYMBOL();
    antlr4::tree::TerminalNode *FORMAT_SYMBOL();
    antlr4::tree::TerminalNode *FOUND_SYMBOL();
    antlr4::tree::TerminalNode *FULL_SYMBOL();
    antlr4::tree::TerminalNode *GENERAL_SYMBOL();
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTION_SYMBOL();
    antlr4::tree::TerminalNode *GEOMETRY_SYMBOL();
    antlr4::tree::TerminalNode *GET_FORMAT_SYMBOL();
    antlr4::tree::TerminalNode *GET_MASTER_PUBLIC_KEY_SYMBOL();
    antlr4::tree::TerminalNode *GET_SOURCE_PUBLIC_KEY_SYMBOL();
    antlr4::tree::TerminalNode *GRANTS_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_REPLICATION_SYMBOL();
    antlr4::tree::TerminalNode *GTID_ONLY_SYMBOL();
    antlr4::tree::TerminalNode *HASH_SYMBOL();
    antlr4::tree::TerminalNode *HISTOGRAM_SYMBOL();
    antlr4::tree::TerminalNode *HISTORY_SYMBOL();
    antlr4::tree::TerminalNode *HOSTS_SYMBOL();
    antlr4::tree::TerminalNode *HOST_SYMBOL();
    antlr4::tree::TerminalNode *HOUR_SYMBOL();
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    antlr4::tree::TerminalNode *IGNORE_SERVER_IDS_SYMBOL();
    antlr4::tree::TerminalNode *INACTIVE_SYMBOL();
    antlr4::tree::TerminalNode *INDEXES_SYMBOL();
    antlr4::tree::TerminalNode *INITIAL_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *INITIAL_SYMBOL();
    antlr4::tree::TerminalNode *INITIATE_SYMBOL();
    antlr4::tree::TerminalNode *INSERT_METHOD_SYMBOL();
    antlr4::tree::TerminalNode *INSTANCE_SYMBOL();
    antlr4::tree::TerminalNode *INVISIBLE_SYMBOL();
    antlr4::tree::TerminalNode *INVOKER_SYMBOL();
    antlr4::tree::TerminalNode *IO_SYMBOL();
    antlr4::tree::TerminalNode *IPC_SYMBOL();
    antlr4::tree::TerminalNode *ISOLATION_SYMBOL();
    antlr4::tree::TerminalNode *ISSUER_SYMBOL();
    antlr4::tree::TerminalNode *JSON_SYMBOL();
    antlr4::tree::TerminalNode *JSON_VALUE_SYMBOL();
    antlr4::tree::TerminalNode *KEY_BLOCK_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *KEYRING_SYMBOL();
    antlr4::tree::TerminalNode *LAST_SYMBOL();
    antlr4::tree::TerminalNode *LEAVES_SYMBOL();
    antlr4::tree::TerminalNode *LESS_SYMBOL();
    antlr4::tree::TerminalNode *LEVEL_SYMBOL();
    antlr4::tree::TerminalNode *LINESTRING_SYMBOL();
    antlr4::tree::TerminalNode *LIST_SYMBOL();
    antlr4::tree::TerminalNode *LOCKED_SYMBOL();
    antlr4::tree::TerminalNode *LOCKS_SYMBOL();
    antlr4::tree::TerminalNode *LOGFILE_SYMBOL();
    antlr4::tree::TerminalNode *LOGS_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_AUTO_POSITION_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_COMPRESSION_ALGORITHM_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_CONNECT_RETRY_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_DELAY_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_HEARTBEAT_PERIOD_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_HOST_SYMBOL();
    antlr4::tree::TerminalNode *NETWORK_NAMESPACE_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_LOG_FILE_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_LOG_POS_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_PORT_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_PUBLIC_KEY_PATH_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_RETRY_COUNT_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_CAPATH_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_CA_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_CERT_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_CIPHER_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_CRLPATH_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_CRL_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_KEY_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_TLS_CIPHERSUITES_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_TLS_VERSION_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_USER_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_ZSTD_COMPRESSION_LEVEL_SYMBOL();
    antlr4::tree::TerminalNode *MAX_CONNECTIONS_PER_HOUR_SYMBOL();
    antlr4::tree::TerminalNode *MAX_QUERIES_PER_HOUR_SYMBOL();
    antlr4::tree::TerminalNode *MAX_ROWS_SYMBOL();
    antlr4::tree::TerminalNode *MAX_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *MAX_UPDATES_PER_HOUR_SYMBOL();
    antlr4::tree::TerminalNode *MAX_USER_CONNECTIONS_SYMBOL();
    antlr4::tree::TerminalNode *MEDIUM_SYMBOL();
    antlr4::tree::TerminalNode *MEMORY_SYMBOL();
    antlr4::tree::TerminalNode *MERGE_SYMBOL();
    antlr4::tree::TerminalNode *MESSAGE_TEXT_SYMBOL();
    antlr4::tree::TerminalNode *MICROSECOND_SYMBOL();
    antlr4::tree::TerminalNode *MIGRATE_SYMBOL();
    antlr4::tree::TerminalNode *MINUTE_SYMBOL();
    antlr4::tree::TerminalNode *MIN_ROWS_SYMBOL();
    antlr4::tree::TerminalNode *MODE_SYMBOL();
    antlr4::tree::TerminalNode *MODIFY_SYMBOL();
    antlr4::tree::TerminalNode *MONTH_SYMBOL();
    antlr4::tree::TerminalNode *MULTILINESTRING_SYMBOL();
    antlr4::tree::TerminalNode *MULTIPOINT_SYMBOL();
    antlr4::tree::TerminalNode *MULTIPOLYGON_SYMBOL();
    antlr4::tree::TerminalNode *MUTEX_SYMBOL();
    antlr4::tree::TerminalNode *MYSQL_ERRNO_SYMBOL();
    antlr4::tree::TerminalNode *NAMES_SYMBOL();
    antlr4::tree::TerminalNode *NAME_SYMBOL();
    antlr4::tree::TerminalNode *NATIONAL_SYMBOL();
    antlr4::tree::TerminalNode *NCHAR_SYMBOL();
    antlr4::tree::TerminalNode *NDBCLUSTER_SYMBOL();
    antlr4::tree::TerminalNode *NESTED_SYMBOL();
    antlr4::tree::TerminalNode *NEVER_SYMBOL();
    antlr4::tree::TerminalNode *NEW_SYMBOL();
    antlr4::tree::TerminalNode *NEXT_SYMBOL();
    antlr4::tree::TerminalNode *NODEGROUP_SYMBOL();
    antlr4::tree::TerminalNode *NOWAIT_SYMBOL();
    antlr4::tree::TerminalNode *NO_WAIT_SYMBOL();
    antlr4::tree::TerminalNode *NULLS_SYMBOL();
    antlr4::tree::TerminalNode *NUMBER_SYMBOL();
    antlr4::tree::TerminalNode *NVARCHAR_SYMBOL();
    antlr4::tree::TerminalNode *OFFSET_SYMBOL();
    antlr4::tree::TerminalNode *OJ_SYMBOL();
    antlr4::tree::TerminalNode *OLD_SYMBOL();
    antlr4::tree::TerminalNode *ONE_SYMBOL();
    antlr4::tree::TerminalNode *ONLY_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_SYMBOL();
    antlr4::tree::TerminalNode *OPTIONAL_SYMBOL();
    antlr4::tree::TerminalNode *OPTIONS_SYMBOL();
    antlr4::tree::TerminalNode *ORDINALITY_SYMBOL();
    antlr4::tree::TerminalNode *ORGANIZATION_SYMBOL();
    antlr4::tree::TerminalNode *OTHERS_SYMBOL();
    antlr4::tree::TerminalNode *OWNER_SYMBOL();
    antlr4::tree::TerminalNode *PACK_KEYS_SYMBOL();
    antlr4::tree::TerminalNode *PAGE_SYMBOL();
    antlr4::tree::TerminalNode *PARSER_SYMBOL();
    antlr4::tree::TerminalNode *PARTIAL_SYMBOL();
    antlr4::tree::TerminalNode *PARTITIONING_SYMBOL();
    antlr4::tree::TerminalNode *PARTITIONS_SYMBOL();
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *PATH_SYMBOL();
    antlr4::tree::TerminalNode *PHASE_SYMBOL();
    antlr4::tree::TerminalNode *PLUGINS_SYMBOL();
    antlr4::tree::TerminalNode *PLUGIN_DIR_SYMBOL();
    antlr4::tree::TerminalNode *PLUGIN_SYMBOL();
    antlr4::tree::TerminalNode *POINT_SYMBOL();
    antlr4::tree::TerminalNode *POLYGON_SYMBOL();
    antlr4::tree::TerminalNode *PORT_SYMBOL();
    antlr4::tree::TerminalNode *PRECEDING_SYMBOL();
    antlr4::tree::TerminalNode *PRESERVE_SYMBOL();
    antlr4::tree::TerminalNode *PREV_SYMBOL();
    antlr4::tree::TerminalNode *PRIVILEGES_SYMBOL();
    antlr4::tree::TerminalNode *PRIVILEGE_CHECKS_USER_SYMBOL();
    antlr4::tree::TerminalNode *PROCESSLIST_SYMBOL();
    antlr4::tree::TerminalNode *PROFILES_SYMBOL();
    antlr4::tree::TerminalNode *PROFILE_SYMBOL();
    antlr4::tree::TerminalNode *QUARTER_SYMBOL();
    antlr4::tree::TerminalNode *QUERY_SYMBOL();
    antlr4::tree::TerminalNode *QUICK_SYMBOL();
    antlr4::tree::TerminalNode *READ_ONLY_SYMBOL();
    antlr4::tree::TerminalNode *REBUILD_SYMBOL();
    antlr4::tree::TerminalNode *RECOVER_SYMBOL();
    antlr4::tree::TerminalNode *REDO_BUFFER_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *REDUNDANT_SYMBOL();
    antlr4::tree::TerminalNode *REFERENCE_SYMBOL();
    antlr4::tree::TerminalNode *REGISTRATION_SYMBOL();
    antlr4::tree::TerminalNode *RELAY_SYMBOL();
    antlr4::tree::TerminalNode *RELAYLOG_SYMBOL();
    antlr4::tree::TerminalNode *RELAY_LOG_FILE_SYMBOL();
    antlr4::tree::TerminalNode *RELAY_LOG_POS_SYMBOL();
    antlr4::tree::TerminalNode *RELAY_THREAD_SYMBOL();
    antlr4::tree::TerminalNode *REMOVE_SYMBOL();
    antlr4::tree::TerminalNode *ASSIGN_GTIDS_TO_ANONYMOUS_TRANSACTIONS_SYMBOL();
    antlr4::tree::TerminalNode *REORGANIZE_SYMBOL();
    antlr4::tree::TerminalNode *REPEATABLE_SYMBOL();
    antlr4::tree::TerminalNode *REPLICAS_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_DO_DB_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_DO_TABLE_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_IGNORE_DB_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_IGNORE_TABLE_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_REWRITE_DB_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_WILD_DO_TABLE_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_WILD_IGNORE_TABLE_SYMBOL();
    antlr4::tree::TerminalNode *REPLICA_SYMBOL();
    antlr4::tree::TerminalNode *USER_RESOURCES_SYMBOL();
    antlr4::tree::TerminalNode *RESPECT_SYMBOL();
    antlr4::tree::TerminalNode *RESTORE_SYMBOL();
    antlr4::tree::TerminalNode *RESUME_SYMBOL();
    antlr4::tree::TerminalNode *RETAIN_SYMBOL();
    antlr4::tree::TerminalNode *RETURNED_SQLSTATE_SYMBOL();
    antlr4::tree::TerminalNode *RETURNING_SYMBOL();
    antlr4::tree::TerminalNode *RETURNS_SYMBOL();
    antlr4::tree::TerminalNode *REUSE_SYMBOL();
    antlr4::tree::TerminalNode *REVERSE_SYMBOL();
    antlr4::tree::TerminalNode *ROLE_SYMBOL();
    antlr4::tree::TerminalNode *ROLLUP_SYMBOL();
    antlr4::tree::TerminalNode *ROTATE_SYMBOL();
    antlr4::tree::TerminalNode *ROUTINE_SYMBOL();
    antlr4::tree::TerminalNode *ROW_COUNT_SYMBOL();
    antlr4::tree::TerminalNode *ROW_FORMAT_SYMBOL();
    antlr4::tree::TerminalNode *RTREE_SYMBOL();
    antlr4::tree::TerminalNode *SCHEDULE_SYMBOL();
    antlr4::tree::TerminalNode *SCHEMA_NAME_SYMBOL();
    antlr4::tree::TerminalNode *SECONDARY_ENGINE_SYMBOL();
    antlr4::tree::TerminalNode *SECONDARY_ENGINE_ATTRIBUTE_SYMBOL();
    antlr4::tree::TerminalNode *SECONDARY_LOAD_SYMBOL();
    antlr4::tree::TerminalNode *SECONDARY_SYMBOL();
    antlr4::tree::TerminalNode *SECONDARY_UNLOAD_SYMBOL();
    antlr4::tree::TerminalNode *SECOND_SYMBOL();
    antlr4::tree::TerminalNode *SECURITY_SYMBOL();
    antlr4::tree::TerminalNode *SERIALIZABLE_SYMBOL();
    antlr4::tree::TerminalNode *SERIAL_SYMBOL();
    antlr4::tree::TerminalNode *SERVER_SYMBOL();
    antlr4::tree::TerminalNode *SHARE_SYMBOL();
    antlr4::tree::TerminalNode *SIMPLE_SYMBOL();
    antlr4::tree::TerminalNode *SKIP_SYMBOL();
    antlr4::tree::TerminalNode *SLOW_SYMBOL();
    antlr4::tree::TerminalNode *SNAPSHOT_SYMBOL();
    antlr4::tree::TerminalNode *SOCKET_SYMBOL();
    antlr4::tree::TerminalNode *SONAME_SYMBOL();
    antlr4::tree::TerminalNode *SOUNDS_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_AUTO_POSITION_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_BIND_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_COMPRESSION_ALGORITHM_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_CONNECTION_AUTO_FAILOVER_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_CONNECT_RETRY_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_DELAY_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_HEARTBEAT_PERIOD_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_HOST_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_LOG_FILE_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_LOG_POS_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_PORT_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_PUBLIC_KEY_PATH_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_RETRY_COUNT_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_CAPATH_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_CA_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_CERT_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_CIPHER_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_CRLPATH_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_CRL_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_KEY_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_VERIFY_SERVER_CERT_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_TLS_CIPHERSUITES_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_TLS_VERSION_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_USER_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_ZSTD_COMPRESSION_LEVEL_SYMBOL();
    antlr4::tree::TerminalNode *SQL_AFTER_GTIDS_SYMBOL();
    antlr4::tree::TerminalNode *SQL_AFTER_MTS_GAPS_SYMBOL();
    antlr4::tree::TerminalNode *SQL_BEFORE_GTIDS_SYMBOL();
    antlr4::tree::TerminalNode *SQL_BUFFER_RESULT_SYMBOL();
    antlr4::tree::TerminalNode *SQL_NO_CACHE_SYMBOL();
    antlr4::tree::TerminalNode *SQL_THREAD_SYMBOL();
    antlr4::tree::TerminalNode *SRID_SYMBOL();
    antlr4::tree::TerminalNode *STACKED_SYMBOL();
    antlr4::tree::TerminalNode *STARTS_SYMBOL();
    antlr4::tree::TerminalNode *STATS_AUTO_RECALC_SYMBOL();
    antlr4::tree::TerminalNode *STATS_PERSISTENT_SYMBOL();
    antlr4::tree::TerminalNode *STATS_SAMPLE_PAGES_SYMBOL();
    antlr4::tree::TerminalNode *STATUS_SYMBOL();
    antlr4::tree::TerminalNode *STORAGE_SYMBOL();
    antlr4::tree::TerminalNode *STRING_SYMBOL();
    antlr4::tree::TerminalNode *ST_COLLECT_SYMBOL();
    antlr4::tree::TerminalNode *SUBCLASS_ORIGIN_SYMBOL();
    antlr4::tree::TerminalNode *SUBDATE_SYMBOL();
    antlr4::tree::TerminalNode *SUBJECT_SYMBOL();
    antlr4::tree::TerminalNode *SUBPARTITIONS_SYMBOL();
    antlr4::tree::TerminalNode *SUBPARTITION_SYMBOL();
    antlr4::tree::TerminalNode *SUSPEND_SYMBOL();
    antlr4::tree::TerminalNode *SWAPS_SYMBOL();
    antlr4::tree::TerminalNode *SWITCHES_SYMBOL();
    antlr4::tree::TerminalNode *TABLES_SYMBOL();
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_CHECKSUM_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_NAME_SYMBOL();
    antlr4::tree::TerminalNode *TEMPORARY_SYMBOL();
    antlr4::tree::TerminalNode *TEMPTABLE_SYMBOL();
    antlr4::tree::TerminalNode *TEXT_SYMBOL();
    antlr4::tree::TerminalNode *THAN_SYMBOL();
    antlr4::tree::TerminalNode *THREAD_PRIORITY_SYMBOL();
    antlr4::tree::TerminalNode *TIES_SYMBOL();
    antlr4::tree::TerminalNode *TIMESTAMPADD_SYMBOL();
    antlr4::tree::TerminalNode *TIMESTAMPDIFF_SYMBOL();
    antlr4::tree::TerminalNode *TIMESTAMP_SYMBOL();
    antlr4::tree::TerminalNode *TIME_SYMBOL();
    antlr4::tree::TerminalNode *TLS_SYMBOL();
    antlr4::tree::TerminalNode *TRANSACTION_SYMBOL();
    antlr4::tree::TerminalNode *TRIGGERS_SYMBOL();
    antlr4::tree::TerminalNode *TYPES_SYMBOL();
    antlr4::tree::TerminalNode *TYPE_SYMBOL();
    antlr4::tree::TerminalNode *UNBOUNDED_SYMBOL();
    antlr4::tree::TerminalNode *UNCOMMITTED_SYMBOL();
    antlr4::tree::TerminalNode *UNDEFINED_SYMBOL();
    antlr4::tree::TerminalNode *UNDOFILE_SYMBOL();
    antlr4::tree::TerminalNode *UNDO_BUFFER_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *UNKNOWN_SYMBOL();
    antlr4::tree::TerminalNode *UNREGISTER_SYMBOL();
    antlr4::tree::TerminalNode *UNTIL_SYMBOL();
    antlr4::tree::TerminalNode *UPGRADE_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    antlr4::tree::TerminalNode *USE_FRM_SYMBOL();
    antlr4::tree::TerminalNode *VALIDATION_SYMBOL();
    antlr4::tree::TerminalNode *VALUE_SYMBOL();
    antlr4::tree::TerminalNode *VARIABLES_SYMBOL();
    antlr4::tree::TerminalNode *VCPU_SYMBOL();
    antlr4::tree::TerminalNode *VIEW_SYMBOL();
    antlr4::tree::TerminalNode *VISIBLE_SYMBOL();
    antlr4::tree::TerminalNode *WAIT_SYMBOL();
    antlr4::tree::TerminalNode *WARNINGS_SYMBOL();
    antlr4::tree::TerminalNode *WEEK_SYMBOL();
    antlr4::tree::TerminalNode *WEIGHT_STRING_SYMBOL();
    antlr4::tree::TerminalNode *WITHOUT_SYMBOL();
    antlr4::tree::TerminalNode *WORK_SYMBOL();
    antlr4::tree::TerminalNode *WRAPPER_SYMBOL();
    antlr4::tree::TerminalNode *X509_SYMBOL();
    antlr4::tree::TerminalNode *XID_SYMBOL();
    antlr4::tree::TerminalNode *XML_SYMBOL();
    antlr4::tree::TerminalNode *YEAR_SYMBOL();
    antlr4::tree::TerminalNode *ZONE_SYMBOL();
    antlr4::tree::TerminalNode *ARRAY_SYMBOL();
    antlr4::tree::TerminalNode *FAILED_LOGIN_ATTEMPTS_SYMBOL();
    antlr4::tree::TerminalNode *MEMBER_SYMBOL();
    antlr4::tree::TerminalNode *OFF_SYMBOL();
    antlr4::tree::TerminalNode *PASSWORD_LOCK_TIME_SYMBOL();
    antlr4::tree::TerminalNode *RANDOM_SYMBOL();
    antlr4::tree::TerminalNode *REQUIRE_ROW_FORMAT_SYMBOL();
    antlr4::tree::TerminalNode *REQUIRE_TABLE_PRIMARY_KEY_CHECK_SYMBOL();
    antlr4::tree::TerminalNode *STREAM_SYMBOL();

   
  };

  IdentifierKeywordsUnambiguousContext* identifierKeywordsUnambiguous();

  class PARSERS_PUBLIC_TYPE RoleKeywordContext : public antlr4::ParserRuleContext {
  public:
    RoleKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RoleOrLabelKeywordContext *roleOrLabelKeyword();
    RoleOrIdentifierKeywordContext *roleOrIdentifierKeyword();
    IdentifierKeywordsUnambiguousContext *identifierKeywordsUnambiguous();
    IdentifierKeywordsAmbiguous2LabelsContext *identifierKeywordsAmbiguous2Labels();
    IdentifierKeywordsAmbiguous4SystemVariablesContext *identifierKeywordsAmbiguous4SystemVariables();

   
  };

  RoleKeywordContext* roleKeyword();

  class PARSERS_PUBLIC_TYPE LValueKeywordContext : public antlr4::ParserRuleContext {
  public:
    LValueKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierKeywordsUnambiguousContext *identifierKeywordsUnambiguous();
    IdentifierKeywordsAmbiguous1RolesAndLabelsContext *identifierKeywordsAmbiguous1RolesAndLabels();
    IdentifierKeywordsAmbiguous2LabelsContext *identifierKeywordsAmbiguous2Labels();
    IdentifierKeywordsAmbiguous3RolesContext *identifierKeywordsAmbiguous3Roles();

   
  };

  LValueKeywordContext* lValueKeyword();

  class PARSERS_PUBLIC_TYPE IdentifierKeywordsAmbiguous4SystemVariablesContext : public antlr4::ParserRuleContext {
  public:
    IdentifierKeywordsAmbiguous4SystemVariablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GLOBAL_SYMBOL();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    antlr4::tree::TerminalNode *PERSIST_SYMBOL();
    antlr4::tree::TerminalNode *PERSIST_ONLY_SYMBOL();
    antlr4::tree::TerminalNode *SESSION_SYMBOL();

   
  };

  IdentifierKeywordsAmbiguous4SystemVariablesContext* identifierKeywordsAmbiguous4SystemVariables();

  class PARSERS_PUBLIC_TYPE RoleOrIdentifierKeywordContext : public antlr4::ParserRuleContext {
  public:
    RoleOrIdentifierKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCOUNT_SYMBOL();
    antlr4::tree::TerminalNode *ASCII_SYMBOL();
    antlr4::tree::TerminalNode *ALWAYS_SYMBOL();
    antlr4::tree::TerminalNode *BACKUP_SYMBOL();
    antlr4::tree::TerminalNode *BEGIN_SYMBOL();
    antlr4::tree::TerminalNode *BYTE_SYMBOL();
    antlr4::tree::TerminalNode *CACHE_SYMBOL();
    antlr4::tree::TerminalNode *CHARSET_SYMBOL();
    antlr4::tree::TerminalNode *CHECKSUM_SYMBOL();
    antlr4::tree::TerminalNode *CLONE_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_SYMBOL();
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();
    antlr4::tree::TerminalNode *COMMIT_SYMBOL();
    antlr4::tree::TerminalNode *CONTAINS_SYMBOL();
    antlr4::tree::TerminalNode *DEALLOCATE_SYMBOL();
    antlr4::tree::TerminalNode *DO_SYMBOL();
    antlr4::tree::TerminalNode *END_SYMBOL();
    antlr4::tree::TerminalNode *FLUSH_SYMBOL();
    antlr4::tree::TerminalNode *FOLLOWS_SYMBOL();
    antlr4::tree::TerminalNode *FORMAT_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_REPLICATION_SYMBOL();
    antlr4::tree::TerminalNode *HANDLER_SYMBOL();
    antlr4::tree::TerminalNode *HELP_SYMBOL();
    antlr4::tree::TerminalNode *HOST_SYMBOL();
    antlr4::tree::TerminalNode *INSTALL_SYMBOL();
    antlr4::tree::TerminalNode *INVISIBLE_SYMBOL();
    antlr4::tree::TerminalNode *LANGUAGE_SYMBOL();
    antlr4::tree::TerminalNode *NO_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_SYMBOL();
    antlr4::tree::TerminalNode *OPTIONS_SYMBOL();
    antlr4::tree::TerminalNode *OWNER_SYMBOL();
    antlr4::tree::TerminalNode *PARSER_SYMBOL();
    antlr4::tree::TerminalNode *PARTITION_SYMBOL();
    antlr4::tree::TerminalNode *PORT_SYMBOL();
    antlr4::tree::TerminalNode *PRECEDES_SYMBOL();
    antlr4::tree::TerminalNode *PREPARE_SYMBOL();
    antlr4::tree::TerminalNode *REMOVE_SYMBOL();
    antlr4::tree::TerminalNode *REPAIR_SYMBOL();
    antlr4::tree::TerminalNode *RESET_SYMBOL();
    antlr4::tree::TerminalNode *RESTORE_SYMBOL();
    antlr4::tree::TerminalNode *ROLE_SYMBOL();
    antlr4::tree::TerminalNode *ROLLBACK_SYMBOL();
    antlr4::tree::TerminalNode *SAVEPOINT_SYMBOL();
    antlr4::tree::TerminalNode *SECONDARY_SYMBOL();
    antlr4::tree::TerminalNode *SECONDARY_ENGINE_SYMBOL();
    antlr4::tree::TerminalNode *SECONDARY_LOAD_SYMBOL();
    antlr4::tree::TerminalNode *SECONDARY_UNLOAD_SYMBOL();
    antlr4::tree::TerminalNode *SECURITY_SYMBOL();
    antlr4::tree::TerminalNode *SERVER_SYMBOL();
    antlr4::tree::TerminalNode *SIGNED_SYMBOL();
    antlr4::tree::TerminalNode *SOCKET_SYMBOL();
    antlr4::tree::TerminalNode *SLAVE_SYMBOL();
    antlr4::tree::TerminalNode *SONAME_SYMBOL();
    antlr4::tree::TerminalNode *START_SYMBOL();
    antlr4::tree::TerminalNode *STOP_SYMBOL();
    antlr4::tree::TerminalNode *TRUNCATE_SYMBOL();
    antlr4::tree::TerminalNode *UNICODE_SYMBOL();
    antlr4::tree::TerminalNode *UNINSTALL_SYMBOL();
    antlr4::tree::TerminalNode *UPGRADE_SYMBOL();
    antlr4::tree::TerminalNode *VISIBLE_SYMBOL();
    antlr4::tree::TerminalNode *WRAPPER_SYMBOL();
    antlr4::tree::TerminalNode *XA_SYMBOL();

   
  };

  RoleOrIdentifierKeywordContext* roleOrIdentifierKeyword();

  class PARSERS_PUBLIC_TYPE RoleOrLabelKeywordContext : public antlr4::ParserRuleContext {
  public:
    RoleOrLabelKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACTION_SYMBOL();
    antlr4::tree::TerminalNode *ACTIVE_SYMBOL();
    antlr4::tree::TerminalNode *ADDDATE_SYMBOL();
    antlr4::tree::TerminalNode *AFTER_SYMBOL();
    antlr4::tree::TerminalNode *AGAINST_SYMBOL();
    antlr4::tree::TerminalNode *AGGREGATE_SYMBOL();
    antlr4::tree::TerminalNode *ALGORITHM_SYMBOL();
    antlr4::tree::TerminalNode *ANY_SYMBOL();
    antlr4::tree::TerminalNode *AT_SYMBOL();
    antlr4::tree::TerminalNode *AUTO_INCREMENT_SYMBOL();
    antlr4::tree::TerminalNode *AUTOEXTEND_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *AVG_ROW_LENGTH_SYMBOL();
    antlr4::tree::TerminalNode *AVG_SYMBOL();
    antlr4::tree::TerminalNode *BINLOG_SYMBOL();
    antlr4::tree::TerminalNode *BIT_SYMBOL();
    antlr4::tree::TerminalNode *BLOCK_SYMBOL();
    antlr4::tree::TerminalNode *BOOL_SYMBOL();
    antlr4::tree::TerminalNode *BOOLEAN_SYMBOL();
    antlr4::tree::TerminalNode *BTREE_SYMBOL();
    antlr4::tree::TerminalNode *BUCKETS_SYMBOL();
    antlr4::tree::TerminalNode *CASCADED_SYMBOL();
    antlr4::tree::TerminalNode *CATALOG_NAME_SYMBOL();
    antlr4::tree::TerminalNode *CHAIN_SYMBOL();
    antlr4::tree::TerminalNode *CHANGED_SYMBOL();
    antlr4::tree::TerminalNode *CHANNEL_SYMBOL();
    antlr4::tree::TerminalNode *CIPHER_SYMBOL();
    antlr4::tree::TerminalNode *CLIENT_SYMBOL();
    antlr4::tree::TerminalNode *CLASS_ORIGIN_SYMBOL();
    antlr4::tree::TerminalNode *COALESCE_SYMBOL();
    antlr4::tree::TerminalNode *CODE_SYMBOL();
    antlr4::tree::TerminalNode *COLLATION_SYMBOL();
    antlr4::tree::TerminalNode *COLUMN_NAME_SYMBOL();
    antlr4::tree::TerminalNode *COLUMN_FORMAT_SYMBOL();
    antlr4::tree::TerminalNode *COLUMNS_SYMBOL();
    antlr4::tree::TerminalNode *COMMITTED_SYMBOL();
    antlr4::tree::TerminalNode *COMPACT_SYMBOL();
    antlr4::tree::TerminalNode *COMPLETION_SYMBOL();
    antlr4::tree::TerminalNode *COMPONENT_SYMBOL();
    antlr4::tree::TerminalNode *COMPRESSED_SYMBOL();
    antlr4::tree::TerminalNode *COMPRESSION_SYMBOL();
    antlr4::tree::TerminalNode *CONCURRENT_SYMBOL();
    antlr4::tree::TerminalNode *CONNECTION_SYMBOL();
    antlr4::tree::TerminalNode *CONSISTENT_SYMBOL();
    antlr4::tree::TerminalNode *CONSTRAINT_CATALOG_SYMBOL();
    antlr4::tree::TerminalNode *CONSTRAINT_SCHEMA_SYMBOL();
    antlr4::tree::TerminalNode *CONSTRAINT_NAME_SYMBOL();
    antlr4::tree::TerminalNode *CONTEXT_SYMBOL();
    antlr4::tree::TerminalNode *CPU_SYMBOL();
    antlr4::tree::TerminalNode *CURRENT_SYMBOL();
    antlr4::tree::TerminalNode *CURSOR_NAME_SYMBOL();
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    antlr4::tree::TerminalNode *DATAFILE_SYMBOL();
    antlr4::tree::TerminalNode *DATETIME_SYMBOL();
    antlr4::tree::TerminalNode *DATE_SYMBOL();
    antlr4::tree::TerminalNode *DAY_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_AUTH_SYMBOL();
    antlr4::tree::TerminalNode *DEFINER_SYMBOL();
    antlr4::tree::TerminalNode *DELAY_KEY_WRITE_SYMBOL();
    antlr4::tree::TerminalNode *DESCRIPTION_SYMBOL();
    antlr4::tree::TerminalNode *DIAGNOSTICS_SYMBOL();
    antlr4::tree::TerminalNode *DIRECTORY_SYMBOL();
    antlr4::tree::TerminalNode *DISABLE_SYMBOL();
    antlr4::tree::TerminalNode *DISCARD_SYMBOL();
    antlr4::tree::TerminalNode *DISK_SYMBOL();
    antlr4::tree::TerminalNode *DUMPFILE_SYMBOL();
    antlr4::tree::TerminalNode *DUPLICATE_SYMBOL();
    antlr4::tree::TerminalNode *DYNAMIC_SYMBOL();
    antlr4::tree::TerminalNode *ENCRYPTION_SYMBOL();
    antlr4::tree::TerminalNode *ENDS_SYMBOL();
    antlr4::tree::TerminalNode *ENUM_SYMBOL();
    antlr4::tree::TerminalNode *ENGINE_SYMBOL();
    antlr4::tree::TerminalNode *ENGINES_SYMBOL();
    antlr4::tree::TerminalNode *ENGINE_ATTRIBUTE_SYMBOL();
    antlr4::tree::TerminalNode *ERROR_SYMBOL();
    antlr4::tree::TerminalNode *ERRORS_SYMBOL();
    antlr4::tree::TerminalNode *ESCAPE_SYMBOL();
    antlr4::tree::TerminalNode *EVENTS_SYMBOL();
    antlr4::tree::TerminalNode *EVERY_SYMBOL();
    antlr4::tree::TerminalNode *EXCLUDE_SYMBOL();
    antlr4::tree::TerminalNode *EXPANSION_SYMBOL();
    antlr4::tree::TerminalNode *EXPORT_SYMBOL();
    antlr4::tree::TerminalNode *EXTENDED_SYMBOL();
    antlr4::tree::TerminalNode *EXTENT_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *FAULTS_SYMBOL();
    antlr4::tree::TerminalNode *FAST_SYMBOL();
    antlr4::tree::TerminalNode *FOLLOWING_SYMBOL();
    antlr4::tree::TerminalNode *FOUND_SYMBOL();
    antlr4::tree::TerminalNode *ENABLE_SYMBOL();
    antlr4::tree::TerminalNode *FULL_SYMBOL();
    antlr4::tree::TerminalNode *FILE_BLOCK_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *FILTER_SYMBOL();
    antlr4::tree::TerminalNode *FIRST_SYMBOL();
    antlr4::tree::TerminalNode *FIXED_SYMBOL();
    antlr4::tree::TerminalNode *GENERAL_SYMBOL();
    antlr4::tree::TerminalNode *GEOMETRY_SYMBOL();
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTION_SYMBOL();
    antlr4::tree::TerminalNode *GET_FORMAT_SYMBOL();
    antlr4::tree::TerminalNode *GRANTS_SYMBOL();
    antlr4::tree::TerminalNode *GLOBAL_SYMBOL();
    antlr4::tree::TerminalNode *HASH_SYMBOL();
    antlr4::tree::TerminalNode *HISTOGRAM_SYMBOL();
    antlr4::tree::TerminalNode *HISTORY_SYMBOL();
    antlr4::tree::TerminalNode *HOSTS_SYMBOL();
    antlr4::tree::TerminalNode *HOUR_SYMBOL();
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    antlr4::tree::TerminalNode *IGNORE_SERVER_IDS_SYMBOL();
    antlr4::tree::TerminalNode *INVOKER_SYMBOL();
    antlr4::tree::TerminalNode *INDEXES_SYMBOL();
    antlr4::tree::TerminalNode *INITIAL_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *INSTANCE_SYMBOL();
    antlr4::tree::TerminalNode *INACTIVE_SYMBOL();
    antlr4::tree::TerminalNode *IO_SYMBOL();
    antlr4::tree::TerminalNode *IPC_SYMBOL();
    antlr4::tree::TerminalNode *ISOLATION_SYMBOL();
    antlr4::tree::TerminalNode *ISSUER_SYMBOL();
    antlr4::tree::TerminalNode *INSERT_METHOD_SYMBOL();
    antlr4::tree::TerminalNode *JSON_SYMBOL();
    antlr4::tree::TerminalNode *KEY_BLOCK_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *LAST_SYMBOL();
    antlr4::tree::TerminalNode *LEAVES_SYMBOL();
    antlr4::tree::TerminalNode *LESS_SYMBOL();
    antlr4::tree::TerminalNode *LEVEL_SYMBOL();
    antlr4::tree::TerminalNode *LINESTRING_SYMBOL();
    antlr4::tree::TerminalNode *LIST_SYMBOL();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    antlr4::tree::TerminalNode *LOCKED_SYMBOL();
    antlr4::tree::TerminalNode *LOCKS_SYMBOL();
    antlr4::tree::TerminalNode *LOGFILE_SYMBOL();
    antlr4::tree::TerminalNode *LOGS_SYMBOL();
    antlr4::tree::TerminalNode *MAX_ROWS_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_HEARTBEAT_PERIOD_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_HOST_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_PORT_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_LOG_FILE_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_LOG_POS_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_USER_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_PUBLIC_KEY_PATH_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_CONNECT_RETRY_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_RETRY_COUNT_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_DELAY_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_CA_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_CAPATH_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_TLS_VERSION_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_CERT_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_CIPHER_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_CRL_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_CRLPATH_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_KEY_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_AUTO_POSITION_SYMBOL();
    antlr4::tree::TerminalNode *MAX_CONNECTIONS_PER_HOUR_SYMBOL();
    antlr4::tree::TerminalNode *MAX_QUERIES_PER_HOUR_SYMBOL();
    antlr4::tree::TerminalNode *MAX_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *MAX_UPDATES_PER_HOUR_SYMBOL();
    antlr4::tree::TerminalNode *MAX_USER_CONNECTIONS_SYMBOL();
    antlr4::tree::TerminalNode *MEDIUM_SYMBOL();
    antlr4::tree::TerminalNode *MEMORY_SYMBOL();
    antlr4::tree::TerminalNode *MERGE_SYMBOL();
    antlr4::tree::TerminalNode *MESSAGE_TEXT_SYMBOL();
    antlr4::tree::TerminalNode *MICROSECOND_SYMBOL();
    antlr4::tree::TerminalNode *MIGRATE_SYMBOL();
    antlr4::tree::TerminalNode *MINUTE_SYMBOL();
    antlr4::tree::TerminalNode *MIN_ROWS_SYMBOL();
    antlr4::tree::TerminalNode *MODIFY_SYMBOL();
    antlr4::tree::TerminalNode *MODE_SYMBOL();
    antlr4::tree::TerminalNode *MONTH_SYMBOL();
    antlr4::tree::TerminalNode *MULTILINESTRING_SYMBOL();
    antlr4::tree::TerminalNode *MULTIPOINT_SYMBOL();
    antlr4::tree::TerminalNode *MULTIPOLYGON_SYMBOL();
    antlr4::tree::TerminalNode *MUTEX_SYMBOL();
    antlr4::tree::TerminalNode *MYSQL_ERRNO_SYMBOL();
    antlr4::tree::TerminalNode *NAME_SYMBOL();
    antlr4::tree::TerminalNode *NAMES_SYMBOL();
    antlr4::tree::TerminalNode *NATIONAL_SYMBOL();
    antlr4::tree::TerminalNode *NCHAR_SYMBOL();
    antlr4::tree::TerminalNode *NDBCLUSTER_SYMBOL();
    antlr4::tree::TerminalNode *NESTED_SYMBOL();
    antlr4::tree::TerminalNode *NEVER_SYMBOL();
    antlr4::tree::TerminalNode *NEXT_SYMBOL();
    antlr4::tree::TerminalNode *NEW_SYMBOL();
    antlr4::tree::TerminalNode *NO_WAIT_SYMBOL();
    antlr4::tree::TerminalNode *NODEGROUP_SYMBOL();
    antlr4::tree::TerminalNode *NULLS_SYMBOL();
    antlr4::tree::TerminalNode *NOWAIT_SYMBOL();
    antlr4::tree::TerminalNode *NUMBER_SYMBOL();
    antlr4::tree::TerminalNode *NVARCHAR_SYMBOL();
    antlr4::tree::TerminalNode *OFFSET_SYMBOL();
    antlr4::tree::TerminalNode *OLD_SYMBOL();
    antlr4::tree::TerminalNode *ONE_SYMBOL();
    antlr4::tree::TerminalNode *OPTIONAL_SYMBOL();
    antlr4::tree::TerminalNode *ORDINALITY_SYMBOL();
    antlr4::tree::TerminalNode *ORGANIZATION_SYMBOL();
    antlr4::tree::TerminalNode *OTHERS_SYMBOL();
    antlr4::tree::TerminalNode *PACK_KEYS_SYMBOL();
    antlr4::tree::TerminalNode *PAGE_SYMBOL();
    antlr4::tree::TerminalNode *PARTIAL_SYMBOL();
    antlr4::tree::TerminalNode *PARTITIONING_SYMBOL();
    antlr4::tree::TerminalNode *PARTITIONS_SYMBOL();
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *PATH_SYMBOL();
    antlr4::tree::TerminalNode *PHASE_SYMBOL();
    antlr4::tree::TerminalNode *PLUGIN_DIR_SYMBOL();
    antlr4::tree::TerminalNode *PLUGIN_SYMBOL();
    antlr4::tree::TerminalNode *PLUGINS_SYMBOL();
    antlr4::tree::TerminalNode *POINT_SYMBOL();
    antlr4::tree::TerminalNode *POLYGON_SYMBOL();
    antlr4::tree::TerminalNode *PRECEDING_SYMBOL();
    antlr4::tree::TerminalNode *PRESERVE_SYMBOL();
    antlr4::tree::TerminalNode *PREV_SYMBOL();
    antlr4::tree::TerminalNode *THREAD_PRIORITY_SYMBOL();
    antlr4::tree::TerminalNode *PRIVILEGES_SYMBOL();
    antlr4::tree::TerminalNode *PROCESSLIST_SYMBOL();
    antlr4::tree::TerminalNode *PROFILE_SYMBOL();
    antlr4::tree::TerminalNode *PROFILES_SYMBOL();
    antlr4::tree::TerminalNode *QUARTER_SYMBOL();
    antlr4::tree::TerminalNode *QUERY_SYMBOL();
    antlr4::tree::TerminalNode *QUICK_SYMBOL();
    antlr4::tree::TerminalNode *READ_ONLY_SYMBOL();
    antlr4::tree::TerminalNode *REBUILD_SYMBOL();
    antlr4::tree::TerminalNode *RECOVER_SYMBOL();
    antlr4::tree::TerminalNode *REDO_BUFFER_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *REDUNDANT_SYMBOL();
    antlr4::tree::TerminalNode *RELAY_SYMBOL();
    antlr4::tree::TerminalNode *RELAYLOG_SYMBOL();
    antlr4::tree::TerminalNode *RELAY_LOG_FILE_SYMBOL();
    antlr4::tree::TerminalNode *RELAY_LOG_POS_SYMBOL();
    antlr4::tree::TerminalNode *RELAY_THREAD_SYMBOL();
    antlr4::tree::TerminalNode *REMOTE_SYMBOL();
    antlr4::tree::TerminalNode *REORGANIZE_SYMBOL();
    antlr4::tree::TerminalNode *REPEATABLE_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_DO_DB_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_IGNORE_DB_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_DO_TABLE_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_IGNORE_TABLE_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_WILD_DO_TABLE_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_WILD_IGNORE_TABLE_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_REWRITE_DB_SYMBOL();
    antlr4::tree::TerminalNode *USER_RESOURCES_SYMBOL();
    antlr4::tree::TerminalNode *RESPECT_SYMBOL();
    antlr4::tree::TerminalNode *RESUME_SYMBOL();
    antlr4::tree::TerminalNode *RETAIN_SYMBOL();
    antlr4::tree::TerminalNode *RETURNED_SQLSTATE_SYMBOL();
    antlr4::tree::TerminalNode *RETURNS_SYMBOL();
    antlr4::tree::TerminalNode *REUSE_SYMBOL();
    antlr4::tree::TerminalNode *REVERSE_SYMBOL();
    antlr4::tree::TerminalNode *ROLLUP_SYMBOL();
    antlr4::tree::TerminalNode *ROTATE_SYMBOL();
    antlr4::tree::TerminalNode *ROUTINE_SYMBOL();
    antlr4::tree::TerminalNode *ROW_COUNT_SYMBOL();
    antlr4::tree::TerminalNode *ROW_FORMAT_SYMBOL();
    antlr4::tree::TerminalNode *RTREE_SYMBOL();
    antlr4::tree::TerminalNode *SCHEDULE_SYMBOL();
    antlr4::tree::TerminalNode *SCHEMA_NAME_SYMBOL();
    antlr4::tree::TerminalNode *SECOND_SYMBOL();
    antlr4::tree::TerminalNode *SERIAL_SYMBOL();
    antlr4::tree::TerminalNode *SERIALIZABLE_SYMBOL();
    antlr4::tree::TerminalNode *SESSION_SYMBOL();
    antlr4::tree::TerminalNode *SHARE_SYMBOL();
    antlr4::tree::TerminalNode *SIMPLE_SYMBOL();
    antlr4::tree::TerminalNode *SKIP_SYMBOL();
    antlr4::tree::TerminalNode *SLOW_SYMBOL();
    antlr4::tree::TerminalNode *SNAPSHOT_SYMBOL();
    antlr4::tree::TerminalNode *SOUNDS_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SYMBOL();
    antlr4::tree::TerminalNode *SQL_AFTER_GTIDS_SYMBOL();
    antlr4::tree::TerminalNode *SQL_AFTER_MTS_GAPS_SYMBOL();
    antlr4::tree::TerminalNode *SQL_BEFORE_GTIDS_SYMBOL();
    antlr4::tree::TerminalNode *SQL_BUFFER_RESULT_SYMBOL();
    antlr4::tree::TerminalNode *SQL_NO_CACHE_SYMBOL();
    antlr4::tree::TerminalNode *SQL_THREAD_SYMBOL();
    antlr4::tree::TerminalNode *SRID_SYMBOL();
    antlr4::tree::TerminalNode *STACKED_SYMBOL();
    antlr4::tree::TerminalNode *STARTS_SYMBOL();
    antlr4::tree::TerminalNode *STATS_AUTO_RECALC_SYMBOL();
    antlr4::tree::TerminalNode *STATS_PERSISTENT_SYMBOL();
    antlr4::tree::TerminalNode *STATS_SAMPLE_PAGES_SYMBOL();
    antlr4::tree::TerminalNode *STATUS_SYMBOL();
    antlr4::tree::TerminalNode *STORAGE_SYMBOL();
    antlr4::tree::TerminalNode *STRING_SYMBOL();
    antlr4::tree::TerminalNode *SUBCLASS_ORIGIN_SYMBOL();
    antlr4::tree::TerminalNode *SUBDATE_SYMBOL();
    antlr4::tree::TerminalNode *SUBJECT_SYMBOL();
    antlr4::tree::TerminalNode *SUBPARTITION_SYMBOL();
    antlr4::tree::TerminalNode *SUBPARTITIONS_SYMBOL();
    antlr4::tree::TerminalNode *SUPER_SYMBOL();
    antlr4::tree::TerminalNode *SUSPEND_SYMBOL();
    antlr4::tree::TerminalNode *SWAPS_SYMBOL();
    antlr4::tree::TerminalNode *SWITCHES_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_NAME_SYMBOL();
    antlr4::tree::TerminalNode *TABLES_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_CHECKSUM_SYMBOL();
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    antlr4::tree::TerminalNode *TEMPORARY_SYMBOL();
    antlr4::tree::TerminalNode *TEMPTABLE_SYMBOL();
    antlr4::tree::TerminalNode *TEXT_SYMBOL();
    antlr4::tree::TerminalNode *THAN_SYMBOL();
    antlr4::tree::TerminalNode *TIES_SYMBOL();
    antlr4::tree::TerminalNode *TRANSACTION_SYMBOL();
    antlr4::tree::TerminalNode *TRIGGERS_SYMBOL();
    antlr4::tree::TerminalNode *TIMESTAMP_SYMBOL();
    antlr4::tree::TerminalNode *TIMESTAMPADD_SYMBOL();
    antlr4::tree::TerminalNode *TIMESTAMPDIFF_SYMBOL();
    antlr4::tree::TerminalNode *TIME_SYMBOL();
    antlr4::tree::TerminalNode *TYPES_SYMBOL();
    antlr4::tree::TerminalNode *TYPE_SYMBOL();
    antlr4::tree::TerminalNode *UDF_RETURNS_SYMBOL();
    antlr4::tree::TerminalNode *UNBOUNDED_SYMBOL();
    antlr4::tree::TerminalNode *UNCOMMITTED_SYMBOL();
    antlr4::tree::TerminalNode *UNDEFINED_SYMBOL();
    antlr4::tree::TerminalNode *UNDO_BUFFER_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *UNDOFILE_SYMBOL();
    antlr4::tree::TerminalNode *UNKNOWN_SYMBOL();
    antlr4::tree::TerminalNode *UNTIL_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    antlr4::tree::TerminalNode *USE_FRM_SYMBOL();
    antlr4::tree::TerminalNode *VARIABLES_SYMBOL();
    antlr4::tree::TerminalNode *VCPU_SYMBOL();
    antlr4::tree::TerminalNode *VIEW_SYMBOL();
    antlr4::tree::TerminalNode *VALUE_SYMBOL();
    antlr4::tree::TerminalNode *WARNINGS_SYMBOL();
    antlr4::tree::TerminalNode *WAIT_SYMBOL();
    antlr4::tree::TerminalNode *WEEK_SYMBOL();
    antlr4::tree::TerminalNode *WORK_SYMBOL();
    antlr4::tree::TerminalNode *WEIGHT_STRING_SYMBOL();
    antlr4::tree::TerminalNode *X509_SYMBOL();
    antlr4::tree::TerminalNode *XID_SYMBOL();
    antlr4::tree::TerminalNode *XML_SYMBOL();
    antlr4::tree::TerminalNode *YEAR_SYMBOL();
    antlr4::tree::TerminalNode *ADMIN_SYMBOL();

   
  };

  RoleOrLabelKeywordContext* roleOrLabelKeyword();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool alterStatementSempred(AlterStatementContext *_localctx, size_t predicateIndex);
  bool standaloneAlterCommandsSempred(StandaloneAlterCommandsContext *_localctx, size_t predicateIndex);
  bool alterListItemSempred(AlterListItemContext *_localctx, size_t predicateIndex);
  bool alterTablespaceSempred(AlterTablespaceContext *_localctx, size_t predicateIndex);
  bool alterTablespaceOptionSempred(AlterTablespaceOptionContext *_localctx, size_t predicateIndex);
  bool alterInstanceStatementSempred(AlterInstanceStatementContext *_localctx, size_t predicateIndex);
  bool createStatementSempred(CreateStatementContext *_localctx, size_t predicateIndex);
  bool createDatabaseOptionSempred(CreateDatabaseOptionContext *_localctx, size_t predicateIndex);
  bool queryExpressionOrParensSempred(QueryExpressionOrParensContext *_localctx, size_t predicateIndex);
  bool createIndexSempred(CreateIndexContext *_localctx, size_t predicateIndex);
  bool tsDataFileNameSempred(TsDataFileNameContext *_localctx, size_t predicateIndex);
  bool tablespaceOptionSempred(TablespaceOptionContext *_localctx, size_t predicateIndex);
  bool dropStatementSempred(DropStatementContext *_localctx, size_t predicateIndex);
  bool deleteStatementSempred(DeleteStatementContext *_localctx, size_t predicateIndex);
  bool insertStatementSempred(InsertStatementContext *_localctx, size_t predicateIndex);
  bool insertQueryExpressionSempred(InsertQueryExpressionContext *_localctx, size_t predicateIndex);
  bool selectStatementWithIntoSempred(SelectStatementWithIntoContext *_localctx, size_t predicateIndex);
  bool queryExpressionSempred(QueryExpressionContext *_localctx, size_t predicateIndex);
  bool queryPrimarySempred(QueryPrimaryContext *_localctx, size_t predicateIndex);
  bool tableReferenceSempred(TableReferenceContext *_localctx, size_t predicateIndex);
  bool tableFactorSempred(TableFactorContext *_localctx, size_t predicateIndex);
  bool derivedTableSempred(DerivedTableContext *_localctx, size_t predicateIndex);
  bool jtColumnSempred(JtColumnContext *_localctx, size_t predicateIndex);
  bool tableAliasSempred(TableAliasContext *_localctx, size_t predicateIndex);
  bool sourceResetOptionsSempred(SourceResetOptionsContext *_localctx, size_t predicateIndex);
  bool changeReplicationSourceSempred(ChangeReplicationSourceContext *_localctx, size_t predicateIndex);
  bool sourceDefinitionSempred(SourceDefinitionContext *_localctx, size_t predicateIndex);
  bool cloneStatementSempred(CloneStatementContext *_localctx, size_t predicateIndex);
  bool alterUserStatementSempred(AlterUserStatementContext *_localctx, size_t predicateIndex);
  bool alterUserSempred(AlterUserContext *_localctx, size_t predicateIndex);
  bool createUserTailSempred(CreateUserTailContext *_localctx, size_t predicateIndex);
  bool accountLockPasswordExpireOptionsSempred(AccountLockPasswordExpireOptionsContext *_localctx, size_t predicateIndex);
  bool grantTargetListSempred(GrantTargetListContext *_localctx, size_t predicateIndex);
  bool grantOptionsSempred(GrantOptionsContext *_localctx, size_t predicateIndex);
  bool versionedRequireClauseSempred(VersionedRequireClauseContext *_localctx, size_t predicateIndex);
  bool revokeStatementSempred(RevokeStatementContext *_localctx, size_t predicateIndex);
  bool grantIdentifierSempred(GrantIdentifierContext *_localctx, size_t predicateIndex);
  bool histogramSempred(HistogramContext *_localctx, size_t predicateIndex);
  bool startOptionValueListSempred(StartOptionValueListContext *_localctx, size_t predicateIndex);
  bool optionValueNoOptionTypeSempred(OptionValueNoOptionTypeContext *_localctx, size_t predicateIndex);
  bool utilityStatementSempred(UtilityStatementContext *_localctx, size_t predicateIndex);
  bool explainStatementSempred(ExplainStatementContext *_localctx, size_t predicateIndex);
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);
  bool boolPriSempred(BoolPriContext *_localctx, size_t predicateIndex);
  bool predicateSempred(PredicateContext *_localctx, size_t predicateIndex);
  bool bitExprSempred(BitExprContext *_localctx, size_t predicateIndex);
  bool simpleExprSempred(SimpleExprContext *_localctx, size_t predicateIndex);
  bool arrayCastSempred(ArrayCastContext *_localctx, size_t predicateIndex);
  bool windowFunctionCallSempred(WindowFunctionCallContext *_localctx, size_t predicateIndex);
  bool leadLagInfoSempred(LeadLagInfoContext *_localctx, size_t predicateIndex);
  bool runtimeFunctionCallSempred(RuntimeFunctionCallContext *_localctx, size_t predicateIndex);
  bool lvalueVariableSempred(LvalueVariableContext *_localctx, size_t predicateIndex);
  bool castTypeSempred(CastTypeContext *_localctx, size_t predicateIndex);
  bool checkOrReferencesSempred(CheckOrReferencesContext *_localctx, size_t predicateIndex);
  bool tableConstraintDefSempred(TableConstraintDefContext *_localctx, size_t predicateIndex);
  bool columnAttributeSempred(ColumnAttributeContext *_localctx, size_t predicateIndex);
  bool keyListVariantsSempred(KeyListVariantsContext *_localctx, size_t predicateIndex);
  bool commonIndexOptionSempred(CommonIndexOptionContext *_localctx, size_t predicateIndex);
  bool charsetNameSempred(CharsetNameContext *_localctx, size_t predicateIndex);
  bool collationNameSempred(CollationNameContext *_localctx, size_t predicateIndex);
  bool createTableOptionSempred(CreateTableOptionContext *_localctx, size_t predicateIndex);
  bool pureIdentifierSempred(PureIdentifierContext *_localctx, size_t predicateIndex);
  bool real_ulonglong_numberSempred(Real_ulonglong_numberContext *_localctx, size_t predicateIndex);
  bool signedLiteralOrNullSempred(SignedLiteralOrNullContext *_localctx, size_t predicateIndex);
  bool literalOrNullSempred(LiteralOrNullContext *_localctx, size_t predicateIndex);
  bool textStringLiteralSempred(TextStringLiteralContext *_localctx, size_t predicateIndex);
  bool textStringHashSempred(TextStringHashContext *_localctx, size_t predicateIndex);
  bool identifierKeywordSempred(IdentifierKeywordContext *_localctx, size_t predicateIndex);
  bool labelKeywordSempred(LabelKeywordContext *_localctx, size_t predicateIndex);
  bool identifierKeywordsUnambiguousSempred(IdentifierKeywordsUnambiguousContext *_localctx, size_t predicateIndex);
  bool roleKeywordSempred(RoleKeywordContext *_localctx, size_t predicateIndex);
  bool roleOrLabelKeywordSempred(RoleOrLabelKeywordContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace antlr4
