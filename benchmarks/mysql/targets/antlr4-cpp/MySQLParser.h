/* Copyright (c) 2020, 2024, Oracle and/or its affiliates. */

/* eslint-disable @typescript-eslint/no-unused-vars */
/* eslint-disable no-useless-escape, no-lone-blocks */

/* cspell: disable */
#import "MySQLBaseRecognizer.h"


// Generated from ./targets/antlr4-cpp/MySQLParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace parsers {


class  MySQLParser : public MySQLBaseRecognizer {
public:
  enum {
    NOT2_SYMBOL = 1, CONCAT_PIPES_SYMBOL = 2, INT_NUMBER = 3, LONG_NUMBER = 4, 
    ULONGLONG_NUMBER = 5, EQUAL_OPERATOR = 6, ASSIGN_OPERATOR = 7, NULL_SAFE_EQUAL_OPERATOR = 8, 
    GREATER_OR_EQUAL_OPERATOR = 9, GREATER_THAN_OPERATOR = 10, LESS_OR_EQUAL_OPERATOR = 11, 
    LESS_THAN_OPERATOR = 12, NOT_EQUAL_OPERATOR = 13, PLUS_OPERATOR = 14, 
    MINUS_OPERATOR = 15, MULT_OPERATOR = 16, DIV_OPERATOR = 17, MOD_OPERATOR = 18, 
    LOGICAL_NOT_OPERATOR = 19, BITWISE_NOT_OPERATOR = 20, SHIFT_LEFT_OPERATOR = 21, 
    SHIFT_RIGHT_OPERATOR = 22, LOGICAL_AND_OPERATOR = 23, BITWISE_AND_OPERATOR = 24, 
    BITWISE_XOR_OPERATOR = 25, LOGICAL_OR_OPERATOR = 26, BITWISE_OR_OPERATOR = 27, 
    DOT_SYMBOL = 28, COMMA_SYMBOL = 29, SEMICOLON_SYMBOL = 30, COLON_SYMBOL = 31, 
    OPEN_PAR_SYMBOL = 32, CLOSE_PAR_SYMBOL = 33, OPEN_CURLY_SYMBOL = 34, 
    CLOSE_CURLY_SYMBOL = 35, UNDERLINE_SYMBOL = 36, JSON_SEPARATOR_SYMBOL = 37, 
    JSON_UNQUOTED_SEPARATOR_SYMBOL = 38, AT_SIGN_SYMBOL = 39, AT_TEXT_SUFFIX = 40, 
    AT_AT_SIGN_SYMBOL = 41, NULL2_SYMBOL = 42, PARAM_MARKER = 43, HEX_NUMBER = 44, 
    BIN_NUMBER = 45, DECIMAL_NUMBER = 46, FLOAT_NUMBER = 47, ACCESSIBLE_SYMBOL = 48, 
    ACCOUNT_SYMBOL = 49, ACTION_SYMBOL = 50, ADD_SYMBOL = 51, ADDDATE_SYMBOL = 52, 
    AFTER_SYMBOL = 53, AGAINST_SYMBOL = 54, AGGREGATE_SYMBOL = 55, ALGORITHM_SYMBOL = 56, 
    ALL_SYMBOL = 57, ALTER_SYMBOL = 58, ALWAYS_SYMBOL = 59, ANALYZE_SYMBOL = 60, 
    AND_SYMBOL = 61, ANY_SYMBOL = 62, AS_SYMBOL = 63, ASC_SYMBOL = 64, ASCII_SYMBOL = 65, 
    ASENSITIVE_SYMBOL = 66, AT_SYMBOL = 67, AUTOEXTEND_SIZE_SYMBOL = 68, 
    AUTO_INCREMENT_SYMBOL = 69, AVG_ROW_LENGTH_SYMBOL = 70, AVG_SYMBOL = 71, 
    BACKUP_SYMBOL = 72, BEFORE_SYMBOL = 73, BEGIN_SYMBOL = 74, BETWEEN_SYMBOL = 75, 
    BIGINT_SYMBOL = 76, BINARY_SYMBOL = 77, BINLOG_SYMBOL = 78, BIT_AND_SYMBOL = 79, 
    BIT_OR_SYMBOL = 80, BIT_SYMBOL = 81, BIT_XOR_SYMBOL = 82, BLOB_SYMBOL = 83, 
    BLOCK_SYMBOL = 84, BOOLEAN_SYMBOL = 85, BOOL_SYMBOL = 86, BOTH_SYMBOL = 87, 
    BTREE_SYMBOL = 88, BY_SYMBOL = 89, BYTE_SYMBOL = 90, CACHE_SYMBOL = 91, 
    CALL_SYMBOL = 92, CASCADE_SYMBOL = 93, CASCADED_SYMBOL = 94, CASE_SYMBOL = 95, 
    CAST_SYMBOL = 96, CATALOG_NAME_SYMBOL = 97, CHAIN_SYMBOL = 98, CHANGE_SYMBOL = 99, 
    CHANGED_SYMBOL = 100, CHANNEL_SYMBOL = 101, CHARSET_SYMBOL = 102, CHAR_SYMBOL = 103, 
    CHECKSUM_SYMBOL = 104, CHECK_SYMBOL = 105, CIPHER_SYMBOL = 106, CLASS_ORIGIN_SYMBOL = 107, 
    CLIENT_SYMBOL = 108, CLOSE_SYMBOL = 109, COALESCE_SYMBOL = 110, CODE_SYMBOL = 111, 
    COLLATE_SYMBOL = 112, COLLATION_SYMBOL = 113, COLUMNS_SYMBOL = 114, 
    COLUMN_SYMBOL = 115, COLUMN_NAME_SYMBOL = 116, COLUMN_FORMAT_SYMBOL = 117, 
    COMMENT_SYMBOL = 118, COMMITTED_SYMBOL = 119, COMMIT_SYMBOL = 120, COMPACT_SYMBOL = 121, 
    COMPLETION_SYMBOL = 122, COMPRESSED_SYMBOL = 123, COMPRESSION_SYMBOL = 124, 
    CONCURRENT_SYMBOL = 125, CONDITION_SYMBOL = 126, CONNECTION_SYMBOL = 127, 
    CONSISTENT_SYMBOL = 128, CONSTRAINT_SYMBOL = 129, CONSTRAINT_CATALOG_SYMBOL = 130, 
    CONSTRAINT_NAME_SYMBOL = 131, CONSTRAINT_SCHEMA_SYMBOL = 132, CONTAINS_SYMBOL = 133, 
    CONTEXT_SYMBOL = 134, CONTINUE_SYMBOL = 135, CONVERT_SYMBOL = 136, COUNT_SYMBOL = 137, 
    CPU_SYMBOL = 138, CREATE_SYMBOL = 139, CROSS_SYMBOL = 140, CUBE_SYMBOL = 141, 
    CURDATE_SYMBOL = 142, CURRENT_SYMBOL = 143, CURRENT_DATE_SYMBOL = 144, 
    CURRENT_TIME_SYMBOL = 145, CURRENT_USER_SYMBOL = 146, CURSOR_SYMBOL = 147, 
    CURSOR_NAME_SYMBOL = 148, CURTIME_SYMBOL = 149, DATABASE_SYMBOL = 150, 
    DATABASES_SYMBOL = 151, DATAFILE_SYMBOL = 152, DATA_SYMBOL = 153, DATETIME_SYMBOL = 154, 
    DATE_ADD_SYMBOL = 155, DATE_SUB_SYMBOL = 156, DATE_SYMBOL = 157, DAY_HOUR_SYMBOL = 158, 
    DAY_MICROSECOND_SYMBOL = 159, DAY_MINUTE_SYMBOL = 160, DAY_SECOND_SYMBOL = 161, 
    DAY_SYMBOL = 162, DEALLOCATE_SYMBOL = 163, DECIMAL_SYMBOL = 164, DECLARE_SYMBOL = 165, 
    DEFAULT_SYMBOL = 166, DEFAULT_AUTH_SYMBOL = 167, DEFINER_SYMBOL = 168, 
    DELAYED_SYMBOL = 169, DELAY_KEY_WRITE_SYMBOL = 170, DELETE_SYMBOL = 171, 
    DESC_SYMBOL = 172, DESCRIBE_SYMBOL = 173, DETERMINISTIC_SYMBOL = 174, 
    DIAGNOSTICS_SYMBOL = 175, DIRECTORY_SYMBOL = 176, DISABLE_SYMBOL = 177, 
    DISCARD_SYMBOL = 178, DISK_SYMBOL = 179, DISTINCT_SYMBOL = 180, DIV_SYMBOL = 181, 
    DOUBLE_SYMBOL = 182, DO_SYMBOL = 183, DROP_SYMBOL = 184, DUAL_SYMBOL = 185, 
    DUMPFILE_SYMBOL = 186, DUPLICATE_SYMBOL = 187, DYNAMIC_SYMBOL = 188, 
    EACH_SYMBOL = 189, ELSE_SYMBOL = 190, ELSEIF_SYMBOL = 191, ENABLE_SYMBOL = 192, 
    ENCLOSED_SYMBOL = 193, ENCRYPTION_SYMBOL = 194, END_SYMBOL = 195, ENDS_SYMBOL = 196, 
    ENGINES_SYMBOL = 197, ENGINE_SYMBOL = 198, ENUM_SYMBOL = 199, ERROR_SYMBOL = 200, 
    ERRORS_SYMBOL = 201, ESCAPED_SYMBOL = 202, ESCAPE_SYMBOL = 203, EVENTS_SYMBOL = 204, 
    EVENT_SYMBOL = 205, EVERY_SYMBOL = 206, EXCHANGE_SYMBOL = 207, EXECUTE_SYMBOL = 208, 
    EXISTS_SYMBOL = 209, EXIT_SYMBOL = 210, EXPANSION_SYMBOL = 211, EXPIRE_SYMBOL = 212, 
    EXPLAIN_SYMBOL = 213, EXPORT_SYMBOL = 214, EXTENDED_SYMBOL = 215, EXTENT_SIZE_SYMBOL = 216, 
    EXTRACT_SYMBOL = 217, FALSE_SYMBOL = 218, FAST_SYMBOL = 219, FAULTS_SYMBOL = 220, 
    FETCH_SYMBOL = 221, FILE_SYMBOL = 222, FILE_BLOCK_SIZE_SYMBOL = 223, 
    FILTER_SYMBOL = 224, FIRST_SYMBOL = 225, FIXED_SYMBOL = 226, FLOAT_SYMBOL = 227, 
    FLUSH_SYMBOL = 228, FOLLOWS_SYMBOL = 229, FORCE_SYMBOL = 230, FOREIGN_SYMBOL = 231, 
    FOR_SYMBOL = 232, FORMAT_SYMBOL = 233, FOUND_SYMBOL = 234, FROM_SYMBOL = 235, 
    FULL_SYMBOL = 236, FULLTEXT_SYMBOL = 237, FUNCTION_SYMBOL = 238, GET_SYMBOL = 239, 
    GENERAL_SYMBOL = 240, GENERATED_SYMBOL = 241, GROUP_REPLICATION_SYMBOL = 242, 
    GEOMETRYCOLLECTION_SYMBOL = 243, GEOMETRY_SYMBOL = 244, GET_FORMAT_SYMBOL = 245, 
    GLOBAL_SYMBOL = 246, GRANT_SYMBOL = 247, GRANTS_SYMBOL = 248, GROUP_SYMBOL = 249, 
    GROUP_CONCAT_SYMBOL = 250, HANDLER_SYMBOL = 251, HASH_SYMBOL = 252, 
    HAVING_SYMBOL = 253, HELP_SYMBOL = 254, HIGH_PRIORITY_SYMBOL = 255, 
    HOST_SYMBOL = 256, HOSTS_SYMBOL = 257, HOUR_MICROSECOND_SYMBOL = 258, 
    HOUR_MINUTE_SYMBOL = 259, HOUR_SECOND_SYMBOL = 260, HOUR_SYMBOL = 261, 
    IDENTIFIED_SYMBOL = 262, IF_SYMBOL = 263, IGNORE_SYMBOL = 264, IGNORE_SERVER_IDS_SYMBOL = 265, 
    IMPORT_SYMBOL = 266, INDEXES_SYMBOL = 267, INDEX_SYMBOL = 268, INFILE_SYMBOL = 269, 
    INITIAL_SIZE_SYMBOL = 270, INNER_SYMBOL = 271, INOUT_SYMBOL = 272, INSENSITIVE_SYMBOL = 273, 
    INSERT_SYMBOL = 274, INSERT_METHOD_SYMBOL = 275, INSTANCE_SYMBOL = 276, 
    INSTALL_SYMBOL = 277, INTERVAL_SYMBOL = 278, INTO_SYMBOL = 279, INT_SYMBOL = 280, 
    INVOKER_SYMBOL = 281, IN_SYMBOL = 282, IO_AFTER_GTIDS_SYMBOL = 283, 
    IO_BEFORE_GTIDS_SYMBOL = 284, IO_SYMBOL = 285, IPC_SYMBOL = 286, IS_SYMBOL = 287, 
    ISOLATION_SYMBOL = 288, ISSUER_SYMBOL = 289, ITERATE_SYMBOL = 290, JOIN_SYMBOL = 291, 
    JSON_SYMBOL = 292, KEYS_SYMBOL = 293, KEY_BLOCK_SIZE_SYMBOL = 294, KEY_SYMBOL = 295, 
    KILL_SYMBOL = 296, LANGUAGE_SYMBOL = 297, LAST_SYMBOL = 298, LEADING_SYMBOL = 299, 
    LEAVES_SYMBOL = 300, LEAVE_SYMBOL = 301, LEFT_SYMBOL = 302, LESS_SYMBOL = 303, 
    LEVEL_SYMBOL = 304, LIKE_SYMBOL = 305, LIMIT_SYMBOL = 306, LINEAR_SYMBOL = 307, 
    LINES_SYMBOL = 308, LINESTRING_SYMBOL = 309, LIST_SYMBOL = 310, LOAD_SYMBOL = 311, 
    LOCAL_SYMBOL = 312, LOCKS_SYMBOL = 313, LOCK_SYMBOL = 314, LOGFILE_SYMBOL = 315, 
    LOGS_SYMBOL = 316, LONGBLOB_SYMBOL = 317, LONGTEXT_SYMBOL = 318, LONG_SYMBOL = 319, 
    LOOP_SYMBOL = 320, LOW_PRIORITY_SYMBOL = 321, MASTER_AUTO_POSITION_SYMBOL = 322, 
    MASTER_BIND_SYMBOL = 323, MASTER_CONNECT_RETRY_SYMBOL = 324, MASTER_DELAY_SYMBOL = 325, 
    MASTER_HOST_SYMBOL = 326, MASTER_LOG_FILE_SYMBOL = 327, MASTER_LOG_POS_SYMBOL = 328, 
    MASTER_PASSWORD_SYMBOL = 329, MASTER_PORT_SYMBOL = 330, MASTER_RETRY_COUNT_SYMBOL = 331, 
    MASTER_SSL_CAPATH_SYMBOL = 332, MASTER_SSL_CA_SYMBOL = 333, MASTER_SSL_CERT_SYMBOL = 334, 
    MASTER_SSL_CIPHER_SYMBOL = 335, MASTER_SSL_CRL_SYMBOL = 336, MASTER_SSL_CRLPATH_SYMBOL = 337, 
    MASTER_SSL_KEY_SYMBOL = 338, MASTER_SSL_SYMBOL = 339, MASTER_SSL_VERIFY_SERVER_CERT_SYMBOL = 340, 
    MASTER_SYMBOL = 341, MASTER_TLS_VERSION_SYMBOL = 342, MASTER_USER_SYMBOL = 343, 
    MASTER_HEARTBEAT_PERIOD_SYMBOL = 344, MATCH_SYMBOL = 345, MAX_CONNECTIONS_PER_HOUR_SYMBOL = 346, 
    MAX_QUERIES_PER_HOUR_SYMBOL = 347, MAX_ROWS_SYMBOL = 348, MAX_SIZE_SYMBOL = 349, 
    MAX_SYMBOL = 350, MAX_UPDATES_PER_HOUR_SYMBOL = 351, MAX_USER_CONNECTIONS_SYMBOL = 352, 
    MAXVALUE_SYMBOL = 353, MEDIUMBLOB_SYMBOL = 354, MEDIUMINT_SYMBOL = 355, 
    MEDIUMTEXT_SYMBOL = 356, MEDIUM_SYMBOL = 357, MEMORY_SYMBOL = 358, MERGE_SYMBOL = 359, 
    MESSAGE_TEXT_SYMBOL = 360, MICROSECOND_SYMBOL = 361, MID_SYMBOL = 362, 
    MIGRATE_SYMBOL = 363, MINUTE_MICROSECOND_SYMBOL = 364, MINUTE_SECOND_SYMBOL = 365, 
    MINUTE_SYMBOL = 366, MIN_ROWS_SYMBOL = 367, MIN_SYMBOL = 368, MODE_SYMBOL = 369, 
    MODIFIES_SYMBOL = 370, MODIFY_SYMBOL = 371, MOD_SYMBOL = 372, MONTH_SYMBOL = 373, 
    MULTILINESTRING_SYMBOL = 374, MULTIPOINT_SYMBOL = 375, MULTIPOLYGON_SYMBOL = 376, 
    MUTEX_SYMBOL = 377, MYSQL_ERRNO_SYMBOL = 378, NAMES_SYMBOL = 379, NAME_SYMBOL = 380, 
    NATIONAL_SYMBOL = 381, NATURAL_SYMBOL = 382, NCHAR_SYMBOL = 383, NDBCLUSTER_SYMBOL = 384, 
    NEVER_SYMBOL = 385, NEW_SYMBOL = 386, NEXT_SYMBOL = 387, NODEGROUP_SYMBOL = 388, 
    NONE_SYMBOL = 389, NOT_SYMBOL = 390, NOW_SYMBOL = 391, NO_SYMBOL = 392, 
    NO_WAIT_SYMBOL = 393, NO_WRITE_TO_BINLOG_SYMBOL = 394, NULL_SYMBOL = 395, 
    NUMBER_SYMBOL = 396, NUMERIC_SYMBOL = 397, NVARCHAR_SYMBOL = 398, OFFLINE_SYMBOL = 399, 
    OFFSET_SYMBOL = 400, ON_SYMBOL = 401, ONE_SYMBOL = 402, ONLINE_SYMBOL = 403, 
    ONLY_SYMBOL = 404, OPEN_SYMBOL = 405, OPTIMIZE_SYMBOL = 406, OPTIMIZER_COSTS_SYMBOL = 407, 
    OPTIONS_SYMBOL = 408, OPTION_SYMBOL = 409, OPTIONALLY_SYMBOL = 410, 
    ORDER_SYMBOL = 411, OR_SYMBOL = 412, OUTER_SYMBOL = 413, OUTFILE_SYMBOL = 414, 
    OUT_SYMBOL = 415, OWNER_SYMBOL = 416, PACK_KEYS_SYMBOL = 417, PAGE_SYMBOL = 418, 
    PARSER_SYMBOL = 419, PARTIAL_SYMBOL = 420, PARTITIONING_SYMBOL = 421, 
    PARTITIONS_SYMBOL = 422, PARTITION_SYMBOL = 423, PASSWORD_SYMBOL = 424, 
    PHASE_SYMBOL = 425, PLUGINS_SYMBOL = 426, PLUGIN_DIR_SYMBOL = 427, PLUGIN_SYMBOL = 428, 
    POINT_SYMBOL = 429, POLYGON_SYMBOL = 430, PORT_SYMBOL = 431, POSITION_SYMBOL = 432, 
    PRECEDES_SYMBOL = 433, PRECISION_SYMBOL = 434, PREPARE_SYMBOL = 435, 
    PRESERVE_SYMBOL = 436, PREV_SYMBOL = 437, PRIMARY_SYMBOL = 438, PRIVILEGES_SYMBOL = 439, 
    PROCEDURE_SYMBOL = 440, PROCESS_SYMBOL = 441, PROCESSLIST_SYMBOL = 442, 
    PROFILE_SYMBOL = 443, PROFILES_SYMBOL = 444, PROXY_SYMBOL = 445, PURGE_SYMBOL = 446, 
    QUARTER_SYMBOL = 447, QUERY_SYMBOL = 448, QUICK_SYMBOL = 449, RANGE_SYMBOL = 450, 
    READS_SYMBOL = 451, READ_ONLY_SYMBOL = 452, READ_SYMBOL = 453, READ_WRITE_SYMBOL = 454, 
    REAL_SYMBOL = 455, REBUILD_SYMBOL = 456, RECOVER_SYMBOL = 457, REDO_BUFFER_SIZE_SYMBOL = 458, 
    REDUNDANT_SYMBOL = 459, REFERENCES_SYMBOL = 460, REGEXP_SYMBOL = 461, 
    RELAY_SYMBOL = 462, RELAYLOG_SYMBOL = 463, RELAY_LOG_FILE_SYMBOL = 464, 
    RELAY_LOG_POS_SYMBOL = 465, RELAY_THREAD_SYMBOL = 466, RELEASE_SYMBOL = 467, 
    RELOAD_SYMBOL = 468, REMOVE_SYMBOL = 469, RENAME_SYMBOL = 470, REORGANIZE_SYMBOL = 471, 
    REPAIR_SYMBOL = 472, REPEATABLE_SYMBOL = 473, REPEAT_SYMBOL = 474, REPLACE_SYMBOL = 475, 
    REPLICATION_SYMBOL = 476, REPLICATE_DO_DB_SYMBOL = 477, REPLICATE_IGNORE_DB_SYMBOL = 478, 
    REPLICATE_DO_TABLE_SYMBOL = 479, REPLICATE_IGNORE_TABLE_SYMBOL = 480, 
    REPLICATE_WILD_DO_TABLE_SYMBOL = 481, REPLICATE_WILD_IGNORE_TABLE_SYMBOL = 482, 
    REPLICATE_REWRITE_DB_SYMBOL = 483, REQUIRE_SYMBOL = 484, RESET_SYMBOL = 485, 
    RESIGNAL_SYMBOL = 486, RESTORE_SYMBOL = 487, RESTRICT_SYMBOL = 488, 
    RESUME_SYMBOL = 489, RETURNED_SQLSTATE_SYMBOL = 490, RETURNS_SYMBOL = 491, 
    RETURN_SYMBOL = 492, REVERSE_SYMBOL = 493, REVOKE_SYMBOL = 494, RIGHT_SYMBOL = 495, 
    ROLLBACK_SYMBOL = 496, ROLLUP_SYMBOL = 497, ROTATE_SYMBOL = 498, ROUTINE_SYMBOL = 499, 
    ROWS_SYMBOL = 500, ROW_COUNT_SYMBOL = 501, ROW_FORMAT_SYMBOL = 502, 
    ROW_SYMBOL = 503, RTREE_SYMBOL = 504, SAVEPOINT_SYMBOL = 505, SCHEDULE_SYMBOL = 506, 
    SCHEMA_NAME_SYMBOL = 507, SECOND_MICROSECOND_SYMBOL = 508, SECOND_SYMBOL = 509, 
    SECURITY_SYMBOL = 510, SELECT_SYMBOL = 511, SENSITIVE_SYMBOL = 512, 
    SEPARATOR_SYMBOL = 513, SERIALIZABLE_SYMBOL = 514, SERIAL_SYMBOL = 515, 
    SESSION_SYMBOL = 516, SERVER_SYMBOL = 517, SESSION_USER_SYMBOL = 518, 
    SET_SYMBOL = 519, SHARE_SYMBOL = 520, SHOW_SYMBOL = 521, SHUTDOWN_SYMBOL = 522, 
    SIGNAL_SYMBOL = 523, SIGNED_SYMBOL = 524, SIMPLE_SYMBOL = 525, SLAVE_SYMBOL = 526, 
    SLOW_SYMBOL = 527, SMALLINT_SYMBOL = 528, SNAPSHOT_SYMBOL = 529, SOCKET_SYMBOL = 530, 
    SONAME_SYMBOL = 531, SOUNDS_SYMBOL = 532, SOURCE_SYMBOL = 533, SPATIAL_SYMBOL = 534, 
    SPECIFIC_SYMBOL = 535, SQLEXCEPTION_SYMBOL = 536, SQLSTATE_SYMBOL = 537, 
    SQLWARNING_SYMBOL = 538, SQL_AFTER_GTIDS_SYMBOL = 539, SQL_AFTER_MTS_GAPS_SYMBOL = 540, 
    SQL_BEFORE_GTIDS_SYMBOL = 541, SQL_BIG_RESULT_SYMBOL = 542, SQL_BUFFER_RESULT_SYMBOL = 543, 
    SQL_CALC_FOUND_ROWS_SYMBOL = 544, SQL_NO_CACHE_SYMBOL = 545, SQL_SMALL_RESULT_SYMBOL = 546, 
    SQL_SYMBOL = 547, SQL_THREAD_SYMBOL = 548, SSL_SYMBOL = 549, STACKED_SYMBOL = 550, 
    STARTING_SYMBOL = 551, STARTS_SYMBOL = 552, START_SYMBOL = 553, STATS_AUTO_RECALC_SYMBOL = 554, 
    STATS_PERSISTENT_SYMBOL = 555, STATS_SAMPLE_PAGES_SYMBOL = 556, STATUS_SYMBOL = 557, 
    STDDEV_SAMP_SYMBOL = 558, STDDEV_SYMBOL = 559, STDDEV_POP_SYMBOL = 560, 
    STD_SYMBOL = 561, STOP_SYMBOL = 562, STORAGE_SYMBOL = 563, STORED_SYMBOL = 564, 
    STRAIGHT_JOIN_SYMBOL = 565, STRING_SYMBOL = 566, SUBCLASS_ORIGIN_SYMBOL = 567, 
    SUBDATE_SYMBOL = 568, SUBJECT_SYMBOL = 569, SUBPARTITIONS_SYMBOL = 570, 
    SUBPARTITION_SYMBOL = 571, SUBSTR_SYMBOL = 572, SUBSTRING_SYMBOL = 573, 
    SUM_SYMBOL = 574, SUPER_SYMBOL = 575, SUSPEND_SYMBOL = 576, SWAPS_SYMBOL = 577, 
    SWITCHES_SYMBOL = 578, SYSDATE_SYMBOL = 579, SYSTEM_USER_SYMBOL = 580, 
    TABLES_SYMBOL = 581, TABLESPACE_SYMBOL = 582, TABLE_SYMBOL = 583, TABLE_CHECKSUM_SYMBOL = 584, 
    TABLE_NAME_SYMBOL = 585, TEMPORARY_SYMBOL = 586, TEMPTABLE_SYMBOL = 587, 
    TERMINATED_SYMBOL = 588, TEXT_SYMBOL = 589, THAN_SYMBOL = 590, THEN_SYMBOL = 591, 
    TIMESTAMP_SYMBOL = 592, TIMESTAMPADD_SYMBOL = 593, TIMESTAMPDIFF_SYMBOL = 594, 
    TIME_SYMBOL = 595, TINYBLOB_SYMBOL = 596, TINYINT_SYMBOL = 597, TINYTEXT_SYMBOL = 598, 
    TO_SYMBOL = 599, TRAILING_SYMBOL = 600, TRANSACTION_SYMBOL = 601, TRIGGERS_SYMBOL = 602, 
    TRIGGER_SYMBOL = 603, TRIM_SYMBOL = 604, TRUE_SYMBOL = 605, TRUNCATE_SYMBOL = 606, 
    TYPES_SYMBOL = 607, TYPE_SYMBOL = 608, UDF_RETURNS_SYMBOL = 609, UNCOMMITTED_SYMBOL = 610, 
    UNDEFINED_SYMBOL = 611, UNDOFILE_SYMBOL = 612, UNDO_BUFFER_SIZE_SYMBOL = 613, 
    UNDO_SYMBOL = 614, UNICODE_SYMBOL = 615, UNINSTALL_SYMBOL = 616, UNION_SYMBOL = 617, 
    UNIQUE_SYMBOL = 618, UNKNOWN_SYMBOL = 619, UNLOCK_SYMBOL = 620, UNSIGNED_SYMBOL = 621, 
    UNTIL_SYMBOL = 622, UPDATE_SYMBOL = 623, UPGRADE_SYMBOL = 624, USAGE_SYMBOL = 625, 
    USER_RESOURCES_SYMBOL = 626, USER_SYMBOL = 627, USE_FRM_SYMBOL = 628, 
    USE_SYMBOL = 629, USING_SYMBOL = 630, UTC_DATE_SYMBOL = 631, UTC_TIMESTAMP_SYMBOL = 632, 
    UTC_TIME_SYMBOL = 633, VALIDATION_SYMBOL = 634, VALUES_SYMBOL = 635, 
    VALUE_SYMBOL = 636, VARBINARY_SYMBOL = 637, VARCHAR_SYMBOL = 638, VARIABLES_SYMBOL = 639, 
    VARIANCE_SYMBOL = 640, VARYING_SYMBOL = 641, VAR_POP_SYMBOL = 642, VAR_SAMP_SYMBOL = 643, 
    VIEW_SYMBOL = 644, VIRTUAL_SYMBOL = 645, WAIT_SYMBOL = 646, WARNINGS_SYMBOL = 647, 
    WEEK_SYMBOL = 648, WEIGHT_STRING_SYMBOL = 649, WHEN_SYMBOL = 650, WHERE_SYMBOL = 651, 
    WHILE_SYMBOL = 652, WITH_SYMBOL = 653, WITHOUT_SYMBOL = 654, WORK_SYMBOL = 655, 
    WRAPPER_SYMBOL = 656, WRITE_SYMBOL = 657, X509_SYMBOL = 658, XA_SYMBOL = 659, 
    XID_SYMBOL = 660, XML_SYMBOL = 661, XOR_SYMBOL = 662, YEAR_MONTH_SYMBOL = 663, 
    YEAR_SYMBOL = 664, ZEROFILL_SYMBOL = 665, PERSIST_SYMBOL = 666, ROLE_SYMBOL = 667, 
    ADMIN_SYMBOL = 668, INVISIBLE_SYMBOL = 669, VISIBLE_SYMBOL = 670, EXCEPT_SYMBOL = 671, 
    COMPONENT_SYMBOL = 672, RECURSIVE_SYMBOL = 673, JSON_OBJECTAGG_SYMBOL = 674, 
    JSON_ARRAYAGG_SYMBOL = 675, OF_SYMBOL = 676, SKIP_SYMBOL = 677, LOCKED_SYMBOL = 678, 
    NOWAIT_SYMBOL = 679, GROUPING_SYMBOL = 680, PERSIST_ONLY_SYMBOL = 681, 
    HISTOGRAM_SYMBOL = 682, BUCKETS_SYMBOL = 683, REMOTE_SYMBOL = 684, CLONE_SYMBOL = 685, 
    CUME_DIST_SYMBOL = 686, DENSE_RANK_SYMBOL = 687, EXCLUDE_SYMBOL = 688, 
    FIRST_VALUE_SYMBOL = 689, FOLLOWING_SYMBOL = 690, GROUPS_SYMBOL = 691, 
    LAG_SYMBOL = 692, LAST_VALUE_SYMBOL = 693, LEAD_SYMBOL = 694, NTH_VALUE_SYMBOL = 695, 
    NTILE_SYMBOL = 696, NULLS_SYMBOL = 697, OTHERS_SYMBOL = 698, OVER_SYMBOL = 699, 
    PERCENT_RANK_SYMBOL = 700, PRECEDING_SYMBOL = 701, RANK_SYMBOL = 702, 
    RESPECT_SYMBOL = 703, ROW_NUMBER_SYMBOL = 704, TIES_SYMBOL = 705, UNBOUNDED_SYMBOL = 706, 
    WINDOW_SYMBOL = 707, EMPTY_SYMBOL = 708, JSON_TABLE_SYMBOL = 709, NESTED_SYMBOL = 710, 
    ORDINALITY_SYMBOL = 711, PATH_SYMBOL = 712, HISTORY_SYMBOL = 713, REUSE_SYMBOL = 714, 
    SRID_SYMBOL = 715, THREAD_PRIORITY_SYMBOL = 716, RESOURCE_SYMBOL = 717, 
    SYSTEM_SYMBOL = 718, VCPU_SYMBOL = 719, MASTER_PUBLIC_KEY_PATH_SYMBOL = 720, 
    GET_MASTER_PUBLIC_KEY_SYMBOL = 721, RESTART_SYMBOL = 722, DEFINITION_SYMBOL = 723, 
    DESCRIPTION_SYMBOL = 724, ORGANIZATION_SYMBOL = 725, REFERENCE_SYMBOL = 726, 
    OPTIONAL_SYMBOL = 727, SECONDARY_SYMBOL = 728, SECONDARY_ENGINE_SYMBOL = 729, 
    SECONDARY_LOAD_SYMBOL = 730, SECONDARY_UNLOAD_SYMBOL = 731, ACTIVE_SYMBOL = 732, 
    INACTIVE_SYMBOL = 733, LATERAL_SYMBOL = 734, RETAIN_SYMBOL = 735, OLD_SYMBOL = 736, 
    NETWORK_NAMESPACE_SYMBOL = 737, ENFORCED_SYMBOL = 738, ARRAY_SYMBOL = 739, 
    OJ_SYMBOL = 740, MEMBER_SYMBOL = 741, RANDOM_SYMBOL = 742, MASTER_COMPRESSION_ALGORITHM_SYMBOL = 743, 
    MASTER_ZSTD_COMPRESSION_LEVEL_SYMBOL = 744, PRIVILEGE_CHECKS_USER_SYMBOL = 745, 
    MASTER_TLS_CIPHERSUITES_SYMBOL = 746, REQUIRE_ROW_FORMAT_SYMBOL = 747, 
    PASSWORD_LOCK_TIME_SYMBOL = 748, FAILED_LOGIN_ATTEMPTS_SYMBOL = 749, 
    REQUIRE_TABLE_PRIMARY_KEY_CHECK_SYMBOL = 750, STREAM_SYMBOL = 751, OFF_SYMBOL = 752, 
    RETURNING_SYMBOL = 753, JSON_VALUE_SYMBOL = 754, TLS_SYMBOL = 755, ATTRIBUTE_SYMBOL = 756, 
    ENGINE_ATTRIBUTE_SYMBOL = 757, SECONDARY_ENGINE_ATTRIBUTE_SYMBOL = 758, 
    SOURCE_CONNECTION_AUTO_FAILOVER_SYMBOL = 759, ZONE_SYMBOL = 760, GRAMMAR_SELECTOR_DERIVED_EXPR = 761, 
    REPLICA_SYMBOL = 762, REPLICAS_SYMBOL = 763, ASSIGN_GTIDS_TO_ANONYMOUS_TRANSACTIONS_SYMBOL = 764, 
    GET_SOURCE_PUBLIC_KEY_SYMBOL = 765, SOURCE_AUTO_POSITION_SYMBOL = 766, 
    SOURCE_BIND_SYMBOL = 767, SOURCE_COMPRESSION_ALGORITHM_SYMBOL = 768, 
    SOURCE_CONNECT_RETRY_SYMBOL = 769, SOURCE_DELAY_SYMBOL = 770, SOURCE_HEARTBEAT_PERIOD_SYMBOL = 771, 
    SOURCE_HOST_SYMBOL = 772, SOURCE_LOG_FILE_SYMBOL = 773, SOURCE_LOG_POS_SYMBOL = 774, 
    SOURCE_PASSWORD_SYMBOL = 775, SOURCE_PORT_SYMBOL = 776, SOURCE_PUBLIC_KEY_PATH_SYMBOL = 777, 
    SOURCE_RETRY_COUNT_SYMBOL = 778, SOURCE_SSL_SYMBOL = 779, SOURCE_SSL_CA_SYMBOL = 780, 
    SOURCE_SSL_CAPATH_SYMBOL = 781, SOURCE_SSL_CERT_SYMBOL = 782, SOURCE_SSL_CIPHER_SYMBOL = 783, 
    SOURCE_SSL_CRL_SYMBOL = 784, SOURCE_SSL_CRLPATH_SYMBOL = 785, SOURCE_SSL_KEY_SYMBOL = 786, 
    SOURCE_SSL_VERIFY_SERVER_CERT_SYMBOL = 787, SOURCE_TLS_CIPHERSUITES_SYMBOL = 788, 
    SOURCE_TLS_VERSION_SYMBOL = 789, SOURCE_USER_SYMBOL = 790, SOURCE_ZSTD_COMPRESSION_LEVEL_SYMBOL = 791, 
    ST_COLLECT_SYMBOL = 792, KEYRING_SYMBOL = 793, AUTHENTICATION_SYMBOL = 794, 
    FACTOR_SYMBOL = 795, FINISH_SYMBOL = 796, INITIATE_SYMBOL = 797, REGISTRATION_SYMBOL = 798, 
    UNREGISTER_SYMBOL = 799, INITIAL_SYMBOL = 800, CHALLENGE_RESPONSE_SYMBOL = 801, 
    GTID_ONLY_SYMBOL = 802, INTERSECT_SYMBOL = 803, BULK_SYMBOL = 804, URL_SYMBOL = 805, 
    GENERATE_SYMBOL = 806, PARSE_TREE_SYMBOL = 807, LOG_SYMBOL = 808, GTIDS_SYMBOL = 809, 
    PARALLEL_SYMBOL = 810, S3_SYMBOL = 811, QUALIFY_SYMBOL = 812, AUTO_SYMBOL = 813, 
    MANUAL_SYMBOL = 814, BENROULLI_SYMBOL = 815, TABLESAMPLE_SYMBOL = 816, 
    WHITESPACE = 817, INVALID_INPUT = 818, UNDERSCORE_CHARSET = 819, IDENTIFIER = 820, 
    NCHAR_TEXT = 821, BACK_TICK_QUOTED_ID = 822, DOUBLE_QUOTED_TEXT = 823, 
    SINGLE_QUOTED_TEXT = 824, DOLLAR_QUOTED_STRING_TEXT = 825, VERSION_COMMENT_START = 826, 
    MYSQL_COMMENT_START = 827, VERSION_COMMENT_END = 828, BLOCK_COMMENT = 829, 
    INVALID_BLOCK_COMMENT = 830, POUND_COMMENT = 831, DASHDASH_COMMENT = 832, 
    NOT_EQUAL2_OPERATOR = 833
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
    RuleCreateProcedure = 51, RuleRoutineString = 52, RuleStoredRoutineBody = 53, 
    RuleCreateFunction = 54, RuleCreateUdf = 55, RuleRoutineCreateOption = 56, 
    RuleRoutineAlterOptions = 57, RuleRoutineOption = 58, RuleCreateIndex = 59, 
    RuleIndexNameAndType = 60, RuleCreateIndexTarget = 61, RuleCreateLogfileGroup = 62, 
    RuleLogfileGroupOptions = 63, RuleLogfileGroupOption = 64, RuleCreateServer = 65, 
    RuleServerOptions = 66, RuleServerOption = 67, RuleCreateTablespace = 68, 
    RuleCreateUndoTablespace = 69, RuleTsDataFileName = 70, RuleTsDataFile = 71, 
    RuleTablespaceOptions = 72, RuleTablespaceOption = 73, RuleTsOptionInitialSize = 74, 
    RuleTsOptionUndoRedoBufferSize = 75, RuleTsOptionAutoextendSize = 76, 
    RuleTsOptionMaxSize = 77, RuleTsOptionExtentSize = 78, RuleTsOptionNodegroup = 79, 
    RuleTsOptionEngine = 80, RuleTsOptionWait = 81, RuleTsOptionComment = 82, 
    RuleTsOptionFileblockSize = 83, RuleTsOptionEncryption = 84, RuleTsOptionEngineAttribute = 85, 
    RuleCreateView = 86, RuleViewReplaceOrAlgorithm = 87, RuleViewAlgorithm = 88, 
    RuleViewSuid = 89, RuleCreateTrigger = 90, RuleTriggerFollowsPrecedesClause = 91, 
    RuleCreateEvent = 92, RuleCreateRole = 93, RuleCreateSpatialReference = 94, 
    RuleSrsAttribute = 95, RuleDropStatement = 96, RuleDropDatabase = 97, 
    RuleDropEvent = 98, RuleDropFunction = 99, RuleDropProcedure = 100, 
    RuleDropIndex = 101, RuleDropLogfileGroup = 102, RuleDropLogfileGroupOption = 103, 
    RuleDropServer = 104, RuleDropTable = 105, RuleDropTableSpace = 106, 
    RuleDropTrigger = 107, RuleDropView = 108, RuleDropRole = 109, RuleDropSpatialReference = 110, 
    RuleDropUndoTablespace = 111, RuleRenameTableStatement = 112, RuleRenamePair = 113, 
    RuleTruncateTableStatement = 114, RuleImportStatement = 115, RuleCallStatement = 116, 
    RuleDeleteStatement = 117, RulePartitionDelete = 118, RuleDeleteStatementOption = 119, 
    RuleDoStatement = 120, RuleHandlerStatement = 121, RuleHandlerReadOrScan = 122, 
    RuleInsertStatement = 123, RuleInsertLockOption = 124, RuleInsertFromConstructor = 125, 
    RuleFields = 126, RuleInsertValues = 127, RuleInsertQueryExpression = 128, 
    RuleValueList = 129, RuleValues = 130, RuleValuesReference = 131, RuleInsertUpdateList = 132, 
    RuleLoadStatement = 133, RuleDataOrXml = 134, RuleLoadDataLock = 135, 
    RuleLoadFrom = 136, RuleLoadSourceType = 137, RuleSourceCount = 138, 
    RuleSourceOrder = 139, RuleXmlRowsIdentifiedBy = 140, RuleLoadDataFileTail = 141, 
    RuleLoadDataFileTargetList = 142, RuleFieldOrVariableList = 143, RuleLoadAlgorithm = 144, 
    RuleLoadParallel = 145, RuleLoadMemory = 146, RuleReplaceStatement = 147, 
    RuleSelectStatement = 148, RuleSelectStatementWithInto = 149, RuleQueryExpression = 150, 
    RuleQueryExpressionBody = 151, RuleQueryExpressionParens = 152, RuleQueryPrimary = 153, 
    RuleQuerySpecification = 154, RuleSubquery = 155, RuleQuerySpecOption = 156, 
    RuleLimitClause = 157, RuleSimpleLimitClause = 158, RuleLimitOptions = 159, 
    RuleLimitOption = 160, RuleIntoClause = 161, RuleProcedureAnalyseClause = 162, 
    RuleHavingClause = 163, RuleQualifyClause = 164, RuleWindowClause = 165, 
    RuleWindowDefinition = 166, RuleWindowSpec = 167, RuleWindowSpecDetails = 168, 
    RuleWindowFrameClause = 169, RuleWindowFrameUnits = 170, RuleWindowFrameExtent = 171, 
    RuleWindowFrameStart = 172, RuleWindowFrameBetween = 173, RuleWindowFrameBound = 174, 
    RuleWindowFrameExclusion = 175, RuleWithClause = 176, RuleCommonTableExpression = 177, 
    RuleGroupByClause = 178, RuleOlapOption = 179, RuleOrderClause = 180, 
    RuleDirection = 181, RuleFromClause = 182, RuleTableReferenceList = 183, 
    RuleTableValueConstructor = 184, RuleExplicitTable = 185, RuleRowValueExplicit = 186, 
    RuleSelectOption = 187, RuleLockingClauseList = 188, RuleLockingClause = 189, 
    RuleLockStrengh = 190, RuleLockedRowAction = 191, RuleSelectItemList = 192, 
    RuleSelectItem = 193, RuleSelectAlias = 194, RuleWhereClause = 195, 
    RuleTableReference = 196, RuleEscapedTableReference = 197, RuleJoinedTable = 198, 
    RuleNaturalJoinType = 199, RuleInnerJoinType = 200, RuleOuterJoinType = 201, 
    RuleTableFactor = 202, RuleSingleTable = 203, RuleSingleTableParens = 204, 
    RuleDerivedTable = 205, RuleTableReferenceListParens = 206, RuleTableFunction = 207, 
    RuleColumnsClause = 208, RuleJtColumn = 209, RuleOnEmptyOrError = 210, 
    RuleOnEmptyOrErrorJsonTable = 211, RuleOnEmpty = 212, RuleOnError = 213, 
    RuleJsonOnResponse = 214, RuleUnionOption = 215, RuleTableAlias = 216, 
    RuleIndexHintList = 217, RuleIndexHint = 218, RuleIndexHintType = 219, 
    RuleKeyOrIndex = 220, RuleConstraintKeyType = 221, RuleIndexHintClause = 222, 
    RuleIndexList = 223, RuleIndexListElement = 224, RuleUpdateStatement = 225, 
    RuleTransactionOrLockingStatement = 226, RuleTransactionStatement = 227, 
    RuleBeginWork = 228, RuleStartTransactionOptionList = 229, RuleSavepointStatement = 230, 
    RuleLockStatement = 231, RuleLockItem = 232, RuleLockOption = 233, RuleXaStatement = 234, 
    RuleXaConvert = 235, RuleXid = 236, RuleReplicationStatement = 237, 
    RulePurgeOptions = 238, RuleResetOption = 239, RuleMasterOrBinaryLogsAndGtids = 240, 
    RuleSourceResetOptions = 241, RuleReplicationLoad = 242, RuleChangeReplicationSource = 243, 
    RuleChangeSource = 244, RuleSourceDefinitions = 245, RuleSourceDefinition = 246, 
    RuleChangeReplicationSourceAutoPosition = 247, RuleChangeReplicationSourceHost = 248, 
    RuleChangeReplicationSourceBind = 249, RuleChangeReplicationSourceUser = 250, 
    RuleChangeReplicationSourcePassword = 251, RuleChangeReplicationSourcePort = 252, 
    RuleChangeReplicationSourceConnectRetry = 253, RuleChangeReplicationSourceRetryCount = 254, 
    RuleChangeReplicationSourceDelay = 255, RuleChangeReplicationSourceSSL = 256, 
    RuleChangeReplicationSourceSSLCA = 257, RuleChangeReplicationSourceSSLCApath = 258, 
    RuleChangeReplicationSourceSSLCipher = 259, RuleChangeReplicationSourceSSLCLR = 260, 
    RuleChangeReplicationSourceSSLCLRpath = 261, RuleChangeReplicationSourceSSLKey = 262, 
    RuleChangeReplicationSourceSSLVerifyServerCert = 263, RuleChangeReplicationSourceTLSVersion = 264, 
    RuleChangeReplicationSourceTLSCiphersuites = 265, RuleChangeReplicationSourceSSLCert = 266, 
    RuleChangeReplicationSourcePublicKey = 267, RuleChangeReplicationSourceGetSourcePublicKey = 268, 
    RuleChangeReplicationSourceHeartbeatPeriod = 269, RuleChangeReplicationSourceCompressionAlgorithm = 270, 
    RuleChangeReplicationSourceZstdCompressionLevel = 271, RulePrivilegeCheckDef = 272, 
    RuleTablePrimaryKeyCheckDef = 273, RuleAssignGtidsToAnonymousTransactionsDefinition = 274, 
    RuleSourceTlsCiphersuitesDef = 275, RuleSourceFileDef = 276, RuleSourceLogFile = 277, 
    RuleSourceLogPos = 278, RuleServerIdList = 279, RuleChangeReplication = 280, 
    RuleFilterDefinition = 281, RuleFilterDbList = 282, RuleFilterTableList = 283, 
    RuleFilterStringList = 284, RuleFilterWildDbTableString = 285, RuleFilterDbPairList = 286, 
    RuleStartReplicaStatement = 287, RuleStopReplicaStatement = 288, RuleReplicaUntil = 289, 
    RuleUserOption = 290, RulePasswordOption = 291, RuleDefaultAuthOption = 292, 
    RulePluginDirOption = 293, RuleReplicaThreadOptions = 294, RuleReplicaThreadOption = 295, 
    RuleGroupReplication = 296, RuleGroupReplicationStartOptions = 297, 
    RuleGroupReplicationStartOption = 298, RuleGroupReplicationUser = 299, 
    RuleGroupReplicationPassword = 300, RuleGroupReplicationPluginAuth = 301, 
    RuleReplica = 302, RulePreparedStatement = 303, RuleExecuteStatement = 304, 
    RuleExecuteVarList = 305, RuleCloneStatement = 306, RuleDataDirSSL = 307, 
    RuleSsl = 308, RuleAccountManagementStatement = 309, RuleAlterUserStatement = 310, 
    RuleAlterUserList = 311, RuleAlterUser = 312, RuleOldAlterUser = 313, 
    RuleUserFunction = 314, RuleCreateUserStatement = 315, RuleCreateUserTail = 316, 
    RuleUserAttributes = 317, RuleDefaultRoleClause = 318, RuleRequireClause = 319, 
    RuleConnectOptions = 320, RuleAccountLockPasswordExpireOptions = 321, 
    RuleUserAttribute = 322, RuleDropUserStatement = 323, RuleGrantStatement = 324, 
    RuleGrantTargetList = 325, RuleGrantOptions = 326, RuleExceptRoleList = 327, 
    RuleWithRoles = 328, RuleGrantAs = 329, RuleVersionedRequireClause = 330, 
    RuleRenameUserStatement = 331, RuleRevokeStatement = 332, RuleAclType = 333, 
    RuleRoleOrPrivilegesList = 334, RuleRoleOrPrivilege = 335, RuleGrantIdentifier = 336, 
    RuleRequireList = 337, RuleRequireListElement = 338, RuleGrantOption = 339, 
    RuleSetRoleStatement = 340, RuleRoleList = 341, RuleRole = 342, RuleTableAdministrationStatement = 343, 
    RuleHistogramAutoUpdate = 344, RuleHistogramUpdateParam = 345, RuleHistogramNumBuckets = 346, 
    RuleHistogram = 347, RuleCheckOption = 348, RuleRepairType = 349, RuleUninstallStatement = 350, 
    RuleInstallStatement = 351, RuleInstallOptionType = 352, RuleInstallSetRvalue = 353, 
    RuleInstallSetValue = 354, RuleInstallSetValueList = 355, RuleSetStatement = 356, 
    RuleStartOptionValueList = 357, RuleTransactionCharacteristics = 358, 
    RuleTransactionAccessMode = 359, RuleIsolationLevel = 360, RuleOptionValueListContinued = 361, 
    RuleOptionValueNoOptionType = 362, RuleOptionValue = 363, RuleSetSystemVariable = 364, 
    RuleStartOptionValueListFollowingOptionType = 365, RuleOptionValueFollowingOptionType = 366, 
    RuleSetExprOrDefault = 367, RuleShowDatabasesStatement = 368, RuleShowTablesStatement = 369, 
    RuleShowTriggersStatement = 370, RuleShowEventsStatement = 371, RuleShowTableStatusStatement = 372, 
    RuleShowOpenTablesStatement = 373, RuleShowParseTreeStatement = 374, 
    RuleShowPluginsStatement = 375, RuleShowEngineLogsStatement = 376, RuleShowEngineMutexStatement = 377, 
    RuleShowEngineStatusStatement = 378, RuleShowColumnsStatement = 379, 
    RuleShowBinaryLogsStatement = 380, RuleShowBinaryLogStatusStatement = 381, 
    RuleShowReplicasStatement = 382, RuleShowBinlogEventsStatement = 383, 
    RuleShowRelaylogEventsStatement = 384, RuleShowKeysStatement = 385, 
    RuleShowEnginesStatement = 386, RuleShowCountWarningsStatement = 387, 
    RuleShowCountErrorsStatement = 388, RuleShowWarningsStatement = 389, 
    RuleShowErrorsStatement = 390, RuleShowProfilesStatement = 391, RuleShowProfileStatement = 392, 
    RuleShowStatusStatement = 393, RuleShowProcessListStatement = 394, RuleShowVariablesStatement = 395, 
    RuleShowCharacterSetStatement = 396, RuleShowCollationStatement = 397, 
    RuleShowPrivilegesStatement = 398, RuleShowGrantsStatement = 399, RuleShowCreateDatabaseStatement = 400, 
    RuleShowCreateTableStatement = 401, RuleShowCreateViewStatement = 402, 
    RuleShowMasterStatusStatement = 403, RuleShowReplicaStatusStatement = 404, 
    RuleShowCreateProcedureStatement = 405, RuleShowCreateFunctionStatement = 406, 
    RuleShowCreateTriggerStatement = 407, RuleShowCreateProcedureStatusStatement = 408, 
    RuleShowCreateFunctionStatusStatement = 409, RuleShowCreateProcedureCodeStatement = 410, 
    RuleShowCreateFunctionCodeStatement = 411, RuleShowCreateEventStatement = 412, 
    RuleShowCreateUserStatement = 413, RuleShowCommandType = 414, RuleEngineOrAll = 415, 
    RuleFromOrIn = 416, RuleInDb = 417, RuleProfileDefinitions = 418, RuleProfileDefinition = 419, 
    RuleOtherAdministrativeStatement = 420, RuleKeyCacheListOrParts = 421, 
    RuleKeyCacheList = 422, RuleAssignToKeycache = 423, RuleAssignToKeycachePartition = 424, 
    RuleCacheKeyList = 425, RuleKeyUsageElement = 426, RuleKeyUsageList = 427, 
    RuleFlushOption = 428, RuleLogType = 429, RuleFlushTables = 430, RuleFlushTablesOptions = 431, 
    RulePreloadTail = 432, RulePreloadList = 433, RulePreloadKeys = 434, 
    RuleAdminPartition = 435, RuleResourceGroupManagement = 436, RuleCreateResourceGroup = 437, 
    RuleResourceGroupVcpuList = 438, RuleVcpuNumOrRange = 439, RuleResourceGroupPriority = 440, 
    RuleResourceGroupEnableDisable = 441, RuleAlterResourceGroup = 442, 
    RuleSetResourceGroup = 443, RuleThreadIdList = 444, RuleDropResourceGroup = 445, 
    RuleUtilityStatement = 446, RuleDescribeStatement = 447, RuleExplainStatement = 448, 
    RuleExplainOptions = 449, RuleExplainableStatement = 450, RuleExplainInto = 451, 
    RuleHelpCommand = 452, RuleUseCommand = 453, RuleRestartServer = 454, 
    RuleExpr = 455, RuleBoolPri = 456, RuleCompOp = 457, RulePredicate = 458, 
    RulePredicateOperations = 459, RuleBitExpr = 460, RuleSimpleExpr = 461, 
    RuleArrayCast = 462, RuleJsonOperator = 463, RuleSumExpr = 464, RuleGroupingOperation = 465, 
    RuleWindowFunctionCall = 466, RuleSamplingMethod = 467, RuleSamplingPercentage = 468, 
    RuleTablesampleClause = 469, RuleWindowingClause = 470, RuleLeadLagInfo = 471, 
    RuleStableInteger = 472, RuleParamOrVar = 473, RuleNullTreatment = 474, 
    RuleJsonFunction = 475, RuleInSumExpr = 476, RuleIdentListArg = 477, 
    RuleIdentList = 478, RuleFulltextOptions = 479, RuleRuntimeFunctionCall = 480, 
    RuleReturningType = 481, RuleGeometryFunction = 482, RuleTimeFunctionParameters = 483, 
    RuleFractionalPrecision = 484, RuleWeightStringLevels = 485, RuleWeightStringLevelListItem = 486, 
    RuleDateTimeTtype = 487, RuleTrimFunction = 488, RuleSubstringFunction = 489, 
    RuleFunctionCall = 490, RuleUdfExprList = 491, RuleUdfExpr = 492, RuleUserVariable = 493, 
    RuleInExpressionUserVariableAssignment = 494, RuleRvalueSystemOrUserVariable = 495, 
    RuleLvalueVariable = 496, RuleRvalueSystemVariable = 497, RuleWhenExpression = 498, 
    RuleThenExpression = 499, RuleElseExpression = 500, RuleCastType = 501, 
    RuleExprList = 502, RuleCharset = 503, RuleNotRule = 504, RuleNot2Rule = 505, 
    RuleInterval = 506, RuleIntervalTimeStamp = 507, RuleExprListWithParentheses = 508, 
    RuleExprWithParentheses = 509, RuleSimpleExprWithParentheses = 510, 
    RuleOrderList = 511, RuleOrderExpression = 512, RuleGroupList = 513, 
    RuleGroupingExpression = 514, RuleChannel = 515, RuleCompoundStatement = 516, 
    RuleReturnStatement = 517, RuleIfStatement = 518, RuleIfBody = 519, 
    RuleThenStatement = 520, RuleCompoundStatementList = 521, RuleCaseStatement = 522, 
    RuleElseStatement = 523, RuleLabeledBlock = 524, RuleUnlabeledBlock = 525, 
    RuleLabel = 526, RuleBeginEndBlock = 527, RuleLabeledControl = 528, 
    RuleUnlabeledControl = 529, RuleLoopBlock = 530, RuleWhileDoBlock = 531, 
    RuleRepeatUntilBlock = 532, RuleSpDeclarations = 533, RuleSpDeclaration = 534, 
    RuleVariableDeclaration = 535, RuleConditionDeclaration = 536, RuleSpCondition = 537, 
    RuleSqlstate = 538, RuleHandlerDeclaration = 539, RuleHandlerCondition = 540, 
    RuleCursorDeclaration = 541, RuleIterateStatement = 542, RuleLeaveStatement = 543, 
    RuleGetDiagnosticsStatement = 544, RuleSignalAllowedExpr = 545, RuleStatementInformationItem = 546, 
    RuleConditionInformationItem = 547, RuleSignalInformationItemName = 548, 
    RuleSignalStatement = 549, RuleResignalStatement = 550, RuleSignalInformationItem = 551, 
    RuleCursorOpen = 552, RuleCursorClose = 553, RuleCursorFetch = 554, 
    RuleSchedule = 555, RuleColumnDefinition = 556, RuleCheckOrReferences = 557, 
    RuleCheckConstraint = 558, RuleConstraintEnforcement = 559, RuleTableConstraintDef = 560, 
    RuleConstraintName = 561, RuleFieldDefinition = 562, RuleColumnAttribute = 563, 
    RuleColumnFormat = 564, RuleStorageMedia = 565, RuleNow = 566, RuleNowOrSignedLiteral = 567, 
    RuleGcolAttribute = 568, RuleReferences = 569, RuleDeleteOption = 570, 
    RuleKeyList = 571, RuleKeyPart = 572, RuleKeyListWithExpression = 573, 
    RuleKeyPartOrExpression = 574, RuleIndexType = 575, RuleIndexOption = 576, 
    RuleCommonIndexOption = 577, RuleVisibility = 578, RuleIndexTypeClause = 579, 
    RuleFulltextIndexOption = 580, RuleSpatialIndexOption = 581, RuleDataTypeDefinition = 582, 
    RuleDataType = 583, RuleNchar = 584, RuleRealType = 585, RuleFieldLength = 586, 
    RuleFieldOptions = 587, RuleCharsetWithOptBinary = 588, RuleAscii = 589, 
    RuleUnicode = 590, RuleWsNumCodepoints = 591, RuleTypeDatetimePrecision = 592, 
    RuleFunctionDatetimePrecision = 593, RuleCharsetName = 594, RuleCollationName = 595, 
    RuleCreateTableOptions = 596, RuleCreateTableOptionsEtc = 597, RuleCreatePartitioningEtc = 598, 
    RuleCreateTableOptionsSpaceSeparated = 599, RuleCreateTableOption = 600, 
    RuleTernaryOption = 601, RuleDefaultCollation = 602, RuleDefaultEncryption = 603, 
    RuleDefaultCharset = 604, RulePartitionClause = 605, RulePartitionTypeDef = 606, 
    RuleSubPartitions = 607, RulePartitionKeyAlgorithm = 608, RulePartitionDefinitions = 609, 
    RulePartitionDefinition = 610, RulePartitionValuesIn = 611, RulePartitionOption = 612, 
    RuleSubpartitionDefinition = 613, RulePartitionValueItemListParen = 614, 
    RulePartitionValueItem = 615, RuleDefinerClause = 616, RuleIfExists = 617, 
    RuleIfExistsIdentifier = 618, RulePersistedVariableIdentifier = 619, 
    RuleIfNotExists = 620, RuleIgnoreUnknownUser = 621, RuleProcedureParameter = 622, 
    RuleFunctionParameter = 623, RuleCollate = 624, RuleTypeWithOptCollate = 625, 
    RuleSchemaIdentifierPair = 626, RuleViewRefList = 627, RuleUpdateList = 628, 
    RuleUpdateElement = 629, RuleCharsetClause = 630, RuleFieldsClause = 631, 
    RuleFieldTerm = 632, RuleLinesClause = 633, RuleLineTerm = 634, RuleUserList = 635, 
    RuleCreateUserList = 636, RuleCreateUser = 637, RuleCreateUserWithMfa = 638, 
    RuleIdentification = 639, RuleIdentifiedByPassword = 640, RuleIdentifiedByRandomPassword = 641, 
    RuleIdentifiedWithPlugin = 642, RuleIdentifiedWithPluginAsAuth = 643, 
    RuleIdentifiedWithPluginByPassword = 644, RuleIdentifiedWithPluginByRandomPassword = 645, 
    RuleInitialAuth = 646, RuleRetainCurrentPassword = 647, RuleDiscardOldPassword = 648, 
    RuleUserRegistration = 649, RuleFactor = 650, RuleReplacePassword = 651, 
    RuleUserIdentifierOrText = 652, RuleUser = 653, RuleLikeClause = 654, 
    RuleLikeOrWhere = 655, RuleOnlineOption = 656, RuleNoWriteToBinLog = 657, 
    RuleUsePartition = 658, RuleFieldIdentifier = 659, RuleColumnName = 660, 
    RuleColumnInternalRef = 661, RuleColumnInternalRefList = 662, RuleColumnRef = 663, 
    RuleInsertIdentifier = 664, RuleIndexName = 665, RuleIndexRef = 666, 
    RuleTableWild = 667, RuleSchemaName = 668, RuleSchemaRef = 669, RuleProcedureName = 670, 
    RuleProcedureRef = 671, RuleFunctionName = 672, RuleFunctionRef = 673, 
    RuleTriggerName = 674, RuleTriggerRef = 675, RuleViewName = 676, RuleViewRef = 677, 
    RuleTablespaceName = 678, RuleTablespaceRef = 679, RuleLogfileGroupName = 680, 
    RuleLogfileGroupRef = 681, RuleEventName = 682, RuleEventRef = 683, 
    RuleUdfName = 684, RuleServerName = 685, RuleServerRef = 686, RuleEngineRef = 687, 
    RuleTableName = 688, RuleFilterTableRef = 689, RuleTableRefWithWildcard = 690, 
    RuleTableRef = 691, RuleTableRefList = 692, RuleTableAliasRefList = 693, 
    RuleParameterName = 694, RuleLabelIdentifier = 695, RuleLabelRef = 696, 
    RuleRoleIdentifier = 697, RulePluginRef = 698, RuleComponentRef = 699, 
    RuleResourceGroupRef = 700, RuleWindowName = 701, RulePureIdentifier = 702, 
    RuleIdentifier = 703, RuleIdentifierList = 704, RuleIdentifierListWithParentheses = 705, 
    RuleQualifiedIdentifier = 706, RuleSimpleIdentifier = 707, RuleDotIdentifier = 708, 
    RuleUlong_number = 709, RuleReal_ulong_number = 710, RuleUlonglongNumber = 711, 
    RuleReal_ulonglong_number = 712, RuleSignedLiteral = 713, RuleSignedLiteralOrNull = 714, 
    RuleLiteral = 715, RuleLiteralOrNull = 716, RuleNullAsLiteral = 717, 
    RuleStringList = 718, RuleTextStringLiteral = 719, RuleTextString = 720, 
    RuleTextStringHash = 721, RuleTextLiteral = 722, RuleTextStringNoLinebreak = 723, 
    RuleTextStringLiteralList = 724, RuleNumLiteral = 725, RuleBoolLiteral = 726, 
    RuleNullLiteral = 727, RuleInt64Literal = 728, RuleTemporalLiteral = 729, 
    RuleFloatOptions = 730, RuleStandardFloatOptions = 731, RulePrecision = 732, 
    RuleTextOrIdentifier = 733, RuleLValueIdentifier = 734, RuleRoleIdentifierOrText = 735, 
    RuleSizeNumber = 736, RuleParentheses = 737, RuleEqual = 738, RuleOptionType = 739, 
    RuleRvalueSystemVariableType = 740, RuleSetVarIdentType = 741, RuleJsonAttribute = 742, 
    RuleIdentifierKeyword = 743, RuleIdentifierKeywordsAmbiguous1RolesAndLabels = 744, 
    RuleIdentifierKeywordsAmbiguous2Labels = 745, RuleLabelKeyword = 746, 
    RuleIdentifierKeywordsAmbiguous3Roles = 747, RuleIdentifierKeywordsUnambiguous = 748, 
    RuleRoleKeyword = 749, RuleLValueKeyword = 750, RuleIdentifierKeywordsAmbiguous4SystemVariables = 751, 
    RuleRoleOrIdentifierKeyword = 752, RuleRoleOrLabelKeyword = 753
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
  class RoutineStringContext;
  class StoredRoutineBodyContext;
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
  class LoadDataLockContext;
  class LoadFromContext;
  class LoadSourceTypeContext;
  class SourceCountContext;
  class SourceOrderContext;
  class XmlRowsIdentifiedByContext;
  class LoadDataFileTailContext;
  class LoadDataFileTargetListContext;
  class FieldOrVariableListContext;
  class LoadAlgorithmContext;
  class LoadParallelContext;
  class LoadMemoryContext;
  class ReplaceStatementContext;
  class SelectStatementContext;
  class SelectStatementWithIntoContext;
  class QueryExpressionContext;
  class QueryExpressionBodyContext;
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
  class QualifyClauseContext;
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
  class PurgeOptionsContext;
  class ResetOptionContext;
  class MasterOrBinaryLogsAndGtidsContext;
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
  class HistogramAutoUpdateContext;
  class HistogramUpdateParamContext;
  class HistogramNumBucketsContext;
  class HistogramContext;
  class CheckOptionContext;
  class RepairTypeContext;
  class UninstallStatementContext;
  class InstallStatementContext;
  class InstallOptionTypeContext;
  class InstallSetRvalueContext;
  class InstallSetValueContext;
  class InstallSetValueListContext;
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
  class ShowParseTreeStatementContext;
  class ShowPluginsStatementContext;
  class ShowEngineLogsStatementContext;
  class ShowEngineMutexStatementContext;
  class ShowEngineStatusStatementContext;
  class ShowColumnsStatementContext;
  class ShowBinaryLogsStatementContext;
  class ShowBinaryLogStatusStatementContext;
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
  class ExplainOptionsContext;
  class ExplainableStatementContext;
  class ExplainIntoContext;
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
  class SamplingMethodContext;
  class SamplingPercentageContext;
  class TablesampleClauseContext;
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
  class IfExistsIdentifierContext;
  class PersistedVariableIdentifierContext;
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
  class UlonglongNumberContext;
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

  class  QueryContext : public antlr4::ParserRuleContext {
  public:
    QueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    SimpleStatementContext *simpleStatement();
    BeginWorkContext *beginWork();
    antlr4::tree::TerminalNode *SEMICOLON_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryContext* query();

  class  SimpleStatementContext : public antlr4::ParserRuleContext {
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
    UninstallStatementContext *uninstallStatement();
    InstallStatementContext *installStatement();
    SetStatementContext *setStatement();
    ShowDatabasesStatementContext *showDatabasesStatement();
    ShowTablesStatementContext *showTablesStatement();
    ShowTriggersStatementContext *showTriggersStatement();
    ShowEventsStatementContext *showEventsStatement();
    ShowTableStatusStatementContext *showTableStatusStatement();
    ShowOpenTablesStatementContext *showOpenTablesStatement();
    ShowParseTreeStatementContext *showParseTreeStatement();
    ShowPluginsStatementContext *showPluginsStatement();
    ShowEngineLogsStatementContext *showEngineLogsStatement();
    ShowEngineMutexStatementContext *showEngineMutexStatement();
    ShowEngineStatusStatementContext *showEngineStatusStatement();
    ShowColumnsStatementContext *showColumnsStatement();
    ShowBinaryLogsStatementContext *showBinaryLogsStatement();
    ShowBinaryLogStatusStatementContext *showBinaryLogStatusStatement();
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleStatementContext* simpleStatement();

  class  AlterStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementContext* alterStatement();

  class  AlterDatabaseContext : public antlr4::ParserRuleContext {
  public:
    AlterDatabaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATABASE_SYMBOL();
    SchemaRefContext *schemaRef();
    std::vector<AlterDatabaseOptionContext *> alterDatabaseOption();
    AlterDatabaseOptionContext* alterDatabaseOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterDatabaseContext* alterDatabase();

  class  AlterDatabaseOptionContext : public antlr4::ParserRuleContext {
  public:
    AlterDatabaseOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CreateDatabaseOptionContext *createDatabaseOption();
    antlr4::tree::TerminalNode *READ_SYMBOL();
    antlr4::tree::TerminalNode *ONLY_SYMBOL();
    TernaryOptionContext *ternaryOption();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterDatabaseOptionContext* alterDatabaseOption();

  class  AlterEventContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterEventContext* alterEvent();

  class  AlterLogfileGroupContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterLogfileGroupContext* alterLogfileGroup();

  class  AlterLogfileGroupOptionsContext : public antlr4::ParserRuleContext {
  public:
    AlterLogfileGroupOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AlterLogfileGroupOptionContext *> alterLogfileGroupOption();
    AlterLogfileGroupOptionContext* alterLogfileGroupOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterLogfileGroupOptionsContext* alterLogfileGroupOptions();

  class  AlterLogfileGroupOptionContext : public antlr4::ParserRuleContext {
  public:
    AlterLogfileGroupOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TsOptionInitialSizeContext *tsOptionInitialSize();
    TsOptionEngineContext *tsOptionEngine();
    TsOptionWaitContext *tsOptionWait();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterLogfileGroupOptionContext* alterLogfileGroupOption();

  class  AlterServerContext : public antlr4::ParserRuleContext {
  public:
    AlterServerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SERVER_SYMBOL();
    ServerRefContext *serverRef();
    ServerOptionsContext *serverOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterServerContext* alterServer();

  class  AlterTableContext : public antlr4::ParserRuleContext {
  public:
    AlterTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    TableRefContext *tableRef();
    OnlineOptionContext *onlineOption();
    AlterTableActionsContext *alterTableActions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterTableContext* alterTable();

  class  AlterTableActionsContext : public antlr4::ParserRuleContext {
  public:
    AlterTableActionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterCommandListContext *alterCommandList();
    PartitionClauseContext *partitionClause();
    RemovePartitioningContext *removePartitioning();
    StandaloneAlterCommandsContext *standaloneAlterCommands();
    AlterCommandsModifierListContext *alterCommandsModifierList();
    antlr4::tree::TerminalNode *COMMA_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterTableActionsContext* alterTableActions();

  class  AlterCommandListContext : public antlr4::ParserRuleContext {
  public:
    AlterCommandListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterCommandsModifierListContext *alterCommandsModifierList();
    AlterListContext *alterList();
    antlr4::tree::TerminalNode *COMMA_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterCommandListContext* alterCommandList();

  class  AlterCommandsModifierListContext : public antlr4::ParserRuleContext {
  public:
    AlterCommandsModifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AlterCommandsModifierContext *> alterCommandsModifier();
    AlterCommandsModifierContext* alterCommandsModifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterCommandsModifierListContext* alterCommandsModifierList();

  class  StandaloneAlterCommandsContext : public antlr4::ParserRuleContext {
  public:
    StandaloneAlterCommandsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISCARD_SYMBOL();
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    antlr4::tree::TerminalNode *IMPORT_SYMBOL();
    AlterPartitionContext *alterPartition();
    antlr4::tree::TerminalNode *SECONDARY_LOAD_SYMBOL();
    antlr4::tree::TerminalNode *SECONDARY_UNLOAD_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StandaloneAlterCommandsContext* standaloneAlterCommands();

  class  AlterPartitionContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterPartitionContext* alterPartition();

  class  AlterListContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterListContext* alterList();

  class  AlterCommandsModifierContext : public antlr4::ParserRuleContext {
  public:
    AlterCommandsModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterAlgorithmOptionContext *alterAlgorithmOption();
    AlterLockOptionContext *alterLockOption();
    WithValidationContext *withValidation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterCommandsModifierContext* alterCommandsModifier();

  class  AlterListItemContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterListItemContext* alterListItem();

  class  PlaceContext : public antlr4::ParserRuleContext {
  public:
    PlaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AFTER_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *FIRST_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlaceContext* place();

  class  RestrictContext : public antlr4::ParserRuleContext {
  public:
    RestrictContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESTRICT_SYMBOL();
    antlr4::tree::TerminalNode *CASCADE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RestrictContext* restrict();

  class  AlterOrderListContext : public antlr4::ParserRuleContext {
  public:
    AlterOrderListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<DirectionContext *> direction();
    DirectionContext* direction(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterOrderListContext* alterOrderList();

  class  AlterAlgorithmOptionContext : public antlr4::ParserRuleContext {
  public:
    AlterAlgorithmOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALGORITHM_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterAlgorithmOptionContext* alterAlgorithmOption();

  class  AlterLockOptionContext : public antlr4::ParserRuleContext {
  public:
    AlterLockOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCK_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterLockOptionContext* alterLockOption();

  class  IndexLockAndAlgorithmContext : public antlr4::ParserRuleContext {
  public:
    IndexLockAndAlgorithmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterAlgorithmOptionContext *alterAlgorithmOption();
    AlterLockOptionContext *alterLockOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexLockAndAlgorithmContext* indexLockAndAlgorithm();

  class  WithValidationContext : public antlr4::ParserRuleContext {
  public:
    WithValidationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALIDATION_SYMBOL();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *WITHOUT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WithValidationContext* withValidation();

  class  RemovePartitioningContext : public antlr4::ParserRuleContext {
  public:
    RemovePartitioningContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REMOVE_SYMBOL();
    antlr4::tree::TerminalNode *PARTITIONING_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RemovePartitioningContext* removePartitioning();

  class  AllOrPartitionNameListContext : public antlr4::ParserRuleContext {
  public:
    AllOrPartitionNameListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    IdentifierListContext *identifierList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AllOrPartitionNameListContext* allOrPartitionNameList();

  class  AlterTablespaceContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterTablespaceContext* alterTablespace();

  class  AlterUndoTablespaceContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterUndoTablespaceContext* alterUndoTablespace();

  class  UndoTableSpaceOptionsContext : public antlr4::ParserRuleContext {
  public:
    UndoTableSpaceOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UndoTableSpaceOptionContext *> undoTableSpaceOption();
    UndoTableSpaceOptionContext* undoTableSpaceOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UndoTableSpaceOptionsContext* undoTableSpaceOptions();

  class  UndoTableSpaceOptionContext : public antlr4::ParserRuleContext {
  public:
    UndoTableSpaceOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TsOptionEngineContext *tsOptionEngine();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UndoTableSpaceOptionContext* undoTableSpaceOption();

  class  AlterTablespaceOptionsContext : public antlr4::ParserRuleContext {
  public:
    AlterTablespaceOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AlterTablespaceOptionContext *> alterTablespaceOption();
    AlterTablespaceOptionContext* alterTablespaceOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterTablespaceOptionsContext* alterTablespaceOptions();

  class  AlterTablespaceOptionContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterTablespaceOptionContext* alterTablespaceOption();

  class  ChangeTablespaceOptionContext : public antlr4::ParserRuleContext {
  public:
    ChangeTablespaceOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INITIAL_SIZE_SYMBOL();
    SizeNumberContext *sizeNumber();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TsOptionAutoextendSizeContext *tsOptionAutoextendSize();
    TsOptionMaxSizeContext *tsOptionMaxSize();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeTablespaceOptionContext* changeTablespaceOption();

  class  AlterViewContext : public antlr4::ParserRuleContext {
  public:
    AlterViewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VIEW_SYMBOL();
    ViewRefContext *viewRef();
    ViewTailContext *viewTail();
    ViewAlgorithmContext *viewAlgorithm();
    DefinerClauseContext *definerClause();
    ViewSuidContext *viewSuid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterViewContext* alterView();

  class  ViewTailContext : public antlr4::ParserRuleContext {
  public:
    ViewTailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS_SYMBOL();
    ViewQueryBlockContext *viewQueryBlock();
    ColumnInternalRefListContext *columnInternalRefList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewTailContext* viewTail();

  class  ViewQueryBlockContext : public antlr4::ParserRuleContext {
  public:
    ViewQueryBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionWithOptLockingClausesContext *queryExpressionWithOptLockingClauses();
    ViewCheckOptionContext *viewCheckOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewQueryBlockContext* viewQueryBlock();

  class  ViewCheckOptionContext : public antlr4::ParserRuleContext {
  public:
    ViewCheckOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *CHECK_SYMBOL();
    antlr4::tree::TerminalNode *OPTION_SYMBOL();
    antlr4::tree::TerminalNode *CASCADED_SYMBOL();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewCheckOptionContext* viewCheckOption();

  class  AlterInstanceStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterInstanceStatementContext* alterInstanceStatement();

  class  CreateStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateStatementContext* createStatement();

  class  CreateDatabaseContext : public antlr4::ParserRuleContext {
  public:
    CreateDatabaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATABASE_SYMBOL();
    SchemaNameContext *schemaName();
    IfNotExistsContext *ifNotExists();
    std::vector<CreateDatabaseOptionContext *> createDatabaseOption();
    CreateDatabaseOptionContext* createDatabaseOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateDatabaseContext* createDatabase();

  class  CreateDatabaseOptionContext : public antlr4::ParserRuleContext {
  public:
    CreateDatabaseOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefaultCharsetContext *defaultCharset();
    DefaultCollationContext *defaultCollation();
    DefaultEncryptionContext *defaultEncryption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateDatabaseOptionContext* createDatabaseOption();

  class  CreateTableContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTableContext* createTable();

  class  TableElementListContext : public antlr4::ParserRuleContext {
  public:
    TableElementListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableElementContext *> tableElement();
    TableElementContext* tableElement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableElementListContext* tableElementList();

  class  TableElementContext : public antlr4::ParserRuleContext {
  public:
    TableElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnDefinitionContext *columnDefinition();
    TableConstraintDefContext *tableConstraintDef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableElementContext* tableElement();

  class  DuplicateAsQeContext : public antlr4::ParserRuleContext {
  public:
    DuplicateAsQeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AsCreateQueryExpressionContext *asCreateQueryExpression();
    antlr4::tree::TerminalNode *REPLACE_SYMBOL();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DuplicateAsQeContext* duplicateAsQe();

  class  AsCreateQueryExpressionContext : public antlr4::ParserRuleContext {
  public:
    AsCreateQueryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionWithOptLockingClausesContext *queryExpressionWithOptLockingClauses();
    antlr4::tree::TerminalNode *AS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AsCreateQueryExpressionContext* asCreateQueryExpression();

  class  QueryExpressionOrParensContext : public antlr4::ParserRuleContext {
  public:
    QueryExpressionOrParensContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionContext *queryExpression();
    LockingClauseListContext *lockingClauseList();
    QueryExpressionParensContext *queryExpressionParens();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryExpressionOrParensContext* queryExpressionOrParens();

  class  QueryExpressionWithOptLockingClausesContext : public antlr4::ParserRuleContext {
  public:
    QueryExpressionWithOptLockingClausesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionContext *queryExpression();
    LockingClauseListContext *lockingClauseList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryExpressionWithOptLockingClausesContext* queryExpressionWithOptLockingClauses();

  class  CreateRoutineContext : public antlr4::ParserRuleContext {
  public:
    CreateRoutineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *EOF();
    CreateProcedureContext *createProcedure();
    CreateFunctionContext *createFunction();
    CreateUdfContext *createUdf();
    antlr4::tree::TerminalNode *SEMICOLON_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateRoutineContext* createRoutine();

  class  CreateProcedureContext : public antlr4::ParserRuleContext {
  public:
    CreateProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCEDURE_SYMBOL();
    ProcedureNameContext *procedureName();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    StoredRoutineBodyContext *storedRoutineBody();
    DefinerClauseContext *definerClause();
    IfNotExistsContext *ifNotExists();
    std::vector<ProcedureParameterContext *> procedureParameter();
    ProcedureParameterContext* procedureParameter(size_t i);
    std::vector<RoutineCreateOptionContext *> routineCreateOption();
    RoutineCreateOptionContext* routineCreateOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateProcedureContext* createProcedure();

  class  RoutineStringContext : public antlr4::ParserRuleContext {
  public:
    RoutineStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *DOLLAR_QUOTED_STRING_TEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoutineStringContext* routineString();

  class  StoredRoutineBodyContext : public antlr4::ParserRuleContext {
  public:
    StoredRoutineBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompoundStatementContext *compoundStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StoredRoutineBodyContext* storedRoutineBody();

  class  CreateFunctionContext : public antlr4::ParserRuleContext {
  public:
    CreateFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION_SYMBOL();
    FunctionNameContext *functionName();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *RETURNS_SYMBOL();
    TypeWithOptCollateContext *typeWithOptCollate();
    StoredRoutineBodyContext *storedRoutineBody();
    DefinerClauseContext *definerClause();
    IfNotExistsContext *ifNotExists();
    std::vector<FunctionParameterContext *> functionParameter();
    FunctionParameterContext* functionParameter(size_t i);
    std::vector<RoutineCreateOptionContext *> routineCreateOption();
    RoutineCreateOptionContext* routineCreateOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateFunctionContext* createFunction();

  class  CreateUdfContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateUdfContext* createUdf();

  class  RoutineCreateOptionContext : public antlr4::ParserRuleContext {
  public:
    RoutineCreateOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RoutineOptionContext *routineOption();
    antlr4::tree::TerminalNode *DETERMINISTIC_SYMBOL();
    antlr4::tree::TerminalNode *NOT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoutineCreateOptionContext* routineCreateOption();

  class  RoutineAlterOptionsContext : public antlr4::ParserRuleContext {
  public:
    RoutineAlterOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RoutineCreateOptionContext *> routineCreateOption();
    RoutineCreateOptionContext* routineCreateOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoutineAlterOptionsContext* routineAlterOptions();

  class  RoutineOptionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *option = nullptr;
    antlr4::Token *security = nullptr;
    RoutineOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();
    antlr4::tree::TerminalNode *LANGUAGE_SYMBOL();
    antlr4::tree::TerminalNode *SQL_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *NO_SYMBOL();
    antlr4::tree::TerminalNode *CONTAINS_SYMBOL();
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    antlr4::tree::TerminalNode *READS_SYMBOL();
    antlr4::tree::TerminalNode *MODIFIES_SYMBOL();
    antlr4::tree::TerminalNode *SECURITY_SYMBOL();
    antlr4::tree::TerminalNode *DEFINER_SYMBOL();
    antlr4::tree::TerminalNode *INVOKER_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoutineOptionContext* routineOption();

  class  CreateIndexContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    CreateIndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndexNameContext *indexName();
    CreateIndexTargetContext *createIndexTarget();
    antlr4::tree::TerminalNode *INDEX_SYMBOL();
    OnlineOptionContext *onlineOption();
    antlr4::tree::TerminalNode *FULLTEXT_SYMBOL();
    antlr4::tree::TerminalNode *SPATIAL_SYMBOL();
    IndexLockAndAlgorithmContext *indexLockAndAlgorithm();
    antlr4::tree::TerminalNode *UNIQUE_SYMBOL();
    IndexTypeClauseContext *indexTypeClause();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    std::vector<FulltextIndexOptionContext *> fulltextIndexOption();
    FulltextIndexOptionContext* fulltextIndexOption(size_t i);
    std::vector<SpatialIndexOptionContext *> spatialIndexOption();
    SpatialIndexOptionContext* spatialIndexOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateIndexContext* createIndex();

  class  IndexNameAndTypeContext : public antlr4::ParserRuleContext {
  public:
    IndexNameAndTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndexNameContext *indexName();
    antlr4::tree::TerminalNode *USING_SYMBOL();
    IndexTypeContext *indexType();
    antlr4::tree::TerminalNode *TYPE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexNameAndTypeContext* indexNameAndType();

  class  CreateIndexTargetContext : public antlr4::ParserRuleContext {
  public:
    CreateIndexTargetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON_SYMBOL();
    TableRefContext *tableRef();
    KeyListWithExpressionContext *keyListWithExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateIndexTargetContext* createIndexTarget();

  class  CreateLogfileGroupContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateLogfileGroupContext* createLogfileGroup();

  class  LogfileGroupOptionsContext : public antlr4::ParserRuleContext {
  public:
    LogfileGroupOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LogfileGroupOptionContext *> logfileGroupOption();
    LogfileGroupOptionContext* logfileGroupOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogfileGroupOptionsContext* logfileGroupOptions();

  class  LogfileGroupOptionContext : public antlr4::ParserRuleContext {
  public:
    LogfileGroupOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TsOptionInitialSizeContext *tsOptionInitialSize();
    TsOptionUndoRedoBufferSizeContext *tsOptionUndoRedoBufferSize();
    TsOptionNodegroupContext *tsOptionNodegroup();
    TsOptionEngineContext *tsOptionEngine();
    TsOptionWaitContext *tsOptionWait();
    TsOptionCommentContext *tsOptionComment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogfileGroupOptionContext* logfileGroupOption();

  class  CreateServerContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateServerContext* createServer();

  class  ServerOptionsContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ServerOptionsContext* serverOptions();

  class  ServerOptionContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ServerOptionContext* serverOption();

  class  CreateTablespaceContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTablespaceContext* createTablespace();

  class  CreateUndoTablespaceContext : public antlr4::ParserRuleContext {
  public:
    CreateUndoTablespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNDO_SYMBOL();
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    TablespaceNameContext *tablespaceName();
    antlr4::tree::TerminalNode *ADD_SYMBOL();
    TsDataFileContext *tsDataFile();
    UndoTableSpaceOptionsContext *undoTableSpaceOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateUndoTablespaceContext* createUndoTablespace();

  class  TsDataFileNameContext : public antlr4::ParserRuleContext {
  public:
    TsDataFileNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_SYMBOL();
    TsDataFileContext *tsDataFile();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsDataFileNameContext* tsDataFileName();

  class  TsDataFileContext : public antlr4::ParserRuleContext {
  public:
    TsDataFileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATAFILE_SYMBOL();
    TextLiteralContext *textLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsDataFileContext* tsDataFile();

  class  TablespaceOptionsContext : public antlr4::ParserRuleContext {
  public:
    TablespaceOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TablespaceOptionContext *> tablespaceOption();
    TablespaceOptionContext* tablespaceOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablespaceOptionsContext* tablespaceOptions();

  class  TablespaceOptionContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablespaceOptionContext* tablespaceOption();

  class  TsOptionInitialSizeContext : public antlr4::ParserRuleContext {
  public:
    TsOptionInitialSizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INITIAL_SIZE_SYMBOL();
    SizeNumberContext *sizeNumber();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsOptionInitialSizeContext* tsOptionInitialSize();

  class  TsOptionUndoRedoBufferSizeContext : public antlr4::ParserRuleContext {
  public:
    TsOptionUndoRedoBufferSizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SizeNumberContext *sizeNumber();
    antlr4::tree::TerminalNode *UNDO_BUFFER_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *REDO_BUFFER_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsOptionUndoRedoBufferSizeContext* tsOptionUndoRedoBufferSize();

  class  TsOptionAutoextendSizeContext : public antlr4::ParserRuleContext {
  public:
    TsOptionAutoextendSizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AUTOEXTEND_SIZE_SYMBOL();
    SizeNumberContext *sizeNumber();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsOptionAutoextendSizeContext* tsOptionAutoextendSize();

  class  TsOptionMaxSizeContext : public antlr4::ParserRuleContext {
  public:
    TsOptionMaxSizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAX_SIZE_SYMBOL();
    SizeNumberContext *sizeNumber();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsOptionMaxSizeContext* tsOptionMaxSize();

  class  TsOptionExtentSizeContext : public antlr4::ParserRuleContext {
  public:
    TsOptionExtentSizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTENT_SIZE_SYMBOL();
    SizeNumberContext *sizeNumber();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsOptionExtentSizeContext* tsOptionExtentSize();

  class  TsOptionNodegroupContext : public antlr4::ParserRuleContext {
  public:
    TsOptionNodegroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NODEGROUP_SYMBOL();
    Real_ulong_numberContext *real_ulong_number();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsOptionNodegroupContext* tsOptionNodegroup();

  class  TsOptionEngineContext : public antlr4::ParserRuleContext {
  public:
    TsOptionEngineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENGINE_SYMBOL();
    EngineRefContext *engineRef();
    antlr4::tree::TerminalNode *STORAGE_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsOptionEngineContext* tsOptionEngine();

  class  TsOptionWaitContext : public antlr4::ParserRuleContext {
  public:
    TsOptionWaitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WAIT_SYMBOL();
    antlr4::tree::TerminalNode *NO_WAIT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsOptionWaitContext* tsOptionWait();

  class  TsOptionCommentContext : public antlr4::ParserRuleContext {
  public:
    TsOptionCommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsOptionCommentContext* tsOptionComment();

  class  TsOptionFileblockSizeContext : public antlr4::ParserRuleContext {
  public:
    TsOptionFileblockSizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILE_BLOCK_SIZE_SYMBOL();
    SizeNumberContext *sizeNumber();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsOptionFileblockSizeContext* tsOptionFileblockSize();

  class  TsOptionEncryptionContext : public antlr4::ParserRuleContext {
  public:
    TsOptionEncryptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENCRYPTION_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsOptionEncryptionContext* tsOptionEncryption();

  class  TsOptionEngineAttributeContext : public antlr4::ParserRuleContext {
  public:
    TsOptionEngineAttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENGINE_SYMBOL();
    JsonAttributeContext *jsonAttribute();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsOptionEngineAttributeContext* tsOptionEngineAttribute();

  class  CreateViewContext : public antlr4::ParserRuleContext {
  public:
    CreateViewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VIEW_SYMBOL();
    ViewNameContext *viewName();
    ViewTailContext *viewTail();
    ViewReplaceOrAlgorithmContext *viewReplaceOrAlgorithm();
    DefinerClauseContext *definerClause();
    ViewSuidContext *viewSuid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateViewContext* createView();

  class  ViewReplaceOrAlgorithmContext : public antlr4::ParserRuleContext {
  public:
    ViewReplaceOrAlgorithmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR_SYMBOL();
    antlr4::tree::TerminalNode *REPLACE_SYMBOL();
    ViewAlgorithmContext *viewAlgorithm();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewReplaceOrAlgorithmContext* viewReplaceOrAlgorithm();

  class  ViewAlgorithmContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *algorithm = nullptr;
    ViewAlgorithmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALGORITHM_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *UNDEFINED_SYMBOL();
    antlr4::tree::TerminalNode *MERGE_SYMBOL();
    antlr4::tree::TerminalNode *TEMPTABLE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewAlgorithmContext* viewAlgorithm();

  class  ViewSuidContext : public antlr4::ParserRuleContext {
  public:
    ViewSuidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SQL_SYMBOL();
    antlr4::tree::TerminalNode *SECURITY_SYMBOL();
    antlr4::tree::TerminalNode *DEFINER_SYMBOL();
    antlr4::tree::TerminalNode *INVOKER_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewSuidContext* viewSuid();

  class  CreateTriggerContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTriggerContext* createTrigger();

  class  TriggerFollowsPrecedesClauseContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *ordering = nullptr;
    TriggerFollowsPrecedesClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *FOLLOWS_SYMBOL();
    antlr4::tree::TerminalNode *PRECEDES_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TriggerFollowsPrecedesClauseContext* triggerFollowsPrecedesClause();

  class  CreateEventContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateEventContext* createEvent();

  class  CreateRoleContext : public antlr4::ParserRuleContext {
  public:
    CreateRoleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROLE_SYMBOL();
    RoleListContext *roleList();
    IfNotExistsContext *ifNotExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateRoleContext* createRole();

  class  CreateSpatialReferenceContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateSpatialReferenceContext* createSpatialReference();

  class  SrsAttributeContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SrsAttributeContext* srsAttribute();

  class  DropStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropStatementContext* dropStatement();

  class  DropDatabaseContext : public antlr4::ParserRuleContext {
  public:
    DropDatabaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATABASE_SYMBOL();
    SchemaRefContext *schemaRef();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropDatabaseContext* dropDatabase();

  class  DropEventContext : public antlr4::ParserRuleContext {
  public:
    DropEventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVENT_SYMBOL();
    EventRefContext *eventRef();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropEventContext* dropEvent();

  class  DropFunctionContext : public antlr4::ParserRuleContext {
  public:
    DropFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION_SYMBOL();
    FunctionRefContext *functionRef();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropFunctionContext* dropFunction();

  class  DropProcedureContext : public antlr4::ParserRuleContext {
  public:
    DropProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCEDURE_SYMBOL();
    ProcedureRefContext *procedureRef();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropProcedureContext* dropProcedure();

  class  DropIndexContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropIndexContext* dropIndex();

  class  DropLogfileGroupContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropLogfileGroupContext* dropLogfileGroup();

  class  DropLogfileGroupOptionContext : public antlr4::ParserRuleContext {
  public:
    DropLogfileGroupOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TsOptionWaitContext *tsOptionWait();
    TsOptionEngineContext *tsOptionEngine();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropLogfileGroupOptionContext* dropLogfileGroupOption();

  class  DropServerContext : public antlr4::ParserRuleContext {
  public:
    DropServerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SERVER_SYMBOL();
    ServerRefContext *serverRef();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropServerContext* dropServer();

  class  DropTableContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropTableContext* dropTable();

  class  DropTableSpaceContext : public antlr4::ParserRuleContext {
  public:
    DropTableSpaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    TablespaceRefContext *tablespaceRef();
    std::vector<DropLogfileGroupOptionContext *> dropLogfileGroupOption();
    DropLogfileGroupOptionContext* dropLogfileGroupOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropTableSpaceContext* dropTableSpace();

  class  DropTriggerContext : public antlr4::ParserRuleContext {
  public:
    DropTriggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRIGGER_SYMBOL();
    TriggerRefContext *triggerRef();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropTriggerContext* dropTrigger();

  class  DropViewContext : public antlr4::ParserRuleContext {
  public:
    DropViewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VIEW_SYMBOL();
    ViewRefListContext *viewRefList();
    IfExistsContext *ifExists();
    antlr4::tree::TerminalNode *RESTRICT_SYMBOL();
    antlr4::tree::TerminalNode *CASCADE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropViewContext* dropView();

  class  DropRoleContext : public antlr4::ParserRuleContext {
  public:
    DropRoleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROLE_SYMBOL();
    RoleListContext *roleList();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropRoleContext* dropRole();

  class  DropSpatialReferenceContext : public antlr4::ParserRuleContext {
  public:
    DropSpatialReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPATIAL_SYMBOL();
    antlr4::tree::TerminalNode *REFERENCE_SYMBOL();
    antlr4::tree::TerminalNode *SYSTEM_SYMBOL();
    Real_ulonglong_numberContext *real_ulonglong_number();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropSpatialReferenceContext* dropSpatialReference();

  class  DropUndoTablespaceContext : public antlr4::ParserRuleContext {
  public:
    DropUndoTablespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNDO_SYMBOL();
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    TablespaceRefContext *tablespaceRef();
    UndoTableSpaceOptionsContext *undoTableSpaceOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropUndoTablespaceContext* dropUndoTablespace();

  class  RenameTableStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RenameTableStatementContext* renameTableStatement();

  class  RenamePairContext : public antlr4::ParserRuleContext {
  public:
    RenamePairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefContext *tableRef();
    antlr4::tree::TerminalNode *TO_SYMBOL();
    TableNameContext *tableName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RenamePairContext* renamePair();

  class  TruncateTableStatementContext : public antlr4::ParserRuleContext {
  public:
    TruncateTableStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUNCATE_SYMBOL();
    TableRefContext *tableRef();
    antlr4::tree::TerminalNode *TABLE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TruncateTableStatementContext* truncateTableStatement();

  class  ImportStatementContext : public antlr4::ParserRuleContext {
  public:
    ImportStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    TextStringLiteralListContext *textStringLiteralList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportStatementContext* importStatement();

  class  CallStatementContext : public antlr4::ParserRuleContext {
  public:
    CallStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CALL_SYMBOL();
    ProcedureRefContext *procedureRef();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    ExprListContext *exprList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallStatementContext* callStatement();

  class  DeleteStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeleteStatementContext* deleteStatement();

  class  PartitionDeleteContext : public antlr4::ParserRuleContext {
  public:
    PartitionDeleteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionDeleteContext* partitionDelete();

  class  DeleteStatementOptionContext : public antlr4::ParserRuleContext {
  public:
    DeleteStatementOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUICK_SYMBOL();
    antlr4::tree::TerminalNode *LOW_PRIORITY_SYMBOL();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeleteStatementOptionContext* deleteStatementOption();

  class  DoStatementContext : public antlr4::ParserRuleContext {
  public:
    DoStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO_SYMBOL();
    SelectItemListContext *selectItemList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DoStatementContext* doStatement();

  class  HandlerStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerStatementContext* handlerStatement();

  class  HandlerReadOrScanContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerReadOrScanContext* handlerReadOrScan();

  class  InsertStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertStatementContext* insertStatement();

  class  InsertLockOptionContext : public antlr4::ParserRuleContext {
  public:
    InsertLockOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOW_PRIORITY_SYMBOL();
    antlr4::tree::TerminalNode *DELAYED_SYMBOL();
    antlr4::tree::TerminalNode *HIGH_PRIORITY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertLockOptionContext* insertLockOption();

  class  InsertFromConstructorContext : public antlr4::ParserRuleContext {
  public:
    InsertFromConstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InsertValuesContext *insertValues();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    FieldsContext *fields();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertFromConstructorContext* insertFromConstructor();

  class  FieldsContext : public antlr4::ParserRuleContext {
  public:
    FieldsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InsertIdentifierContext *> insertIdentifier();
    InsertIdentifierContext* insertIdentifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldsContext* fields();

  class  InsertValuesContext : public antlr4::ParserRuleContext {
  public:
    InsertValuesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueListContext *valueList();
    antlr4::tree::TerminalNode *VALUES_SYMBOL();
    antlr4::tree::TerminalNode *VALUE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertValuesContext* insertValues();

  class  InsertQueryExpressionContext : public antlr4::ParserRuleContext {
  public:
    InsertQueryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionContext *queryExpression();
    QueryExpressionParensContext *queryExpressionParens();
    QueryExpressionWithOptLockingClausesContext *queryExpressionWithOptLockingClauses();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    FieldsContext *fields();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertQueryExpressionContext* insertQueryExpression();

  class  ValueListContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueListContext* valueList();

  class  ValuesContext : public antlr4::ParserRuleContext {
  public:
    ValuesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode* DEFAULT_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValuesContext* values();

  class  ValuesReferenceContext : public antlr4::ParserRuleContext {
  public:
    ValuesReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS_SYMBOL();
    IdentifierContext *identifier();
    ColumnInternalRefListContext *columnInternalRefList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValuesReferenceContext* valuesReference();

  class  InsertUpdateListContext : public antlr4::ParserRuleContext {
  public:
    InsertUpdateListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON_SYMBOL();
    antlr4::tree::TerminalNode *DUPLICATE_SYMBOL();
    antlr4::tree::TerminalNode *KEY_SYMBOL();
    antlr4::tree::TerminalNode *UPDATE_SYMBOL();
    UpdateListContext *updateList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertUpdateListContext* insertUpdateList();

  class  LoadStatementContext : public antlr4::ParserRuleContext {
  public:
    LoadStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOAD_SYMBOL();
    DataOrXmlContext *dataOrXml();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *INTO_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    TableRefContext *tableRef();
    LoadDataFileTailContext *loadDataFileTail();
    LoadDataLockContext *loadDataLock();
    LoadFromContext *loadFrom();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    LoadSourceTypeContext *loadSourceType();
    SourceCountContext *sourceCount();
    SourceOrderContext *sourceOrder();
    UsePartitionContext *usePartition();
    CharsetClauseContext *charsetClause();
    XmlRowsIdentifiedByContext *xmlRowsIdentifiedBy();
    FieldsClauseContext *fieldsClause();
    LinesClauseContext *linesClause();
    LoadParallelContext *loadParallel();
    LoadMemoryContext *loadMemory();
    LoadAlgorithmContext *loadAlgorithm();
    antlr4::tree::TerminalNode *REPLACE_SYMBOL();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoadStatementContext* loadStatement();

  class  DataOrXmlContext : public antlr4::ParserRuleContext {
  public:
    DataOrXmlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    antlr4::tree::TerminalNode *XML_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataOrXmlContext* dataOrXml();

  class  LoadDataLockContext : public antlr4::ParserRuleContext {
  public:
    LoadDataLockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOW_PRIORITY_SYMBOL();
    antlr4::tree::TerminalNode *CONCURRENT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoadDataLockContext* loadDataLock();

  class  LoadFromContext : public antlr4::ParserRuleContext {
  public:
    LoadFromContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoadFromContext* loadFrom();

  class  LoadSourceTypeContext : public antlr4::ParserRuleContext {
  public:
    LoadSourceTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INFILE_SYMBOL();
    antlr4::tree::TerminalNode *URL_SYMBOL();
    antlr4::tree::TerminalNode *S3_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoadSourceTypeContext* loadSourceType();

  class  SourceCountContext : public antlr4::ParserRuleContext {
  public:
    SourceCountContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COUNT_SYMBOL();
    antlr4::tree::TerminalNode *INT_NUMBER();
    PureIdentifierContext *pureIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SourceCountContext* sourceCount();

  class  SourceOrderContext : public antlr4::ParserRuleContext {
  public:
    SourceOrderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN_SYMBOL();
    antlr4::tree::TerminalNode *PRIMARY_SYMBOL();
    antlr4::tree::TerminalNode *KEY_SYMBOL();
    antlr4::tree::TerminalNode *ORDER_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SourceOrderContext* sourceOrder();

  class  XmlRowsIdentifiedByContext : public antlr4::ParserRuleContext {
  public:
    XmlRowsIdentifiedByContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROWS_SYMBOL();
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    TextStringContext *textString();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XmlRowsIdentifiedByContext* xmlRowsIdentifiedBy();

  class  LoadDataFileTailContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoadDataFileTailContext* loadDataFileTail();

  class  LoadDataFileTargetListContext : public antlr4::ParserRuleContext {
  public:
    LoadDataFileTargetListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    FieldOrVariableListContext *fieldOrVariableList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoadDataFileTargetListContext* loadDataFileTargetList();

  class  FieldOrVariableListContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldOrVariableListContext* fieldOrVariableList();

  class  LoadAlgorithmContext : public antlr4::ParserRuleContext {
  public:
    LoadAlgorithmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALGORITHM_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *BULK_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoadAlgorithmContext* loadAlgorithm();

  class  LoadParallelContext : public antlr4::ParserRuleContext {
  public:
    LoadParallelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARALLEL_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *INT_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoadParallelContext* loadParallel();

  class  LoadMemoryContext : public antlr4::ParserRuleContext {
  public:
    LoadMemoryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MEMORY_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    SizeNumberContext *sizeNumber();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoadMemoryContext* loadMemory();

  class  ReplaceStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReplaceStatementContext* replaceStatement();

  class  SelectStatementContext : public antlr4::ParserRuleContext {
  public:
    SelectStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionContext *queryExpression();
    LockingClauseListContext *lockingClauseList();
    SelectStatementWithIntoContext *selectStatementWithInto();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectStatementContext* selectStatement();

  class  SelectStatementWithIntoContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectStatementWithIntoContext* selectStatementWithInto();

  class  QueryExpressionContext : public antlr4::ParserRuleContext {
  public:
    QueryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionBodyContext *queryExpressionBody();
    WithClauseContext *withClause();
    OrderClauseContext *orderClause();
    LimitClauseContext *limitClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryExpressionContext* queryExpression();

  class  QueryExpressionBodyContext : public antlr4::ParserRuleContext {
  public:
    QueryExpressionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryPrimaryContext *queryPrimary();
    QueryExpressionParensContext *queryExpressionParens();
    std::vector<QueryExpressionBodyContext *> queryExpressionBody();
    QueryExpressionBodyContext* queryExpressionBody(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNION_SYMBOL();
    antlr4::tree::TerminalNode* UNION_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EXCEPT_SYMBOL();
    antlr4::tree::TerminalNode* EXCEPT_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INTERSECT_SYMBOL();
    antlr4::tree::TerminalNode* INTERSECT_SYMBOL(size_t i);
    std::vector<UnionOptionContext *> unionOption();
    UnionOptionContext* unionOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryExpressionBodyContext* queryExpressionBody();

  class  QueryExpressionParensContext : public antlr4::ParserRuleContext {
  public:
    QueryExpressionParensContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    QueryExpressionParensContext *queryExpressionParens();
    QueryExpressionWithOptLockingClausesContext *queryExpressionWithOptLockingClauses();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryExpressionParensContext* queryExpressionParens();

  class  QueryPrimaryContext : public antlr4::ParserRuleContext {
  public:
    QueryPrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QuerySpecificationContext *querySpecification();
    TableValueConstructorContext *tableValueConstructor();
    ExplicitTableContext *explicitTable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryPrimaryContext* queryPrimary();

  class  QuerySpecificationContext : public antlr4::ParserRuleContext {
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
    QualifyClauseContext *qualifyClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QuerySpecificationContext* querySpecification();

  class  SubqueryContext : public antlr4::ParserRuleContext {
  public:
    SubqueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionParensContext *queryExpressionParens();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubqueryContext* subquery();

  class  QuerySpecOptionContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QuerySpecOptionContext* querySpecOption();

  class  LimitClauseContext : public antlr4::ParserRuleContext {
  public:
    LimitClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIMIT_SYMBOL();
    LimitOptionsContext *limitOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LimitClauseContext* limitClause();

  class  SimpleLimitClauseContext : public antlr4::ParserRuleContext {
  public:
    SimpleLimitClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIMIT_SYMBOL();
    LimitOptionContext *limitOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleLimitClauseContext* simpleLimitClause();

  class  LimitOptionsContext : public antlr4::ParserRuleContext {
  public:
    LimitOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LimitOptionContext *> limitOption();
    LimitOptionContext* limitOption(size_t i);
    antlr4::tree::TerminalNode *COMMA_SYMBOL();
    antlr4::tree::TerminalNode *OFFSET_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LimitOptionsContext* limitOptions();

  class  LimitOptionContext : public antlr4::ParserRuleContext {
  public:
    LimitOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *PARAM_MARKER();
    antlr4::tree::TerminalNode *ULONGLONG_NUMBER();
    antlr4::tree::TerminalNode *LONG_NUMBER();
    antlr4::tree::TerminalNode *INT_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LimitOptionContext* limitOption();

  class  IntoClauseContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntoClauseContext* intoClause();

  class  ProcedureAnalyseClauseContext : public antlr4::ParserRuleContext {
  public:
    ProcedureAnalyseClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCEDURE_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> INT_NUMBER();
    antlr4::tree::TerminalNode* INT_NUMBER(size_t i);
    antlr4::tree::TerminalNode *COMMA_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcedureAnalyseClauseContext* procedureAnalyseClause();

  class  HavingClauseContext : public antlr4::ParserRuleContext {
  public:
    HavingClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HAVING_SYMBOL();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HavingClauseContext* havingClause();

  class  QualifyClauseContext : public antlr4::ParserRuleContext {
  public:
    QualifyClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUALIFY_SYMBOL();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifyClauseContext* qualifyClause();

  class  WindowClauseContext : public antlr4::ParserRuleContext {
  public:
    WindowClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WINDOW_SYMBOL();
    std::vector<WindowDefinitionContext *> windowDefinition();
    WindowDefinitionContext* windowDefinition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowClauseContext* windowClause();

  class  WindowDefinitionContext : public antlr4::ParserRuleContext {
  public:
    WindowDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WindowNameContext *windowName();
    antlr4::tree::TerminalNode *AS_SYMBOL();
    WindowSpecContext *windowSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowDefinitionContext* windowDefinition();

  class  WindowSpecContext : public antlr4::ParserRuleContext {
  public:
    WindowSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    WindowSpecDetailsContext *windowSpecDetails();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowSpecContext* windowSpec();

  class  WindowSpecDetailsContext : public antlr4::ParserRuleContext {
  public:
    WindowSpecDetailsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WindowNameContext *windowName();
    antlr4::tree::TerminalNode *PARTITION_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    OrderListContext *orderList();
    OrderClauseContext *orderClause();
    WindowFrameClauseContext *windowFrameClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowSpecDetailsContext* windowSpecDetails();

  class  WindowFrameClauseContext : public antlr4::ParserRuleContext {
  public:
    WindowFrameClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WindowFrameUnitsContext *windowFrameUnits();
    WindowFrameExtentContext *windowFrameExtent();
    WindowFrameExclusionContext *windowFrameExclusion();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowFrameClauseContext* windowFrameClause();

  class  WindowFrameUnitsContext : public antlr4::ParserRuleContext {
  public:
    WindowFrameUnitsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROWS_SYMBOL();
    antlr4::tree::TerminalNode *RANGE_SYMBOL();
    antlr4::tree::TerminalNode *GROUPS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowFrameUnitsContext* windowFrameUnits();

  class  WindowFrameExtentContext : public antlr4::ParserRuleContext {
  public:
    WindowFrameExtentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WindowFrameStartContext *windowFrameStart();
    WindowFrameBetweenContext *windowFrameBetween();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowFrameExtentContext* windowFrameExtent();

  class  WindowFrameStartContext : public antlr4::ParserRuleContext {
  public:
    WindowFrameStartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNBOUNDED_SYMBOL();
    antlr4::tree::TerminalNode *PRECEDING_SYMBOL();
    UlonglongNumberContext *ulonglongNumber();
    antlr4::tree::TerminalNode *PARAM_MARKER();
    antlr4::tree::TerminalNode *INTERVAL_SYMBOL();
    ExprContext *expr();
    IntervalContext *interval();
    antlr4::tree::TerminalNode *CURRENT_SYMBOL();
    antlr4::tree::TerminalNode *ROW_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowFrameStartContext* windowFrameStart();

  class  WindowFrameBetweenContext : public antlr4::ParserRuleContext {
  public:
    WindowFrameBetweenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BETWEEN_SYMBOL();
    std::vector<WindowFrameBoundContext *> windowFrameBound();
    WindowFrameBoundContext* windowFrameBound(size_t i);
    antlr4::tree::TerminalNode *AND_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowFrameBetweenContext* windowFrameBetween();

  class  WindowFrameBoundContext : public antlr4::ParserRuleContext {
  public:
    WindowFrameBoundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WindowFrameStartContext *windowFrameStart();
    antlr4::tree::TerminalNode *UNBOUNDED_SYMBOL();
    antlr4::tree::TerminalNode *FOLLOWING_SYMBOL();
    UlonglongNumberContext *ulonglongNumber();
    antlr4::tree::TerminalNode *PARAM_MARKER();
    antlr4::tree::TerminalNode *INTERVAL_SYMBOL();
    ExprContext *expr();
    IntervalContext *interval();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowFrameBoundContext* windowFrameBound();

  class  WindowFrameExclusionContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowFrameExclusionContext* windowFrameExclusion();

  class  WithClauseContext : public antlr4::ParserRuleContext {
  public:
    WithClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    std::vector<CommonTableExpressionContext *> commonTableExpression();
    CommonTableExpressionContext* commonTableExpression(size_t i);
    antlr4::tree::TerminalNode *RECURSIVE_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WithClauseContext* withClause();

  class  CommonTableExpressionContext : public antlr4::ParserRuleContext {
  public:
    CommonTableExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *AS_SYMBOL();
    SubqueryContext *subquery();
    ColumnInternalRefListContext *columnInternalRefList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommonTableExpressionContext* commonTableExpression();

  class  GroupByClauseContext : public antlr4::ParserRuleContext {
  public:
    GroupByClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUP_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    OrderListContext *orderList();
    OlapOptionContext *olapOption();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    GroupListContext *groupList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *ROLLUP_SYMBOL();
    antlr4::tree::TerminalNode *CUBE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupByClauseContext* groupByClause();

  class  OlapOptionContext : public antlr4::ParserRuleContext {
  public:
    OlapOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *ROLLUP_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OlapOptionContext* olapOption();

  class  OrderClauseContext : public antlr4::ParserRuleContext {
  public:
    OrderClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORDER_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    OrderListContext *orderList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrderClauseContext* orderClause();

  class  DirectionContext : public antlr4::ParserRuleContext {
  public:
    DirectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASC_SYMBOL();
    antlr4::tree::TerminalNode *DESC_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DirectionContext* direction();

  class  FromClauseContext : public antlr4::ParserRuleContext {
  public:
    FromClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    antlr4::tree::TerminalNode *DUAL_SYMBOL();
    TableReferenceListContext *tableReferenceList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FromClauseContext* fromClause();

  class  TableReferenceListContext : public antlr4::ParserRuleContext {
  public:
    TableReferenceListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableReferenceContext *> tableReference();
    TableReferenceContext* tableReference(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableReferenceListContext* tableReferenceList();

  class  TableValueConstructorContext : public antlr4::ParserRuleContext {
  public:
    TableValueConstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALUES_SYMBOL();
    std::vector<RowValueExplicitContext *> rowValueExplicit();
    RowValueExplicitContext* rowValueExplicit(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableValueConstructorContext* tableValueConstructor();

  class  ExplicitTableContext : public antlr4::ParserRuleContext {
  public:
    ExplicitTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    TableRefContext *tableRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplicitTableContext* explicitTable();

  class  RowValueExplicitContext : public antlr4::ParserRuleContext {
  public:
    RowValueExplicitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROW_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    ValuesContext *values();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RowValueExplicitContext* rowValueExplicit();

  class  SelectOptionContext : public antlr4::ParserRuleContext {
  public:
    SelectOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QuerySpecOptionContext *querySpecOption();
    antlr4::tree::TerminalNode *SQL_NO_CACHE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectOptionContext* selectOption();

  class  LockingClauseListContext : public antlr4::ParserRuleContext {
  public:
    LockingClauseListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LockingClauseContext *> lockingClause();
    LockingClauseContext* lockingClause(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockingClauseListContext* lockingClauseList();

  class  LockingClauseContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockingClauseContext* lockingClause();

  class  LockStrenghContext : public antlr4::ParserRuleContext {
  public:
    LockStrenghContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE_SYMBOL();
    antlr4::tree::TerminalNode *SHARE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockStrenghContext* lockStrengh();

  class  LockedRowActionContext : public antlr4::ParserRuleContext {
  public:
    LockedRowActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SKIP_SYMBOL();
    antlr4::tree::TerminalNode *LOCKED_SYMBOL();
    antlr4::tree::TerminalNode *NOWAIT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockedRowActionContext* lockedRowAction();

  class  SelectItemListContext : public antlr4::ParserRuleContext {
  public:
    SelectItemListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SelectItemContext *> selectItem();
    SelectItemContext* selectItem(size_t i);
    antlr4::tree::TerminalNode *MULT_OPERATOR();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectItemListContext* selectItemList();

  class  SelectItemContext : public antlr4::ParserRuleContext {
  public:
    SelectItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableWildContext *tableWild();
    ExprContext *expr();
    SelectAliasContext *selectAlias();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectItemContext* selectItem();

  class  SelectAliasContext : public antlr4::ParserRuleContext {
  public:
    SelectAliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *AS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectAliasContext* selectAlias();

  class  WhereClauseContext : public antlr4::ParserRuleContext {
  public:
    WhereClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE_SYMBOL();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhereClauseContext* whereClause();

  class  TableReferenceContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableReferenceContext* tableReference();

  class  EscapedTableReferenceContext : public antlr4::ParserRuleContext {
  public:
    EscapedTableReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableFactorContext *tableFactor();
    std::vector<JoinedTableContext *> joinedTable();
    JoinedTableContext* joinedTable(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EscapedTableReferenceContext* escapedTableReference();

  class  JoinedTableContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JoinedTableContext* joinedTable();

  class  NaturalJoinTypeContext : public antlr4::ParserRuleContext {
  public:
    NaturalJoinTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NATURAL_SYMBOL();
    antlr4::tree::TerminalNode *JOIN_SYMBOL();
    antlr4::tree::TerminalNode *INNER_SYMBOL();
    antlr4::tree::TerminalNode *LEFT_SYMBOL();
    antlr4::tree::TerminalNode *RIGHT_SYMBOL();
    antlr4::tree::TerminalNode *OUTER_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NaturalJoinTypeContext* naturalJoinType();

  class  InnerJoinTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    InnerJoinTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JOIN_SYMBOL();
    antlr4::tree::TerminalNode *INNER_SYMBOL();
    antlr4::tree::TerminalNode *CROSS_SYMBOL();
    antlr4::tree::TerminalNode *STRAIGHT_JOIN_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InnerJoinTypeContext* innerJoinType();

  class  OuterJoinTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    OuterJoinTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JOIN_SYMBOL();
    antlr4::tree::TerminalNode *LEFT_SYMBOL();
    antlr4::tree::TerminalNode *RIGHT_SYMBOL();
    antlr4::tree::TerminalNode *OUTER_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OuterJoinTypeContext* outerJoinType();

  class  TableFactorContext : public antlr4::ParserRuleContext {
  public:
    TableFactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleTableContext *singleTable();
    SingleTableParensContext *singleTableParens();
    DerivedTableContext *derivedTable();
    TableReferenceListParensContext *tableReferenceListParens();
    TableFunctionContext *tableFunction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableFactorContext* tableFactor();

  class  SingleTableContext : public antlr4::ParserRuleContext {
  public:
    SingleTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefContext *tableRef();
    UsePartitionContext *usePartition();
    TableAliasContext *tableAlias();
    IndexHintListContext *indexHintList();
    TablesampleClauseContext *tablesampleClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleTableContext* singleTable();

  class  SingleTableParensContext : public antlr4::ParserRuleContext {
  public:
    SingleTableParensContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    SingleTableContext *singleTable();
    SingleTableParensContext *singleTableParens();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleTableParensContext* singleTableParens();

  class  DerivedTableContext : public antlr4::ParserRuleContext {
  public:
    DerivedTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubqueryContext *subquery();
    TableAliasContext *tableAlias();
    ColumnInternalRefListContext *columnInternalRefList();
    antlr4::tree::TerminalNode *LATERAL_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DerivedTableContext* derivedTable();

  class  TableReferenceListParensContext : public antlr4::ParserRuleContext {
  public:
    TableReferenceListParensContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    TableReferenceListContext *tableReferenceList();
    TableReferenceListParensContext *tableReferenceListParens();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableReferenceListParensContext* tableReferenceListParens();

  class  TableFunctionContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableFunctionContext* tableFunction();

  class  ColumnsClauseContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnsClauseContext* columnsClause();

  class  JtColumnContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JtColumnContext* jtColumn();

  class  OnEmptyOrErrorContext : public antlr4::ParserRuleContext {
  public:
    OnEmptyOrErrorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OnEmptyContext *onEmpty();
    OnErrorContext *onError();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OnEmptyOrErrorContext* onEmptyOrError();

  class  OnEmptyOrErrorJsonTableContext : public antlr4::ParserRuleContext {
  public:
    OnEmptyOrErrorJsonTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OnEmptyOrErrorContext *onEmptyOrError();
    OnErrorContext *onError();
    OnEmptyContext *onEmpty();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OnEmptyOrErrorJsonTableContext* onEmptyOrErrorJsonTable();

  class  OnEmptyContext : public antlr4::ParserRuleContext {
  public:
    OnEmptyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    JsonOnResponseContext *jsonOnResponse();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    antlr4::tree::TerminalNode *EMPTY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OnEmptyContext* onEmpty();

  class  OnErrorContext : public antlr4::ParserRuleContext {
  public:
    OnErrorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    JsonOnResponseContext *jsonOnResponse();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    antlr4::tree::TerminalNode *ERROR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OnErrorContext* onError();

  class  JsonOnResponseContext : public antlr4::ParserRuleContext {
  public:
    JsonOnResponseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ERROR_SYMBOL();
    antlr4::tree::TerminalNode *NULL_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    TextStringLiteralContext *textStringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JsonOnResponseContext* jsonOnResponse();

  class  UnionOptionContext : public antlr4::ParserRuleContext {
  public:
    UnionOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISTINCT_SYMBOL();
    antlr4::tree::TerminalNode *ALL_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnionOptionContext* unionOption();

  class  TableAliasContext : public antlr4::ParserRuleContext {
  public:
    TableAliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *AS_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableAliasContext* tableAlias();

  class  IndexHintListContext : public antlr4::ParserRuleContext {
  public:
    IndexHintListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IndexHintContext *> indexHint();
    IndexHintContext* indexHint(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexHintListContext* indexHintList();

  class  IndexHintContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexHintContext* indexHint();

  class  IndexHintTypeContext : public antlr4::ParserRuleContext {
  public:
    IndexHintTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FORCE_SYMBOL();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexHintTypeContext* indexHintType();

  class  KeyOrIndexContext : public antlr4::ParserRuleContext {
  public:
    KeyOrIndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_SYMBOL();
    antlr4::tree::TerminalNode *INDEX_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyOrIndexContext* keyOrIndex();

  class  ConstraintKeyTypeContext : public antlr4::ParserRuleContext {
  public:
    ConstraintKeyTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRIMARY_SYMBOL();
    antlr4::tree::TerminalNode *KEY_SYMBOL();
    antlr4::tree::TerminalNode *UNIQUE_SYMBOL();
    KeyOrIndexContext *keyOrIndex();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstraintKeyTypeContext* constraintKeyType();

  class  IndexHintClauseContext : public antlr4::ParserRuleContext {
  public:
    IndexHintClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *JOIN_SYMBOL();
    antlr4::tree::TerminalNode *ORDER_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexHintClauseContext* indexHintClause();

  class  IndexListContext : public antlr4::ParserRuleContext {
  public:
    IndexListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IndexListElementContext *> indexListElement();
    IndexListElementContext* indexListElement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexListContext* indexList();

  class  IndexListElementContext : public antlr4::ParserRuleContext {
  public:
    IndexListElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *PRIMARY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexListElementContext* indexListElement();

  class  UpdateStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UpdateStatementContext* updateStatement();

  class  TransactionOrLockingStatementContext : public antlr4::ParserRuleContext {
  public:
    TransactionOrLockingStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TransactionStatementContext *transactionStatement();
    SavepointStatementContext *savepointStatement();
    LockStatementContext *lockStatement();
    XaStatementContext *xaStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TransactionOrLockingStatementContext* transactionOrLockingStatement();

  class  TransactionStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TransactionStatementContext* transactionStatement();

  class  BeginWorkContext : public antlr4::ParserRuleContext {
  public:
    BeginWorkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN_SYMBOL();
    antlr4::tree::TerminalNode *WORK_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BeginWorkContext* beginWork();

  class  StartTransactionOptionListContext : public antlr4::ParserRuleContext {
  public:
    StartTransactionOptionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *CONSISTENT_SYMBOL();
    antlr4::tree::TerminalNode *SNAPSHOT_SYMBOL();
    antlr4::tree::TerminalNode *READ_SYMBOL();
    antlr4::tree::TerminalNode *WRITE_SYMBOL();
    antlr4::tree::TerminalNode *ONLY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartTransactionOptionListContext* startTransactionOptionList();

  class  SavepointStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SavepointStatementContext* savepointStatement();

  class  LockStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockStatementContext* lockStatement();

  class  LockItemContext : public antlr4::ParserRuleContext {
  public:
    LockItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefContext *tableRef();
    LockOptionContext *lockOption();
    TableAliasContext *tableAlias();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockItemContext* lockItem();

  class  LockOptionContext : public antlr4::ParserRuleContext {
  public:
    LockOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *READ_SYMBOL();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    antlr4::tree::TerminalNode *WRITE_SYMBOL();
    antlr4::tree::TerminalNode *LOW_PRIORITY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockOptionContext* lockOption();

  class  XaStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XaStatementContext* xaStatement();

  class  XaConvertContext : public antlr4::ParserRuleContext {
  public:
    XaConvertContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONVERT_SYMBOL();
    antlr4::tree::TerminalNode *XID_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XaConvertContext* xaConvert();

  class  XidContext : public antlr4::ParserRuleContext {
  public:
    XidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TextStringContext *> textString();
    TextStringContext* textString(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);
    Ulong_numberContext *ulong_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XidContext* xid();

  class  ReplicationStatementContext : public antlr4::ParserRuleContext {
  public:
    ReplicationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PURGE_SYMBOL();
    PurgeOptionsContext *purgeOptions();
    ChangeSourceContext *changeSource();
    antlr4::tree::TerminalNode *RESET_SYMBOL();
    std::vector<ResetOptionContext *> resetOption();
    ResetOptionContext* resetOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *PERSIST_SYMBOL();
    IfExistsIdentifierContext *ifExistsIdentifier();
    StartReplicaStatementContext *startReplicaStatement();
    StopReplicaStatementContext *stopReplicaStatement();
    ChangeReplicationContext *changeReplication();
    ReplicationLoadContext *replicationLoad();
    GroupReplicationContext *groupReplication();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReplicationStatementContext* replicationStatement();

  class  PurgeOptionsContext : public antlr4::ParserRuleContext {
  public:
    PurgeOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOGS_SYMBOL();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SYMBOL();
    antlr4::tree::TerminalNode *TO_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *BEFORE_SYMBOL();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PurgeOptionsContext* purgeOptions();

  class  ResetOptionContext : public antlr4::ParserRuleContext {
  public:
    ResetOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MasterOrBinaryLogsAndGtidsContext *masterOrBinaryLogsAndGtids();
    SourceResetOptionsContext *sourceResetOptions();
    ReplicaContext *replica();
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    ChannelContext *channel();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResetOptionContext* resetOption();

  class  MasterOrBinaryLogsAndGtidsContext : public antlr4::ParserRuleContext {
  public:
    MasterOrBinaryLogsAndGtidsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_SYMBOL();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();
    antlr4::tree::TerminalNode *LOGS_SYMBOL();
    antlr4::tree::TerminalNode *AND_SYMBOL();
    antlr4::tree::TerminalNode *GTIDS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MasterOrBinaryLogsAndGtidsContext* masterOrBinaryLogsAndGtids();

  class  SourceResetOptionsContext : public antlr4::ParserRuleContext {
  public:
    SourceResetOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TO_SYMBOL();
    Real_ulonglong_numberContext *real_ulonglong_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SourceResetOptionsContext* sourceResetOptions();

  class  ReplicationLoadContext : public antlr4::ParserRuleContext {
  public:
    ReplicationLoadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOAD_SYMBOL();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SYMBOL();
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    TableRefContext *tableRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReplicationLoadContext* replicationLoad();

  class  ChangeReplicationSourceContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATION_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourceContext* changeReplicationSource();

  class  ChangeSourceContext : public antlr4::ParserRuleContext {
  public:
    ChangeSourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHANGE_SYMBOL();
    ChangeReplicationSourceContext *changeReplicationSource();
    antlr4::tree::TerminalNode *TO_SYMBOL();
    SourceDefinitionsContext *sourceDefinitions();
    ChannelContext *channel();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeSourceContext* changeSource();

  class  SourceDefinitionsContext : public antlr4::ParserRuleContext {
  public:
    SourceDefinitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SourceDefinitionContext *> sourceDefinition();
    SourceDefinitionContext* sourceDefinition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SourceDefinitionsContext* sourceDefinitions();

  class  SourceDefinitionContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SourceDefinitionContext* sourceDefinition();

  class  ChangeReplicationSourceAutoPositionContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceAutoPositionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_AUTO_POSITION_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_AUTO_POSITION_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourceAutoPositionContext* changeReplicationSourceAutoPosition();

  class  ChangeReplicationSourceHostContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceHostContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_HOST_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_HOST_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourceHostContext* changeReplicationSourceHost();

  class  ChangeReplicationSourceBindContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceBindContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_BIND_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_BIND_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourceBindContext* changeReplicationSourceBind();

  class  ChangeReplicationSourceUserContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_USER_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_USER_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourceUserContext* changeReplicationSourceUser();

  class  ChangeReplicationSourcePasswordContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourcePasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_PASSWORD_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourcePasswordContext* changeReplicationSourcePassword();

  class  ChangeReplicationSourcePortContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourcePortContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_PORT_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_PORT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourcePortContext* changeReplicationSourcePort();

  class  ChangeReplicationSourceConnectRetryContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceConnectRetryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_CONNECT_RETRY_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_CONNECT_RETRY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourceConnectRetryContext* changeReplicationSourceConnectRetry();

  class  ChangeReplicationSourceRetryCountContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceRetryCountContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_RETRY_COUNT_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_RETRY_COUNT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourceRetryCountContext* changeReplicationSourceRetryCount();

  class  ChangeReplicationSourceDelayContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceDelayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_DELAY_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_DELAY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourceDelayContext* changeReplicationSourceDelay();

  class  ChangeReplicationSourceSSLContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceSSLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_SSL_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourceSSLContext* changeReplicationSourceSSL();

  class  ChangeReplicationSourceSSLCAContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceSSLCAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_SSL_CA_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_CA_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourceSSLCAContext* changeReplicationSourceSSLCA();

  class  ChangeReplicationSourceSSLCApathContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceSSLCApathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_SSL_CAPATH_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_CAPATH_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourceSSLCApathContext* changeReplicationSourceSSLCApath();

  class  ChangeReplicationSourceSSLCipherContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceSSLCipherContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_SSL_CIPHER_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_CIPHER_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourceSSLCipherContext* changeReplicationSourceSSLCipher();

  class  ChangeReplicationSourceSSLCLRContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceSSLCLRContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_SSL_CRL_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_CRL_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourceSSLCLRContext* changeReplicationSourceSSLCLR();

  class  ChangeReplicationSourceSSLCLRpathContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceSSLCLRpathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_SSL_CRLPATH_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_CRLPATH_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourceSSLCLRpathContext* changeReplicationSourceSSLCLRpath();

  class  ChangeReplicationSourceSSLKeyContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceSSLKeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_SSL_KEY_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_KEY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourceSSLKeyContext* changeReplicationSourceSSLKey();

  class  ChangeReplicationSourceSSLVerifyServerCertContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceSSLVerifyServerCertContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_SSL_VERIFY_SERVER_CERT_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_VERIFY_SERVER_CERT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourceSSLVerifyServerCertContext* changeReplicationSourceSSLVerifyServerCert();

  class  ChangeReplicationSourceTLSVersionContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceTLSVersionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_TLS_VERSION_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_TLS_VERSION_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourceTLSVersionContext* changeReplicationSourceTLSVersion();

  class  ChangeReplicationSourceTLSCiphersuitesContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceTLSCiphersuitesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_TLS_CIPHERSUITES_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_TLS_CIPHERSUITES_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourceTLSCiphersuitesContext* changeReplicationSourceTLSCiphersuites();

  class  ChangeReplicationSourceSSLCertContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceSSLCertContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_SSL_CERT_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SSL_CERT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourceSSLCertContext* changeReplicationSourceSSLCert();

  class  ChangeReplicationSourcePublicKeyContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourcePublicKeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_PUBLIC_KEY_PATH_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_PUBLIC_KEY_PATH_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourcePublicKeyContext* changeReplicationSourcePublicKey();

  class  ChangeReplicationSourceGetSourcePublicKeyContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceGetSourcePublicKeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GET_MASTER_PUBLIC_KEY_SYMBOL();
    antlr4::tree::TerminalNode *GET_SOURCE_PUBLIC_KEY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourceGetSourcePublicKeyContext* changeReplicationSourceGetSourcePublicKey();

  class  ChangeReplicationSourceHeartbeatPeriodContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceHeartbeatPeriodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_HEARTBEAT_PERIOD_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_HEARTBEAT_PERIOD_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourceHeartbeatPeriodContext* changeReplicationSourceHeartbeatPeriod();

  class  ChangeReplicationSourceCompressionAlgorithmContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceCompressionAlgorithmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_COMPRESSION_ALGORITHM_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_COMPRESSION_ALGORITHM_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourceCompressionAlgorithmContext* changeReplicationSourceCompressionAlgorithm();

  class  ChangeReplicationSourceZstdCompressionLevelContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationSourceZstdCompressionLevelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_ZSTD_COMPRESSION_LEVEL_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_ZSTD_COMPRESSION_LEVEL_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationSourceZstdCompressionLevelContext* changeReplicationSourceZstdCompressionLevel();

  class  PrivilegeCheckDefContext : public antlr4::ParserRuleContext {
  public:
    PrivilegeCheckDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserIdentifierOrTextContext *userIdentifierOrText();
    antlr4::tree::TerminalNode *NULL_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrivilegeCheckDefContext* privilegeCheckDef();

  class  TablePrimaryKeyCheckDefContext : public antlr4::ParserRuleContext {
  public:
    TablePrimaryKeyCheckDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STREAM_SYMBOL();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    antlr4::tree::TerminalNode *OFF_SYMBOL();
    antlr4::tree::TerminalNode *GENERATE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablePrimaryKeyCheckDefContext* tablePrimaryKeyCheckDef();

  class  AssignGtidsToAnonymousTransactionsDefinitionContext : public antlr4::ParserRuleContext {
  public:
    AssignGtidsToAnonymousTransactionsDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OFF_SYMBOL();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    TextStringLiteralContext *textStringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignGtidsToAnonymousTransactionsDefinitionContext* assignGtidsToAnonymousTransactionsDefinition();

  class  SourceTlsCiphersuitesDefContext : public antlr4::ParserRuleContext {
  public:
    SourceTlsCiphersuitesDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextStringNoLinebreakContext *textStringNoLinebreak();
    antlr4::tree::TerminalNode *NULL_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SourceTlsCiphersuitesDefContext* sourceTlsCiphersuitesDef();

  class  SourceFileDefContext : public antlr4::ParserRuleContext {
  public:
    SourceFileDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SourceLogFileContext *sourceLogFile();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TextStringNoLinebreakContext *textStringNoLinebreak();
    SourceLogPosContext *sourceLogPos();
    UlonglongNumberContext *ulonglongNumber();
    antlr4::tree::TerminalNode *RELAY_LOG_FILE_SYMBOL();
    antlr4::tree::TerminalNode *RELAY_LOG_POS_SYMBOL();
    Ulong_numberContext *ulong_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SourceFileDefContext* sourceFileDef();

  class  SourceLogFileContext : public antlr4::ParserRuleContext {
  public:
    SourceLogFileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_LOG_FILE_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_LOG_FILE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SourceLogFileContext* sourceLogFile();

  class  SourceLogPosContext : public antlr4::ParserRuleContext {
  public:
    SourceLogPosContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_LOG_POS_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_LOG_POS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SourceLogPosContext* sourceLogPos();

  class  ServerIdListContext : public antlr4::ParserRuleContext {
  public:
    ServerIdListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<Ulong_numberContext *> ulong_number();
    Ulong_numberContext* ulong_number(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ServerIdListContext* serverIdList();

  class  ChangeReplicationContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationContext* changeReplication();

  class  FilterDefinitionContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FilterDefinitionContext* filterDefinition();

  class  FilterDbListContext : public antlr4::ParserRuleContext {
  public:
    FilterDbListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SchemaRefContext *> schemaRef();
    SchemaRefContext* schemaRef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FilterDbListContext* filterDbList();

  class  FilterTableListContext : public antlr4::ParserRuleContext {
  public:
    FilterTableListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FilterTableRefContext *> filterTableRef();
    FilterTableRefContext* filterTableRef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FilterTableListContext* filterTableList();

  class  FilterStringListContext : public antlr4::ParserRuleContext {
  public:
    FilterStringListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FilterWildDbTableStringContext *> filterWildDbTableString();
    FilterWildDbTableStringContext* filterWildDbTableString(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FilterStringListContext* filterStringList();

  class  FilterWildDbTableStringContext : public antlr4::ParserRuleContext {
  public:
    FilterWildDbTableStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextStringNoLinebreakContext *textStringNoLinebreak();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FilterWildDbTableStringContext* filterWildDbTableString();

  class  FilterDbPairListContext : public antlr4::ParserRuleContext {
  public:
    FilterDbPairListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SchemaIdentifierPairContext *> schemaIdentifierPair();
    SchemaIdentifierPairContext* schemaIdentifierPair(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FilterDbPairListContext* filterDbPairList();

  class  StartReplicaStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartReplicaStatementContext* startReplicaStatement();

  class  StopReplicaStatementContext : public antlr4::ParserRuleContext {
  public:
    StopReplicaStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STOP_SYMBOL();
    ReplicaContext *replica();
    ReplicaThreadOptionsContext *replicaThreadOptions();
    ChannelContext *channel();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StopReplicaStatementContext* stopReplicaStatement();

  class  ReplicaUntilContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReplicaUntilContext* replicaUntil();

  class  UserOptionContext : public antlr4::ParserRuleContext {
  public:
    UserOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USER_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TextStringContext *textString();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserOptionContext* userOption();

  class  PasswordOptionContext : public antlr4::ParserRuleContext {
  public:
    PasswordOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TextStringContext *textString();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PasswordOptionContext* passwordOption();

  class  DefaultAuthOptionContext : public antlr4::ParserRuleContext {
  public:
    DefaultAuthOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT_AUTH_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TextStringContext *textString();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultAuthOptionContext* defaultAuthOption();

  class  PluginDirOptionContext : public antlr4::ParserRuleContext {
  public:
    PluginDirOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUGIN_DIR_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TextStringContext *textString();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PluginDirOptionContext* pluginDirOption();

  class  ReplicaThreadOptionsContext : public antlr4::ParserRuleContext {
  public:
    ReplicaThreadOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ReplicaThreadOptionContext *> replicaThreadOption();
    ReplicaThreadOptionContext* replicaThreadOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReplicaThreadOptionsContext* replicaThreadOptions();

  class  ReplicaThreadOptionContext : public antlr4::ParserRuleContext {
  public:
    ReplicaThreadOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SQL_THREAD_SYMBOL();
    antlr4::tree::TerminalNode *RELAY_THREAD_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReplicaThreadOptionContext* replicaThreadOption();

  class  GroupReplicationContext : public antlr4::ParserRuleContext {
  public:
    GroupReplicationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUP_REPLICATION_SYMBOL();
    antlr4::tree::TerminalNode *START_SYMBOL();
    antlr4::tree::TerminalNode *STOP_SYMBOL();
    GroupReplicationStartOptionsContext *groupReplicationStartOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupReplicationContext* groupReplication();

  class  GroupReplicationStartOptionsContext : public antlr4::ParserRuleContext {
  public:
    GroupReplicationStartOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<GroupReplicationStartOptionContext *> groupReplicationStartOption();
    GroupReplicationStartOptionContext* groupReplicationStartOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupReplicationStartOptionsContext* groupReplicationStartOptions();

  class  GroupReplicationStartOptionContext : public antlr4::ParserRuleContext {
  public:
    GroupReplicationStartOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GroupReplicationUserContext *groupReplicationUser();
    GroupReplicationPasswordContext *groupReplicationPassword();
    GroupReplicationPluginAuthContext *groupReplicationPluginAuth();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupReplicationStartOptionContext* groupReplicationStartOption();

  class  GroupReplicationUserContext : public antlr4::ParserRuleContext {
  public:
    GroupReplicationUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USER_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TextStringNoLinebreakContext *textStringNoLinebreak();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupReplicationUserContext* groupReplicationUser();

  class  GroupReplicationPasswordContext : public antlr4::ParserRuleContext {
  public:
    GroupReplicationPasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TextStringNoLinebreakContext *textStringNoLinebreak();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupReplicationPasswordContext* groupReplicationPassword();

  class  GroupReplicationPluginAuthContext : public antlr4::ParserRuleContext {
  public:
    GroupReplicationPluginAuthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT_AUTH_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TextStringNoLinebreakContext *textStringNoLinebreak();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupReplicationPluginAuthContext* groupReplicationPluginAuth();

  class  ReplicaContext : public antlr4::ParserRuleContext {
  public:
    ReplicaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SLAVE_SYMBOL();
    antlr4::tree::TerminalNode *REPLICA_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReplicaContext* replica();

  class  PreparedStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PreparedStatementContext* preparedStatement();

  class  ExecuteStatementContext : public antlr4::ParserRuleContext {
  public:
    ExecuteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXECUTE_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *USING_SYMBOL();
    ExecuteVarListContext *executeVarList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExecuteStatementContext* executeStatement();

  class  ExecuteVarListContext : public antlr4::ParserRuleContext {
  public:
    ExecuteVarListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UserVariableContext *> userVariable();
    UserVariableContext* userVariable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExecuteVarListContext* executeVarList();

  class  CloneStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CloneStatementContext* cloneStatement();

  class  DataDirSSLContext : public antlr4::ParserRuleContext {
  public:
    DataDirSSLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SslContext *ssl();
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    antlr4::tree::TerminalNode *DIRECTORY_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    EqualContext *equal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataDirSSLContext* dataDirSSL();

  class  SslContext : public antlr4::ParserRuleContext {
  public:
    SslContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REQUIRE_SYMBOL();
    antlr4::tree::TerminalNode *SSL_SYMBOL();
    antlr4::tree::TerminalNode *NO_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SslContext* ssl();

  class  AccountManagementStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccountManagementStatementContext* accountManagementStatement();

  class  AlterUserStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterUserStatementContext* alterUserStatement();

  class  AlterUserListContext : public antlr4::ParserRuleContext {
  public:
    AlterUserListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AlterUserContext *> alterUser();
    AlterUserContext* alterUser(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterUserListContext* alterUserList();

  class  AlterUserContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterUserContext* alterUser();

  class  OldAlterUserContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OldAlterUserContext* oldAlterUser();

  class  UserFunctionContext : public antlr4::ParserRuleContext {
  public:
    UserFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USER_SYMBOL();
    ParenthesesContext *parentheses();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserFunctionContext* userFunction();

  class  CreateUserStatementContext : public antlr4::ParserRuleContext {
  public:
    CreateUserStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    CreateUserListContext *createUserList();
    CreateUserTailContext *createUserTail();
    IfNotExistsContext *ifNotExists();
    DefaultRoleClauseContext *defaultRoleClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateUserStatementContext* createUserStatement();

  class  CreateUserTailContext : public antlr4::ParserRuleContext {
  public:
    CreateUserTailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RequireClauseContext *requireClause();
    ConnectOptionsContext *connectOptions();
    std::vector<AccountLockPasswordExpireOptionsContext *> accountLockPasswordExpireOptions();
    AccountLockPasswordExpireOptionsContext* accountLockPasswordExpireOptions(size_t i);
    UserAttributesContext *userAttributes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateUserTailContext* createUserTail();

  class  UserAttributesContext : public antlr4::ParserRuleContext {
  public:
    UserAttributesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ATTRIBUTE_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserAttributesContext* userAttributes();

  class  DefaultRoleClauseContext : public antlr4::ParserRuleContext {
  public:
    DefaultRoleClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *ROLE_SYMBOL();
    RoleListContext *roleList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultRoleClauseContext* defaultRoleClause();

  class  RequireClauseContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *option = nullptr;
    RequireClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REQUIRE_SYMBOL();
    RequireListContext *requireList();
    antlr4::tree::TerminalNode *SSL_SYMBOL();
    antlr4::tree::TerminalNode *X509_SYMBOL();
    antlr4::tree::TerminalNode *NONE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RequireClauseContext* requireClause();

  class  ConnectOptionsContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConnectOptionsContext* connectOptions();

  class  AccountLockPasswordExpireOptionsContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccountLockPasswordExpireOptionsContext* accountLockPasswordExpireOptions();

  class  UserAttributeContext : public antlr4::ParserRuleContext {
  public:
    UserAttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ATTRIBUTE_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserAttributeContext* userAttribute();

  class  DropUserStatementContext : public antlr4::ParserRuleContext {
  public:
    DropUserStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    UserListContext *userList();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropUserStatementContext* dropUserStatement();

  class  GrantStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrantStatementContext* grantStatement();

  class  GrantTargetListContext : public antlr4::ParserRuleContext {
  public:
    GrantTargetListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CreateUserListContext *createUserList();
    UserListContext *userList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrantTargetListContext* grantTargetList();

  class  GrantOptionsContext : public antlr4::ParserRuleContext {
  public:
    GrantOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    GrantOptionContext *grantOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrantOptionsContext* grantOptions();

  class  ExceptRoleListContext : public antlr4::ParserRuleContext {
  public:
    ExceptRoleListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXCEPT_SYMBOL();
    RoleListContext *roleList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExceptRoleListContext* exceptRoleList();

  class  WithRolesContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WithRolesContext* withRoles();

  class  GrantAsContext : public antlr4::ParserRuleContext {
  public:
    GrantAsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    WithRolesContext *withRoles();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrantAsContext* grantAs();

  class  VersionedRequireClauseContext : public antlr4::ParserRuleContext {
  public:
    VersionedRequireClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RequireClauseContext *requireClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VersionedRequireClauseContext* versionedRequireClause();

  class  RenameUserStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RenameUserStatementContext* renameUserStatement();

  class  RevokeStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RevokeStatementContext* revokeStatement();

  class  AclTypeContext : public antlr4::ParserRuleContext {
  public:
    AclTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    antlr4::tree::TerminalNode *FUNCTION_SYMBOL();
    antlr4::tree::TerminalNode *PROCEDURE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AclTypeContext* aclType();

  class  RoleOrPrivilegesListContext : public antlr4::ParserRuleContext {
  public:
    RoleOrPrivilegesListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RoleOrPrivilegeContext *> roleOrPrivilege();
    RoleOrPrivilegeContext* roleOrPrivilege(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoleOrPrivilegesListContext* roleOrPrivilegesList();

  class  RoleOrPrivilegeContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoleOrPrivilegeContext* roleOrPrivilege();

  class  GrantIdentifierContext : public antlr4::ParserRuleContext {
  public:
    GrantIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> MULT_OPERATOR();
    antlr4::tree::TerminalNode* MULT_OPERATOR(size_t i);
    antlr4::tree::TerminalNode *DOT_SYMBOL();
    SchemaRefContext *schemaRef();
    TableRefContext *tableRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrantIdentifierContext* grantIdentifier();

  class  RequireListContext : public antlr4::ParserRuleContext {
  public:
    RequireListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RequireListElementContext *> requireListElement();
    RequireListElementContext* requireListElement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND_SYMBOL();
    antlr4::tree::TerminalNode* AND_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RequireListContext* requireList();

  class  RequireListElementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *element = nullptr;
    RequireListElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextStringContext *textString();
    antlr4::tree::TerminalNode *CIPHER_SYMBOL();
    antlr4::tree::TerminalNode *ISSUER_SYMBOL();
    antlr4::tree::TerminalNode *SUBJECT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RequireListElementContext* requireListElement();

  class  GrantOptionContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrantOptionContext* grantOption();

  class  SetRoleStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetRoleStatementContext* setRoleStatement();

  class  RoleListContext : public antlr4::ParserRuleContext {
  public:
    RoleListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RoleContext *> role();
    RoleContext* role(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoleListContext* roleList();

  class  RoleContext : public antlr4::ParserRuleContext {
  public:
    RoleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RoleIdentifierOrTextContext *roleIdentifierOrText();
    UserVariableContext *userVariable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoleContext* role();

  class  TableAdministrationStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableAdministrationStatementContext* tableAdministrationStatement();

  class  HistogramAutoUpdateContext : public antlr4::ParserRuleContext {
  public:
    HistogramAutoUpdateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE_SYMBOL();
    antlr4::tree::TerminalNode *MANUAL_SYMBOL();
    antlr4::tree::TerminalNode *AUTO_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HistogramAutoUpdateContext* histogramAutoUpdate();

  class  HistogramUpdateParamContext : public antlr4::ParserRuleContext {
  public:
    HistogramUpdateParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HistogramNumBucketsContext *histogramNumBuckets();
    HistogramAutoUpdateContext *histogramAutoUpdate();
    antlr4::tree::TerminalNode *USING_SYMBOL();
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    TextStringLiteralContext *textStringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HistogramUpdateParamContext* histogramUpdateParam();

  class  HistogramNumBucketsContext : public antlr4::ParserRuleContext {
  public:
    HistogramNumBucketsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *INT_NUMBER();
    antlr4::tree::TerminalNode *BUCKETS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HistogramNumBucketsContext* histogramNumBuckets();

  class  HistogramContext : public antlr4::ParserRuleContext {
  public:
    HistogramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE_SYMBOL();
    antlr4::tree::TerminalNode *HISTOGRAM_SYMBOL();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    IdentifierListContext *identifierList();
    HistogramUpdateParamContext *histogramUpdateParam();
    antlr4::tree::TerminalNode *DROP_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HistogramContext* histogram();

  class  CheckOptionContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CheckOptionContext* checkOption();

  class  RepairTypeContext : public antlr4::ParserRuleContext {
  public:
    RepairTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUICK_SYMBOL();
    antlr4::tree::TerminalNode *EXTENDED_SYMBOL();
    antlr4::tree::TerminalNode *USE_FRM_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RepairTypeContext* repairType();

  class  UninstallStatementContext : public antlr4::ParserRuleContext {
  public:
    UninstallStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNINSTALL_SYMBOL();
    antlr4::tree::TerminalNode *PLUGIN_SYMBOL();
    PluginRefContext *pluginRef();
    antlr4::tree::TerminalNode *COMPONENT_SYMBOL();
    std::vector<ComponentRefContext *> componentRef();
    ComponentRefContext* componentRef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UninstallStatementContext* uninstallStatement();

  class  InstallStatementContext : public antlr4::ParserRuleContext {
  public:
    InstallStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSTALL_SYMBOL();
    antlr4::tree::TerminalNode *PLUGIN_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SONAME_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *COMPONENT_SYMBOL();
    TextStringLiteralListContext *textStringLiteralList();
    InstallSetValueListContext *installSetValueList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstallStatementContext* installStatement();

  class  InstallOptionTypeContext : public antlr4::ParserRuleContext {
  public:
    InstallOptionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GLOBAL_SYMBOL();
    antlr4::tree::TerminalNode *PERSIST_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstallOptionTypeContext* installOptionType();

  class  InstallSetRvalueContext : public antlr4::ParserRuleContext {
  public:
    InstallSetRvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *ON_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstallSetRvalueContext* installSetRvalue();

  class  InstallSetValueContext : public antlr4::ParserRuleContext {
  public:
    InstallSetValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InstallOptionTypeContext *installOptionType();
    LvalueVariableContext *lvalueVariable();
    EqualContext *equal();
    InstallSetRvalueContext *installSetRvalue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstallSetValueContext* installSetValue();

  class  InstallSetValueListContext : public antlr4::ParserRuleContext {
  public:
    InstallSetValueListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_SYMBOL();
    std::vector<InstallSetValueContext *> installSetValue();
    InstallSetValueContext* installSetValue(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstallSetValueListContext* installSetValueList();

  class  SetStatementContext : public antlr4::ParserRuleContext {
  public:
    SetStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_SYMBOL();
    StartOptionValueListContext *startOptionValueList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetStatementContext* setStatement();

  class  StartOptionValueListContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartOptionValueListContext* startOptionValueList();

  class  TransactionCharacteristicsContext : public antlr4::ParserRuleContext {
  public:
    TransactionCharacteristicsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TransactionAccessModeContext *transactionAccessMode();
    IsolationLevelContext *isolationLevel();
    antlr4::tree::TerminalNode *COMMA_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TransactionCharacteristicsContext* transactionCharacteristics();

  class  TransactionAccessModeContext : public antlr4::ParserRuleContext {
  public:
    TransactionAccessModeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *READ_SYMBOL();
    antlr4::tree::TerminalNode *WRITE_SYMBOL();
    antlr4::tree::TerminalNode *ONLY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TransactionAccessModeContext* transactionAccessMode();

  class  IsolationLevelContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IsolationLevelContext* isolationLevel();

  class  OptionValueListContinuedContext : public antlr4::ParserRuleContext {
  public:
    OptionValueListContinuedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);
    std::vector<OptionValueContext *> optionValue();
    OptionValueContext* optionValue(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionValueListContinuedContext* optionValueListContinued();

  class  OptionValueNoOptionTypeContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionValueNoOptionTypeContext* optionValueNoOptionType();

  class  OptionValueContext : public antlr4::ParserRuleContext {
  public:
    OptionValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptionTypeContext *optionType();
    LvalueVariableContext *lvalueVariable();
    EqualContext *equal();
    SetExprOrDefaultContext *setExprOrDefault();
    OptionValueNoOptionTypeContext *optionValueNoOptionType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionValueContext* optionValue();

  class  SetSystemVariableContext : public antlr4::ParserRuleContext {
  public:
    SetSystemVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT_AT_SIGN_SYMBOL();
    LvalueVariableContext *lvalueVariable();
    SetVarIdentTypeContext *setVarIdentType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetSystemVariableContext* setSystemVariable();

  class  StartOptionValueListFollowingOptionTypeContext : public antlr4::ParserRuleContext {
  public:
    StartOptionValueListFollowingOptionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptionValueFollowingOptionTypeContext *optionValueFollowingOptionType();
    OptionValueListContinuedContext *optionValueListContinued();
    antlr4::tree::TerminalNode *TRANSACTION_SYMBOL();
    TransactionCharacteristicsContext *transactionCharacteristics();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartOptionValueListFollowingOptionTypeContext* startOptionValueListFollowingOptionType();

  class  OptionValueFollowingOptionTypeContext : public antlr4::ParserRuleContext {
  public:
    OptionValueFollowingOptionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LvalueVariableContext *lvalueVariable();
    EqualContext *equal();
    SetExprOrDefaultContext *setExprOrDefault();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionValueFollowingOptionTypeContext* optionValueFollowingOptionType();

  class  SetExprOrDefaultContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetExprOrDefaultContext* setExprOrDefault();

  class  ShowDatabasesStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowDatabasesStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *DATABASES_SYMBOL();
    LikeOrWhereContext *likeOrWhere();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowDatabasesStatementContext* showDatabasesStatement();

  class  ShowTablesStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *value = nullptr;
    ShowTablesStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *TABLES_SYMBOL();
    ShowCommandTypeContext *showCommandType();
    InDbContext *inDb();
    LikeOrWhereContext *likeOrWhere();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowTablesStatementContext* showTablesStatement();

  class  ShowTriggersStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowTriggersStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *TRIGGERS_SYMBOL();
    antlr4::tree::TerminalNode *FULL_SYMBOL();
    InDbContext *inDb();
    LikeOrWhereContext *likeOrWhere();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowTriggersStatementContext* showTriggersStatement();

  class  ShowEventsStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowEventsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *EVENTS_SYMBOL();
    InDbContext *inDb();
    LikeOrWhereContext *likeOrWhere();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowEventsStatementContext* showEventsStatement();

  class  ShowTableStatusStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowTableStatusStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    antlr4::tree::TerminalNode *STATUS_SYMBOL();
    InDbContext *inDb();
    LikeOrWhereContext *likeOrWhere();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowTableStatusStatementContext* showTableStatusStatement();

  class  ShowOpenTablesStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowOpenTablesStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_SYMBOL();
    antlr4::tree::TerminalNode *TABLES_SYMBOL();
    InDbContext *inDb();
    LikeOrWhereContext *likeOrWhere();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowOpenTablesStatementContext* showOpenTablesStatement();

  class  ShowParseTreeStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowParseTreeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *PARSE_TREE_SYMBOL();
    SimpleStatementContext *simpleStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowParseTreeStatementContext* showParseTreeStatement();

  class  ShowPluginsStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowPluginsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *PLUGINS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowPluginsStatementContext* showPluginsStatement();

  class  ShowEngineLogsStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowEngineLogsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *ENGINE_SYMBOL();
    EngineOrAllContext *engineOrAll();
    antlr4::tree::TerminalNode *LOGS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowEngineLogsStatementContext* showEngineLogsStatement();

  class  ShowEngineMutexStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowEngineMutexStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *ENGINE_SYMBOL();
    EngineOrAllContext *engineOrAll();
    antlr4::tree::TerminalNode *MUTEX_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowEngineMutexStatementContext* showEngineMutexStatement();

  class  ShowEngineStatusStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowEngineStatusStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *ENGINE_SYMBOL();
    EngineOrAllContext *engineOrAll();
    antlr4::tree::TerminalNode *STATUS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowEngineStatusStatementContext* showEngineStatusStatement();

  class  ShowColumnsStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowColumnsStatementContext* showColumnsStatement();

  class  ShowBinaryLogsStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *value = nullptr;
    ShowBinaryLogsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SYMBOL();
    antlr4::tree::TerminalNode *LOGS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowBinaryLogsStatementContext* showBinaryLogsStatement();

  class  ShowBinaryLogStatusStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowBinaryLogStatusStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();
    antlr4::tree::TerminalNode *LOG_SYMBOL();
    antlr4::tree::TerminalNode *STATUS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowBinaryLogStatusStatementContext* showBinaryLogStatusStatement();

  class  ShowReplicasStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowReplicasStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    ReplicaContext *replica();
    antlr4::tree::TerminalNode *HOSTS_SYMBOL();
    antlr4::tree::TerminalNode *REPLICAS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowReplicasStatementContext* showReplicasStatement();

  class  ShowBinlogEventsStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowBinlogEventsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *BINLOG_SYMBOL();
    antlr4::tree::TerminalNode *EVENTS_SYMBOL();
    antlr4::tree::TerminalNode *IN_SYMBOL();
    TextStringContext *textString();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    UlonglongNumberContext *ulonglongNumber();
    LimitClauseContext *limitClause();
    ChannelContext *channel();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowBinlogEventsStatementContext* showBinlogEventsStatement();

  class  ShowRelaylogEventsStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowRelaylogEventsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *RELAYLOG_SYMBOL();
    antlr4::tree::TerminalNode *EVENTS_SYMBOL();
    antlr4::tree::TerminalNode *IN_SYMBOL();
    TextStringContext *textString();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    UlonglongNumberContext *ulonglongNumber();
    LimitClauseContext *limitClause();
    ChannelContext *channel();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowRelaylogEventsStatementContext* showRelaylogEventsStatement();

  class  ShowKeysStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowKeysStatementContext* showKeysStatement();

  class  ShowEnginesStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *value = nullptr;
    ShowEnginesStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *ENGINES_SYMBOL();
    antlr4::tree::TerminalNode *STORAGE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowEnginesStatementContext* showEnginesStatement();

  class  ShowCountWarningsStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCountWarningsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *COUNT_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *MULT_OPERATOR();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *WARNINGS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCountWarningsStatementContext* showCountWarningsStatement();

  class  ShowCountErrorsStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCountErrorsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *COUNT_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *MULT_OPERATOR();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *ERRORS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCountErrorsStatementContext* showCountErrorsStatement();

  class  ShowWarningsStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowWarningsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *WARNINGS_SYMBOL();
    LimitClauseContext *limitClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowWarningsStatementContext* showWarningsStatement();

  class  ShowErrorsStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowErrorsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *ERRORS_SYMBOL();
    LimitClauseContext *limitClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowErrorsStatementContext* showErrorsStatement();

  class  ShowProfilesStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowProfilesStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *PROFILES_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowProfilesStatementContext* showProfilesStatement();

  class  ShowProfileStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowProfileStatementContext* showProfileStatement();

  class  ShowStatusStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowStatusStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *STATUS_SYMBOL();
    OptionTypeContext *optionType();
    LikeOrWhereContext *likeOrWhere();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowStatusStatementContext* showStatusStatement();

  class  ShowProcessListStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowProcessListStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *PROCESSLIST_SYMBOL();
    antlr4::tree::TerminalNode *FULL_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowProcessListStatementContext* showProcessListStatement();

  class  ShowVariablesStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowVariablesStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *VARIABLES_SYMBOL();
    OptionTypeContext *optionType();
    LikeOrWhereContext *likeOrWhere();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowVariablesStatementContext* showVariablesStatement();

  class  ShowCharacterSetStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCharacterSetStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    CharsetContext *charset();
    LikeOrWhereContext *likeOrWhere();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCharacterSetStatementContext* showCharacterSetStatement();

  class  ShowCollationStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCollationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *COLLATION_SYMBOL();
    LikeOrWhereContext *likeOrWhere();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCollationStatementContext* showCollationStatement();

  class  ShowPrivilegesStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowPrivilegesStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *PRIVILEGES_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowPrivilegesStatementContext* showPrivilegesStatement();

  class  ShowGrantsStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowGrantsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *GRANTS_SYMBOL();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    UserContext *user();
    antlr4::tree::TerminalNode *USING_SYMBOL();
    UserListContext *userList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowGrantsStatementContext* showGrantsStatement();

  class  ShowCreateDatabaseStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateDatabaseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *DATABASE_SYMBOL();
    SchemaRefContext *schemaRef();
    IfNotExistsContext *ifNotExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCreateDatabaseStatementContext* showCreateDatabaseStatement();

  class  ShowCreateTableStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateTableStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    TableRefContext *tableRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCreateTableStatementContext* showCreateTableStatement();

  class  ShowCreateViewStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateViewStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *VIEW_SYMBOL();
    ViewRefContext *viewRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCreateViewStatementContext* showCreateViewStatement();

  class  ShowMasterStatusStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowMasterStatusStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SYMBOL();
    antlr4::tree::TerminalNode *STATUS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowMasterStatusStatementContext* showMasterStatusStatement();

  class  ShowReplicaStatusStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowReplicaStatusStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    ReplicaContext *replica();
    antlr4::tree::TerminalNode *STATUS_SYMBOL();
    ChannelContext *channel();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowReplicaStatusStatementContext* showReplicaStatusStatement();

  class  ShowCreateProcedureStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateProcedureStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *PROCEDURE_SYMBOL();
    ProcedureRefContext *procedureRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCreateProcedureStatementContext* showCreateProcedureStatement();

  class  ShowCreateFunctionStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateFunctionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *FUNCTION_SYMBOL();
    FunctionRefContext *functionRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCreateFunctionStatementContext* showCreateFunctionStatement();

  class  ShowCreateTriggerStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateTriggerStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *TRIGGER_SYMBOL();
    TriggerRefContext *triggerRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCreateTriggerStatementContext* showCreateTriggerStatement();

  class  ShowCreateProcedureStatusStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateProcedureStatusStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *PROCEDURE_SYMBOL();
    antlr4::tree::TerminalNode *STATUS_SYMBOL();
    LikeOrWhereContext *likeOrWhere();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCreateProcedureStatusStatementContext* showCreateProcedureStatusStatement();

  class  ShowCreateFunctionStatusStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateFunctionStatusStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *FUNCTION_SYMBOL();
    antlr4::tree::TerminalNode *STATUS_SYMBOL();
    LikeOrWhereContext *likeOrWhere();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCreateFunctionStatusStatementContext* showCreateFunctionStatusStatement();

  class  ShowCreateProcedureCodeStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateProcedureCodeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *PROCEDURE_SYMBOL();
    antlr4::tree::TerminalNode *CODE_SYMBOL();
    ProcedureRefContext *procedureRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCreateProcedureCodeStatementContext* showCreateProcedureCodeStatement();

  class  ShowCreateFunctionCodeStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateFunctionCodeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *FUNCTION_SYMBOL();
    antlr4::tree::TerminalNode *CODE_SYMBOL();
    FunctionRefContext *functionRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCreateFunctionCodeStatementContext* showCreateFunctionCodeStatement();

  class  ShowCreateEventStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateEventStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *EVENT_SYMBOL();
    EventRefContext *eventRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCreateEventStatementContext* showCreateEventStatement();

  class  ShowCreateUserStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateUserStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    UserContext *user();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCreateUserStatementContext* showCreateUserStatement();

  class  ShowCommandTypeContext : public antlr4::ParserRuleContext {
  public:
    ShowCommandTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FULL_SYMBOL();
    antlr4::tree::TerminalNode *EXTENDED_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCommandTypeContext* showCommandType();

  class  EngineOrAllContext : public antlr4::ParserRuleContext {
  public:
    EngineOrAllContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EngineRefContext *engineRef();
    antlr4::tree::TerminalNode *ALL_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EngineOrAllContext* engineOrAll();

  class  FromOrInContext : public antlr4::ParserRuleContext {
  public:
    FromOrInContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    antlr4::tree::TerminalNode *IN_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FromOrInContext* fromOrIn();

  class  InDbContext : public antlr4::ParserRuleContext {
  public:
    InDbContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FromOrInContext *fromOrIn();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InDbContext* inDb();

  class  ProfileDefinitionsContext : public antlr4::ParserRuleContext {
  public:
    ProfileDefinitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ProfileDefinitionContext *> profileDefinition();
    ProfileDefinitionContext* profileDefinition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProfileDefinitionsContext* profileDefinitions();

  class  ProfileDefinitionContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProfileDefinitionContext* profileDefinition();

  class  OtherAdministrativeStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OtherAdministrativeStatementContext* otherAdministrativeStatement();

  class  KeyCacheListOrPartsContext : public antlr4::ParserRuleContext {
  public:
    KeyCacheListOrPartsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeyCacheListContext *keyCacheList();
    AssignToKeycachePartitionContext *assignToKeycachePartition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyCacheListOrPartsContext* keyCacheListOrParts();

  class  KeyCacheListContext : public antlr4::ParserRuleContext {
  public:
    KeyCacheListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AssignToKeycacheContext *> assignToKeycache();
    AssignToKeycacheContext* assignToKeycache(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyCacheListContext* keyCacheList();

  class  AssignToKeycacheContext : public antlr4::ParserRuleContext {
  public:
    AssignToKeycacheContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefContext *tableRef();
    CacheKeyListContext *cacheKeyList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignToKeycacheContext* assignToKeycache();

  class  AssignToKeycachePartitionContext : public antlr4::ParserRuleContext {
  public:
    AssignToKeycachePartitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefContext *tableRef();
    antlr4::tree::TerminalNode *PARTITION_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    AllOrPartitionNameListContext *allOrPartitionNameList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    CacheKeyListContext *cacheKeyList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignToKeycachePartitionContext* assignToKeycachePartition();

  class  CacheKeyListContext : public antlr4::ParserRuleContext {
  public:
    CacheKeyListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeyOrIndexContext *keyOrIndex();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    KeyUsageListContext *keyUsageList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CacheKeyListContext* cacheKeyList();

  class  KeyUsageElementContext : public antlr4::ParserRuleContext {
  public:
    KeyUsageElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *PRIMARY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyUsageElementContext* keyUsageElement();

  class  KeyUsageListContext : public antlr4::ParserRuleContext {
  public:
    KeyUsageListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<KeyUsageElementContext *> keyUsageElement();
    KeyUsageElementContext* keyUsageElement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyUsageListContext* keyUsageList();

  class  FlushOptionContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FlushOptionContext* flushOption();

  class  LogTypeContext : public antlr4::ParserRuleContext {
  public:
    LogTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY_SYMBOL();
    antlr4::tree::TerminalNode *ENGINE_SYMBOL();
    antlr4::tree::TerminalNode *ERROR_SYMBOL();
    antlr4::tree::TerminalNode *GENERAL_SYMBOL();
    antlr4::tree::TerminalNode *SLOW_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogTypeContext* logType();

  class  FlushTablesContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FlushTablesContext* flushTables();

  class  FlushTablesOptionsContext : public antlr4::ParserRuleContext {
  public:
    FlushTablesOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *EXPORT_SYMBOL();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *READ_SYMBOL();
    antlr4::tree::TerminalNode *LOCK_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FlushTablesOptionsContext* flushTablesOptions();

  class  PreloadTailContext : public antlr4::ParserRuleContext {
  public:
    PreloadTailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefContext *tableRef();
    AdminPartitionContext *adminPartition();
    CacheKeyListContext *cacheKeyList();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();
    antlr4::tree::TerminalNode *LEAVES_SYMBOL();
    PreloadListContext *preloadList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PreloadTailContext* preloadTail();

  class  PreloadListContext : public antlr4::ParserRuleContext {
  public:
    PreloadListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PreloadKeysContext *> preloadKeys();
    PreloadKeysContext* preloadKeys(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PreloadListContext* preloadList();

  class  PreloadKeysContext : public antlr4::ParserRuleContext {
  public:
    PreloadKeysContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefContext *tableRef();
    CacheKeyListContext *cacheKeyList();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();
    antlr4::tree::TerminalNode *LEAVES_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PreloadKeysContext* preloadKeys();

  class  AdminPartitionContext : public antlr4::ParserRuleContext {
  public:
    AdminPartitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    AllOrPartitionNameListContext *allOrPartitionNameList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdminPartitionContext* adminPartition();

  class  ResourceGroupManagementContext : public antlr4::ParserRuleContext {
  public:
    ResourceGroupManagementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CreateResourceGroupContext *createResourceGroup();
    AlterResourceGroupContext *alterResourceGroup();
    SetResourceGroupContext *setResourceGroup();
    DropResourceGroupContext *dropResourceGroup();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceGroupManagementContext* resourceGroupManagement();

  class  CreateResourceGroupContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateResourceGroupContext* createResourceGroup();

  class  ResourceGroupVcpuListContext : public antlr4::ParserRuleContext {
  public:
    ResourceGroupVcpuListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VCPU_SYMBOL();
    std::vector<VcpuNumOrRangeContext *> vcpuNumOrRange();
    VcpuNumOrRangeContext* vcpuNumOrRange(size_t i);
    EqualContext *equal();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceGroupVcpuListContext* resourceGroupVcpuList();

  class  VcpuNumOrRangeContext : public antlr4::ParserRuleContext {
  public:
    VcpuNumOrRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> INT_NUMBER();
    antlr4::tree::TerminalNode* INT_NUMBER(size_t i);
    antlr4::tree::TerminalNode *MINUS_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VcpuNumOrRangeContext* vcpuNumOrRange();

  class  ResourceGroupPriorityContext : public antlr4::ParserRuleContext {
  public:
    ResourceGroupPriorityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THREAD_PRIORITY_SYMBOL();
    antlr4::tree::TerminalNode *INT_NUMBER();
    EqualContext *equal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceGroupPriorityContext* resourceGroupPriority();

  class  ResourceGroupEnableDisableContext : public antlr4::ParserRuleContext {
  public:
    ResourceGroupEnableDisableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENABLE_SYMBOL();
    antlr4::tree::TerminalNode *DISABLE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceGroupEnableDisableContext* resourceGroupEnableDisable();

  class  AlterResourceGroupContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterResourceGroupContext* alterResourceGroup();

  class  SetResourceGroupContext : public antlr4::ParserRuleContext {
  public:
    SetResourceGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_SYMBOL();
    antlr4::tree::TerminalNode *RESOURCE_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    ThreadIdListContext *threadIdList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetResourceGroupContext* setResourceGroup();

  class  ThreadIdListContext : public antlr4::ParserRuleContext {
  public:
    ThreadIdListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Real_ulong_numberContext *> real_ulong_number();
    Real_ulong_numberContext* real_ulong_number(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThreadIdListContext* threadIdList();

  class  DropResourceGroupContext : public antlr4::ParserRuleContext {
  public:
    DropResourceGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_SYMBOL();
    antlr4::tree::TerminalNode *RESOURCE_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_SYMBOL();
    ResourceGroupRefContext *resourceGroupRef();
    antlr4::tree::TerminalNode *FORCE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropResourceGroupContext* dropResourceGroup();

  class  UtilityStatementContext : public antlr4::ParserRuleContext {
  public:
    UtilityStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DescribeStatementContext *describeStatement();
    ExplainStatementContext *explainStatement();
    HelpCommandContext *helpCommand();
    UseCommandContext *useCommand();
    RestartServerContext *restartServer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UtilityStatementContext* utilityStatement();

  class  DescribeStatementContext : public antlr4::ParserRuleContext {
  public:
    DescribeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefContext *tableRef();
    antlr4::tree::TerminalNode *EXPLAIN_SYMBOL();
    antlr4::tree::TerminalNode *DESCRIBE_SYMBOL();
    antlr4::tree::TerminalNode *DESC_SYMBOL();
    TextStringContext *textString();
    ColumnRefContext *columnRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DescribeStatementContext* describeStatement();

  class  ExplainStatementContext : public antlr4::ParserRuleContext {
  public:
    ExplainStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExplainableStatementContext *explainableStatement();
    antlr4::tree::TerminalNode *EXPLAIN_SYMBOL();
    antlr4::tree::TerminalNode *DESCRIBE_SYMBOL();
    antlr4::tree::TerminalNode *DESC_SYMBOL();
    ExplainOptionsContext *explainOptions();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *DATABASE_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplainStatementContext* explainStatement();

  class  ExplainOptionsContext : public antlr4::ParserRuleContext {
  public:
    ExplainOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FORMAT_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TextOrIdentifierContext *textOrIdentifier();
    ExplainIntoContext *explainInto();
    antlr4::tree::TerminalNode *EXTENDED_SYMBOL();
    antlr4::tree::TerminalNode *ANALYZE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplainOptionsContext* explainOptions();

  class  ExplainableStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplainableStatementContext* explainableStatement();

  class  ExplainIntoContext : public antlr4::ParserRuleContext {
  public:
    ExplainIntoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTO_SYMBOL();
    antlr4::tree::TerminalNode *AT_SIGN_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplainIntoContext* explainInto();

  class  HelpCommandContext : public antlr4::ParserRuleContext {
  public:
    HelpCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HELP_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HelpCommandContext* helpCommand();

  class  UseCommandContext : public antlr4::ParserRuleContext {
  public:
    UseCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE_SYMBOL();
    SchemaRefContext *schemaRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UseCommandContext* useCommand();

  class  RestartServerContext : public antlr4::ParserRuleContext {
  public:
    RestartServerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESTART_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RestartServerContext* restartServer();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExprOrContext : public ExprContext {
  public:
    ExprOrContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *OR_SYMBOL();
    antlr4::tree::TerminalNode *LOGICAL_OR_OPERATOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprNotContext : public ExprContext {
  public:
    ExprNotContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NOT_SYMBOL();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprIsContext : public ExprContext {
  public:
    ExprIsContext(ExprContext *ctx);

    antlr4::Token *type = nullptr;
    BoolPriContext *boolPri();
    antlr4::tree::TerminalNode *IS_SYMBOL();
    antlr4::tree::TerminalNode *TRUE_SYMBOL();
    antlr4::tree::TerminalNode *FALSE_SYMBOL();
    antlr4::tree::TerminalNode *UNKNOWN_SYMBOL();
    NotRuleContext *notRule();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprAndContext : public ExprContext {
  public:
    ExprAndContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *AND_SYMBOL();
    antlr4::tree::TerminalNode *LOGICAL_AND_OPERATOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprXorContext : public ExprContext {
  public:
    ExprXorContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *XOR_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  BoolPriContext : public antlr4::ParserRuleContext {
  public:
    BoolPriContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    BoolPriContext() = default;
    void copyFrom(BoolPriContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PrimaryExprPredicateContext : public BoolPriContext {
  public:
    PrimaryExprPredicateContext(BoolPriContext *ctx);

    PredicateContext *predicate();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrimaryExprCompareContext : public BoolPriContext {
  public:
    PrimaryExprCompareContext(BoolPriContext *ctx);

    BoolPriContext *boolPri();
    CompOpContext *compOp();
    PredicateContext *predicate();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrimaryExprAllAnyContext : public BoolPriContext {
  public:
    PrimaryExprAllAnyContext(BoolPriContext *ctx);

    BoolPriContext *boolPri();
    CompOpContext *compOp();
    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    antlr4::tree::TerminalNode *ANY_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrimaryExprIsNullContext : public BoolPriContext {
  public:
    PrimaryExprIsNullContext(BoolPriContext *ctx);

    BoolPriContext *boolPri();
    antlr4::tree::TerminalNode *IS_SYMBOL();
    antlr4::tree::TerminalNode *NULL_SYMBOL();
    NotRuleContext *notRule();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  BoolPriContext* boolPri();
  BoolPriContext* boolPri(int precedence);
  class  CompOpContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompOpContext* compOp();

  class  PredicateContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PredicateContext* predicate();

  class  PredicateOperationsContext : public antlr4::ParserRuleContext {
  public:
    PredicateOperationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PredicateOperationsContext() = default;
    void copyFrom(PredicateOperationsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PredicateExprRegexContext : public PredicateOperationsContext {
  public:
    PredicateExprRegexContext(PredicateOperationsContext *ctx);

    antlr4::tree::TerminalNode *REGEXP_SYMBOL();
    BitExprContext *bitExpr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PredicateExprBetweenContext : public PredicateOperationsContext {
  public:
    PredicateExprBetweenContext(PredicateOperationsContext *ctx);

    antlr4::tree::TerminalNode *BETWEEN_SYMBOL();
    BitExprContext *bitExpr();
    antlr4::tree::TerminalNode *AND_SYMBOL();
    PredicateContext *predicate();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PredicateExprInContext : public PredicateOperationsContext {
  public:
    PredicateExprInContext(PredicateOperationsContext *ctx);

    antlr4::tree::TerminalNode *IN_SYMBOL();
    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprListContext *exprList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PredicateExprLikeContext : public PredicateOperationsContext {
  public:
    PredicateExprLikeContext(PredicateOperationsContext *ctx);

    antlr4::tree::TerminalNode *LIKE_SYMBOL();
    std::vector<SimpleExprContext *> simpleExpr();
    SimpleExprContext* simpleExpr(size_t i);
    antlr4::tree::TerminalNode *ESCAPE_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PredicateOperationsContext* predicateOperations();

  class  BitExprContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BitExprContext* bitExpr();
  BitExprContext* bitExpr(int precedence);
  class  SimpleExprContext : public antlr4::ParserRuleContext {
  public:
    SimpleExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SimpleExprContext() = default;
    void copyFrom(SimpleExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SimpleExprConvertContext : public SimpleExprContext {
  public:
    SimpleExprConvertContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *CONVERT_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *COMMA_SYMBOL();
    CastTypeContext *castType();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExprCastContext : public SimpleExprContext {
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
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExprUnaryContext : public SimpleExprContext {
  public:
    SimpleExprUnaryContext(SimpleExprContext *ctx);

    antlr4::Token *op = nullptr;
    SimpleExprContext *simpleExpr();
    antlr4::tree::TerminalNode *PLUS_OPERATOR();
    antlr4::tree::TerminalNode *MINUS_OPERATOR();
    antlr4::tree::TerminalNode *BITWISE_NOT_OPERATOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExpressionRValueContext : public SimpleExprContext {
  public:
    SimpleExpressionRValueContext(SimpleExprContext *ctx);

    RvalueSystemOrUserVariableContext *rvalueSystemOrUserVariable();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExprOdbcContext : public SimpleExprContext {
  public:
    SimpleExprOdbcContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *OPEN_CURLY_SYMBOL();
    IdentifierContext *identifier();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CLOSE_CURLY_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExprRuntimeFunctionContext : public SimpleExprContext {
  public:
    SimpleExprRuntimeFunctionContext(SimpleExprContext *ctx);

    RuntimeFunctionCallContext *runtimeFunctionCall();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExprFunctionContext : public SimpleExprContext {
  public:
    SimpleExprFunctionContext(SimpleExprContext *ctx);

    FunctionCallContext *functionCall();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExprCollateContext : public SimpleExprContext {
  public:
    SimpleExprCollateContext(SimpleExprContext *ctx);

    SimpleExprContext *simpleExpr();
    antlr4::tree::TerminalNode *COLLATE_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExprMatchContext : public SimpleExprContext {
  public:
    SimpleExprMatchContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *MATCH_SYMBOL();
    IdentListArgContext *identListArg();
    antlr4::tree::TerminalNode *AGAINST_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    BitExprContext *bitExpr();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    FulltextOptionsContext *fulltextOptions();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExprWindowingFunctionContext : public SimpleExprContext {
  public:
    SimpleExprWindowingFunctionContext(SimpleExprContext *ctx);

    WindowFunctionCallContext *windowFunctionCall();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExprBinaryContext : public SimpleExprContext {
  public:
    SimpleExprBinaryContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *BINARY_SYMBOL();
    SimpleExprContext *simpleExpr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExprColumnRefContext : public SimpleExprContext {
  public:
    SimpleExprColumnRefContext(SimpleExprContext *ctx);

    ColumnRefContext *columnRef();
    JsonOperatorContext *jsonOperator();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExprParamMarkerContext : public SimpleExprContext {
  public:
    SimpleExprParamMarkerContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *PARAM_MARKER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExprSumContext : public SimpleExprContext {
  public:
    SimpleExprSumContext(SimpleExprContext *ctx);

    SumExprContext *sumExpr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExprCastTimeContext : public SimpleExprContext {
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
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExprConvertUsingContext : public SimpleExprContext {
  public:
    SimpleExprConvertUsingContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *CONVERT_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *USING_SYMBOL();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExprSubQueryContext : public SimpleExprContext {
  public:
    SimpleExprSubQueryContext(SimpleExprContext *ctx);

    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *EXISTS_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExprGroupingOperationContext : public SimpleExprContext {
  public:
    SimpleExprGroupingOperationContext(SimpleExprContext *ctx);

    GroupingOperationContext *groupingOperation();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExprNotContext : public SimpleExprContext {
  public:
    SimpleExprNotContext(SimpleExprContext *ctx);

    Not2RuleContext *not2Rule();
    SimpleExprContext *simpleExpr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExprValuesContext : public SimpleExprContext {
  public:
    SimpleExprValuesContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *VALUES_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    SimpleIdentifierContext *simpleIdentifier();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExprUserVariableAssignmentContext : public SimpleExprContext {
  public:
    SimpleExprUserVariableAssignmentContext(SimpleExprContext *ctx);

    InExpressionUserVariableAssignmentContext *inExpressionUserVariableAssignment();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExprDefaultContext : public SimpleExprContext {
  public:
    SimpleExprDefaultContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    SimpleIdentifierContext *simpleIdentifier();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExprListContext : public SimpleExprContext {
  public:
    SimpleExprListContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprListContext *exprList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *ROW_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExprIntervalContext : public SimpleExprContext {
  public:
    SimpleExprIntervalContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *INTERVAL_SYMBOL();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    IntervalContext *interval();
    antlr4::tree::TerminalNode *PLUS_OPERATOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExprCaseContext : public SimpleExprContext {
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
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExprConcatContext : public SimpleExprContext {
  public:
    SimpleExprConcatContext(SimpleExprContext *ctx);

    std::vector<SimpleExprContext *> simpleExpr();
    SimpleExprContext* simpleExpr(size_t i);
    antlr4::tree::TerminalNode *CONCAT_PIPES_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleExprLiteralContext : public SimpleExprContext {
  public:
    SimpleExprLiteralContext(SimpleExprContext *ctx);

    LiteralOrNullContext *literalOrNull();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SimpleExprContext* simpleExpr();
  SimpleExprContext* simpleExpr(int precedence);
  class  ArrayCastContext : public antlr4::ParserRuleContext {
  public:
    ArrayCastContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARRAY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayCastContext* arrayCast();

  class  JsonOperatorContext : public antlr4::ParserRuleContext {
  public:
    JsonOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JSON_SEPARATOR_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *JSON_UNQUOTED_SEPARATOR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JsonOperatorContext* jsonOperator();

  class  SumExprContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SumExprContext* sumExpr();

  class  GroupingOperationContext : public antlr4::ParserRuleContext {
  public:
    GroupingOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUPING_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprListContext *exprList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupingOperationContext* groupingOperation();

  class  WindowFunctionCallContext : public antlr4::ParserRuleContext {
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
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    StableIntegerContext *stableInteger();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    SimpleExprWithParenthesesContext *simpleExprWithParentheses();
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowFunctionCallContext* windowFunctionCall();

  class  SamplingMethodContext : public antlr4::ParserRuleContext {
  public:
    SamplingMethodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SYSTEM_SYMBOL();
    antlr4::tree::TerminalNode *BENROULLI_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SamplingMethodContext* samplingMethod();

  class  SamplingPercentageContext : public antlr4::ParserRuleContext {
  public:
    SamplingPercentageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UlonglongNumberContext *ulonglongNumber();
    antlr4::tree::TerminalNode *AT_SIGN_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *PARAM_MARKER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SamplingPercentageContext* samplingPercentage();

  class  TablesampleClauseContext : public antlr4::ParserRuleContext {
  public:
    TablesampleClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLESAMPLE_SYMBOL();
    SamplingMethodContext *samplingMethod();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    SamplingPercentageContext *samplingPercentage();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablesampleClauseContext* tablesampleClause();

  class  WindowingClauseContext : public antlr4::ParserRuleContext {
  public:
    WindowingClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OVER_SYMBOL();
    WindowNameContext *windowName();
    WindowSpecContext *windowSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowingClauseContext* windowingClause();

  class  LeadLagInfoContext : public antlr4::ParserRuleContext {
  public:
    LeadLagInfoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);
    UlonglongNumberContext *ulonglongNumber();
    antlr4::tree::TerminalNode *PARAM_MARKER();
    StableIntegerContext *stableInteger();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LeadLagInfoContext* leadLagInfo();

  class  StableIntegerContext : public antlr4::ParserRuleContext {
  public:
    StableIntegerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Int64LiteralContext *int64Literal();
    ParamOrVarContext *paramOrVar();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StableIntegerContext* stableInteger();

  class  ParamOrVarContext : public antlr4::ParserRuleContext {
  public:
    ParamOrVarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARAM_MARKER();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *AT_SIGN_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamOrVarContext* paramOrVar();

  class  NullTreatmentContext : public antlr4::ParserRuleContext {
  public:
    NullTreatmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULLS_SYMBOL();
    antlr4::tree::TerminalNode *RESPECT_SYMBOL();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NullTreatmentContext* nullTreatment();

  class  JsonFunctionContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JsonFunctionContext* jsonFunction();

  class  InSumExprContext : public antlr4::ParserRuleContext {
  public:
    InSumExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *ALL_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InSumExprContext* inSumExpr();

  class  IdentListArgContext : public antlr4::ParserRuleContext {
  public:
    IdentListArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentListContext *identList();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentListArgContext* identListArg();

  class  IdentListContext : public antlr4::ParserRuleContext {
  public:
    IdentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SimpleIdentifierContext *> simpleIdentifier();
    SimpleIdentifierContext* simpleIdentifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentListContext* identList();

  class  FulltextOptionsContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FulltextOptionsContext* fulltextOptions();

  class  RuntimeFunctionCallContext : public antlr4::ParserRuleContext {
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
    antlr4::tree::TerminalNode *LOG_SYMBOL();
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RuntimeFunctionCallContext* runtimeFunctionCall();

  class  ReturningTypeContext : public antlr4::ParserRuleContext {
  public:
    ReturningTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURNING_SYMBOL();
    CastTypeContext *castType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturningTypeContext* returningType();

  class  GeometryFunctionContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GeometryFunctionContext* geometryFunction();

  class  TimeFunctionParametersContext : public antlr4::ParserRuleContext {
  public:
    TimeFunctionParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    FractionalPrecisionContext *fractionalPrecision();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TimeFunctionParametersContext* timeFunctionParameters();

  class  FractionalPrecisionContext : public antlr4::ParserRuleContext {
  public:
    FractionalPrecisionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FractionalPrecisionContext* fractionalPrecision();

  class  WeightStringLevelsContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WeightStringLevelsContext* weightStringLevels();

  class  WeightStringLevelListItemContext : public antlr4::ParserRuleContext {
  public:
    WeightStringLevelListItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Real_ulong_numberContext *real_ulong_number();
    antlr4::tree::TerminalNode *REVERSE_SYMBOL();
    antlr4::tree::TerminalNode *ASC_SYMBOL();
    antlr4::tree::TerminalNode *DESC_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WeightStringLevelListItemContext* weightStringLevelListItem();

  class  DateTimeTtypeContext : public antlr4::ParserRuleContext {
  public:
    DateTimeTtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATE_SYMBOL();
    antlr4::tree::TerminalNode *TIME_SYMBOL();
    antlr4::tree::TerminalNode *DATETIME_SYMBOL();
    antlr4::tree::TerminalNode *TIMESTAMP_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DateTimeTtypeContext* dateTimeTtype();

  class  TrimFunctionContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrimFunctionContext* trimFunction();

  class  SubstringFunctionContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubstringFunctionContext* substringFunction();

  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PureIdentifierContext *pureIdentifier();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    UdfExprListContext *udfExprList();
    QualifiedIdentifierContext *qualifiedIdentifier();
    ExprListContext *exprList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallContext* functionCall();

  class  UdfExprListContext : public antlr4::ParserRuleContext {
  public:
    UdfExprListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UdfExprContext *> udfExpr();
    UdfExprContext* udfExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UdfExprListContext* udfExprList();

  class  UdfExprContext : public antlr4::ParserRuleContext {
  public:
    UdfExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    SelectAliasContext *selectAlias();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UdfExprContext* udfExpr();

  class  UserVariableContext : public antlr4::ParserRuleContext {
  public:
    UserVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT_SIGN_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *AT_TEXT_SUFFIX();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserVariableContext* userVariable();

  class  InExpressionUserVariableAssignmentContext : public antlr4::ParserRuleContext {
  public:
    InExpressionUserVariableAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserVariableContext *userVariable();
    antlr4::tree::TerminalNode *ASSIGN_OPERATOR();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InExpressionUserVariableAssignmentContext* inExpressionUserVariableAssignment();

  class  RvalueSystemOrUserVariableContext : public antlr4::ParserRuleContext {
  public:
    RvalueSystemOrUserVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserVariableContext *userVariable();
    antlr4::tree::TerminalNode *AT_AT_SIGN_SYMBOL();
    RvalueSystemVariableContext *rvalueSystemVariable();
    RvalueSystemVariableTypeContext *rvalueSystemVariableType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RvalueSystemOrUserVariableContext* rvalueSystemOrUserVariable();

  class  LvalueVariableContext : public antlr4::ParserRuleContext {
  public:
    LvalueVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    LValueIdentifierContext *lValueIdentifier();
    DotIdentifierContext *dotIdentifier();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LvalueVariableContext* lvalueVariable();

  class  RvalueSystemVariableContext : public antlr4::ParserRuleContext {
  public:
    RvalueSystemVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();
    DotIdentifierContext *dotIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RvalueSystemVariableContext* rvalueSystemVariable();

  class  WhenExpressionContext : public antlr4::ParserRuleContext {
  public:
    WhenExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN_SYMBOL();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhenExpressionContext* whenExpression();

  class  ThenExpressionContext : public antlr4::ParserRuleContext {
  public:
    ThenExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THEN_SYMBOL();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThenExpressionContext* thenExpression();

  class  ElseExpressionContext : public antlr4::ParserRuleContext {
  public:
    ElseExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE_SYMBOL();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseExpressionContext* elseExpression();

  class  CastTypeContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CastTypeContext* castType();

  class  ExprListContext : public antlr4::ParserRuleContext {
  public:
    ExprListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprListContext* exprList();

  class  CharsetContext : public antlr4::ParserRuleContext {
  public:
    CharsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHAR_SYMBOL();
    antlr4::tree::TerminalNode *SET_SYMBOL();
    antlr4::tree::TerminalNode *CHARSET_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharsetContext* charset();

  class  NotRuleContext : public antlr4::ParserRuleContext {
  public:
    NotRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT_SYMBOL();
    antlr4::tree::TerminalNode *NOT2_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NotRuleContext* notRule();

  class  Not2RuleContext : public antlr4::ParserRuleContext {
  public:
    Not2RuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOGICAL_NOT_OPERATOR();
    antlr4::tree::TerminalNode *NOT2_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Not2RuleContext* not2Rule();

  class  IntervalContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalContext* interval();

  class  IntervalTimeStampContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalTimeStampContext* intervalTimeStamp();

  class  ExprListWithParenthesesContext : public antlr4::ParserRuleContext {
  public:
    ExprListWithParenthesesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprListContext *exprList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprListWithParenthesesContext* exprListWithParentheses();

  class  ExprWithParenthesesContext : public antlr4::ParserRuleContext {
  public:
    ExprWithParenthesesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprWithParenthesesContext* exprWithParentheses();

  class  SimpleExprWithParenthesesContext : public antlr4::ParserRuleContext {
  public:
    SimpleExprWithParenthesesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    SimpleExprContext *simpleExpr();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleExprWithParenthesesContext* simpleExprWithParentheses();

  class  OrderListContext : public antlr4::ParserRuleContext {
  public:
    OrderListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OrderExpressionContext *> orderExpression();
    OrderExpressionContext* orderExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrderListContext* orderList();

  class  OrderExpressionContext : public antlr4::ParserRuleContext {
  public:
    OrderExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    DirectionContext *direction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrderExpressionContext* orderExpression();

  class  GroupListContext : public antlr4::ParserRuleContext {
  public:
    GroupListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<GroupingExpressionContext *> groupingExpression();
    GroupingExpressionContext* groupingExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupListContext* groupList();

  class  GroupingExpressionContext : public antlr4::ParserRuleContext {
  public:
    GroupingExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupingExpressionContext* groupingExpression();

  class  ChannelContext : public antlr4::ParserRuleContext {
  public:
    ChannelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *CHANNEL_SYMBOL();
    TextStringNoLinebreakContext *textStringNoLinebreak();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChannelContext* channel();

  class  CompoundStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundStatementContext* compoundStatement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN_SYMBOL();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IF_SYMBOL();
    antlr4::tree::TerminalNode* IF_SYMBOL(size_t i);
    IfBodyContext *ifBody();
    antlr4::tree::TerminalNode *END_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  IfBodyContext : public antlr4::ParserRuleContext {
  public:
    IfBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    ThenStatementContext *thenStatement();
    antlr4::tree::TerminalNode *ELSEIF_SYMBOL();
    IfBodyContext *ifBody();
    antlr4::tree::TerminalNode *ELSE_SYMBOL();
    CompoundStatementListContext *compoundStatementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfBodyContext* ifBody();

  class  ThenStatementContext : public antlr4::ParserRuleContext {
  public:
    ThenStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THEN_SYMBOL();
    CompoundStatementListContext *compoundStatementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThenStatementContext* thenStatement();

  class  CompoundStatementListContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CompoundStatementContext *> compoundStatement();
    CompoundStatementContext* compoundStatement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON_SYMBOL();
    antlr4::tree::TerminalNode* SEMICOLON_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundStatementListContext* compoundStatementList();

  class  CaseStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseStatementContext* caseStatement();

  class  ElseStatementContext : public antlr4::ParserRuleContext {
  public:
    ElseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE_SYMBOL();
    CompoundStatementListContext *compoundStatementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseStatementContext* elseStatement();

  class  LabeledBlockContext : public antlr4::ParserRuleContext {
  public:
    LabeledBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabelContext *label();
    BeginEndBlockContext *beginEndBlock();
    LabelRefContext *labelRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabeledBlockContext* labeledBlock();

  class  UnlabeledBlockContext : public antlr4::ParserRuleContext {
  public:
    UnlabeledBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BeginEndBlockContext *beginEndBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnlabeledBlockContext* unlabeledBlock();

  class  LabelContext : public antlr4::ParserRuleContext {
  public:
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabelIdentifierContext *labelIdentifier();
    antlr4::tree::TerminalNode *COLON_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelContext* label();

  class  BeginEndBlockContext : public antlr4::ParserRuleContext {
  public:
    BeginEndBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN_SYMBOL();
    antlr4::tree::TerminalNode *END_SYMBOL();
    SpDeclarationsContext *spDeclarations();
    CompoundStatementListContext *compoundStatementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BeginEndBlockContext* beginEndBlock();

  class  LabeledControlContext : public antlr4::ParserRuleContext {
  public:
    LabeledControlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabelContext *label();
    UnlabeledControlContext *unlabeledControl();
    LabelRefContext *labelRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabeledControlContext* labeledControl();

  class  UnlabeledControlContext : public antlr4::ParserRuleContext {
  public:
    UnlabeledControlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoopBlockContext *loopBlock();
    WhileDoBlockContext *whileDoBlock();
    RepeatUntilBlockContext *repeatUntilBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnlabeledControlContext* unlabeledControl();

  class  LoopBlockContext : public antlr4::ParserRuleContext {
  public:
    LoopBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LOOP_SYMBOL();
    antlr4::tree::TerminalNode* LOOP_SYMBOL(size_t i);
    CompoundStatementListContext *compoundStatementList();
    antlr4::tree::TerminalNode *END_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoopBlockContext* loopBlock();

  class  WhileDoBlockContext : public antlr4::ParserRuleContext {
  public:
    WhileDoBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WHILE_SYMBOL();
    antlr4::tree::TerminalNode* WHILE_SYMBOL(size_t i);
    ExprContext *expr();
    antlr4::tree::TerminalNode *DO_SYMBOL();
    CompoundStatementListContext *compoundStatementList();
    antlr4::tree::TerminalNode *END_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileDoBlockContext* whileDoBlock();

  class  RepeatUntilBlockContext : public antlr4::ParserRuleContext {
  public:
    RepeatUntilBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> REPEAT_SYMBOL();
    antlr4::tree::TerminalNode* REPEAT_SYMBOL(size_t i);
    CompoundStatementListContext *compoundStatementList();
    antlr4::tree::TerminalNode *UNTIL_SYMBOL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *END_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RepeatUntilBlockContext* repeatUntilBlock();

  class  SpDeclarationsContext : public antlr4::ParserRuleContext {
  public:
    SpDeclarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SpDeclarationContext *> spDeclaration();
    SpDeclarationContext* spDeclaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON_SYMBOL();
    antlr4::tree::TerminalNode* SEMICOLON_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SpDeclarationsContext* spDeclarations();

  class  SpDeclarationContext : public antlr4::ParserRuleContext {
  public:
    SpDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclarationContext *variableDeclaration();
    ConditionDeclarationContext *conditionDeclaration();
    HandlerDeclarationContext *handlerDeclaration();
    CursorDeclarationContext *cursorDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SpDeclarationContext* spDeclaration();

  class  VariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE_SYMBOL();
    IdentifierListContext *identifierList();
    DataTypeContext *dataType();
    CollateContext *collate();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclarationContext* variableDeclaration();

  class  ConditionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ConditionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *CONDITION_SYMBOL();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    SpConditionContext *spCondition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionDeclarationContext* conditionDeclaration();

  class  SpConditionContext : public antlr4::ParserRuleContext {
  public:
    SpConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ulong_numberContext *ulong_number();
    SqlstateContext *sqlstate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SpConditionContext* spCondition();

  class  SqlstateContext : public antlr4::ParserRuleContext {
  public:
    SqlstateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SQLSTATE_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *VALUE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SqlstateContext* sqlstate();

  class  HandlerDeclarationContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerDeclarationContext* handlerDeclaration();

  class  HandlerConditionContext : public antlr4::ParserRuleContext {
  public:
    HandlerConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SpConditionContext *spCondition();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SQLWARNING_SYMBOL();
    NotRuleContext *notRule();
    antlr4::tree::TerminalNode *FOUND_SYMBOL();
    antlr4::tree::TerminalNode *SQLEXCEPTION_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerConditionContext* handlerCondition();

  class  CursorDeclarationContext : public antlr4::ParserRuleContext {
  public:
    CursorDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *CURSOR_SYMBOL();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    SelectStatementContext *selectStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CursorDeclarationContext* cursorDeclaration();

  class  IterateStatementContext : public antlr4::ParserRuleContext {
  public:
    IterateStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ITERATE_SYMBOL();
    LabelRefContext *labelRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IterateStatementContext* iterateStatement();

  class  LeaveStatementContext : public antlr4::ParserRuleContext {
  public:
    LeaveStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEAVE_SYMBOL();
    LabelRefContext *labelRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LeaveStatementContext* leaveStatement();

  class  GetDiagnosticsStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GetDiagnosticsStatementContext* getDiagnosticsStatement();

  class  SignalAllowedExprContext : public antlr4::ParserRuleContext {
  public:
    SignalAllowedExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    RvalueSystemOrUserVariableContext *rvalueSystemOrUserVariable();
    QualifiedIdentifierContext *qualifiedIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignalAllowedExprContext* signalAllowedExpr();

  class  StatementInformationItemContext : public antlr4::ParserRuleContext {
  public:
    StatementInformationItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *NUMBER_SYMBOL();
    antlr4::tree::TerminalNode *ROW_COUNT_SYMBOL();
    UserVariableContext *userVariable();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementInformationItemContext* statementInformationItem();

  class  ConditionInformationItemContext : public antlr4::ParserRuleContext {
  public:
    ConditionInformationItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    UserVariableContext *userVariable();
    IdentifierContext *identifier();
    SignalInformationItemNameContext *signalInformationItemName();
    antlr4::tree::TerminalNode *RETURNED_SQLSTATE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionInformationItemContext* conditionInformationItem();

  class  SignalInformationItemNameContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignalInformationItemNameContext* signalInformationItemName();

  class  SignalStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignalStatementContext* signalStatement();

  class  ResignalStatementContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResignalStatementContext* resignalStatement();

  class  SignalInformationItemContext : public antlr4::ParserRuleContext {
  public:
    SignalInformationItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SignalInformationItemNameContext *signalInformationItemName();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    SignalAllowedExprContext *signalAllowedExpr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignalInformationItemContext* signalInformationItem();

  class  CursorOpenContext : public antlr4::ParserRuleContext {
  public:
    CursorOpenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_SYMBOL();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CursorOpenContext* cursorOpen();

  class  CursorCloseContext : public antlr4::ParserRuleContext {
  public:
    CursorCloseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOSE_SYMBOL();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CursorCloseContext* cursorClose();

  class  CursorFetchContext : public antlr4::ParserRuleContext {
  public:
    CursorFetchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FETCH_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *INTO_SYMBOL();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    antlr4::tree::TerminalNode *NEXT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CursorFetchContext* cursorFetch();

  class  ScheduleContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScheduleContext* schedule();

  class  ColumnDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ColumnDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnNameContext *columnName();
    FieldDefinitionContext *fieldDefinition();
    CheckOrReferencesContext *checkOrReferences();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnDefinitionContext* columnDefinition();

  class  CheckOrReferencesContext : public antlr4::ParserRuleContext {
  public:
    CheckOrReferencesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CheckConstraintContext *checkConstraint();
    ReferencesContext *references();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CheckOrReferencesContext* checkOrReferences();

  class  CheckConstraintContext : public antlr4::ParserRuleContext {
  public:
    CheckConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECK_SYMBOL();
    ExprWithParenthesesContext *exprWithParentheses();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CheckConstraintContext* checkConstraint();

  class  ConstraintEnforcementContext : public antlr4::ParserRuleContext {
  public:
    ConstraintEnforcementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENFORCED_SYMBOL();
    antlr4::tree::TerminalNode *NOT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstraintEnforcementContext* constraintEnforcement();

  class  TableConstraintDefContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    TableConstraintDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeyListWithExpressionContext *keyListWithExpression();
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableConstraintDefContext* tableConstraintDef();

  class  ConstraintNameContext : public antlr4::ParserRuleContext {
  public:
    ConstraintNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSTRAINT_SYMBOL();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstraintNameContext* constraintName();

  class  FieldDefinitionContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldDefinitionContext* fieldDefinition();

  class  ColumnAttributeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *value = nullptr;
    ColumnAttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NullLiteralContext *nullLiteral();
    antlr4::tree::TerminalNode *NOT_SYMBOL();
    antlr4::tree::TerminalNode *SECONDARY_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    NowOrSignedLiteralContext *nowOrSignedLiteral();
    ExprWithParenthesesContext *exprWithParentheses();
    antlr4::tree::TerminalNode *UPDATE_SYMBOL();
    antlr4::tree::TerminalNode *NOW_SYMBOL();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    TimeFunctionParametersContext *timeFunctionParameters();
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnAttributeContext* columnAttribute();

  class  ColumnFormatContext : public antlr4::ParserRuleContext {
  public:
    ColumnFormatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FIXED_SYMBOL();
    antlr4::tree::TerminalNode *DYNAMIC_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnFormatContext* columnFormat();

  class  StorageMediaContext : public antlr4::ParserRuleContext {
  public:
    StorageMediaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISK_SYMBOL();
    antlr4::tree::TerminalNode *MEMORY_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StorageMediaContext* storageMedia();

  class  NowContext : public antlr4::ParserRuleContext {
  public:
    NowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOW_SYMBOL();
    FunctionDatetimePrecisionContext *functionDatetimePrecision();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NowContext* now();

  class  NowOrSignedLiteralContext : public antlr4::ParserRuleContext {
  public:
    NowOrSignedLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NowContext *now();
    SignedLiteralOrNullContext *signedLiteralOrNull();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NowOrSignedLiteralContext* nowOrSignedLiteral();

  class  GcolAttributeContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GcolAttributeContext* gcolAttribute();

  class  ReferencesContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReferencesContext* references();

  class  DeleteOptionContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeleteOptionContext* deleteOption();

  class  KeyListContext : public antlr4::ParserRuleContext {
  public:
    KeyListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<KeyPartContext *> keyPart();
    KeyPartContext* keyPart(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyListContext* keyList();

  class  KeyPartContext : public antlr4::ParserRuleContext {
  public:
    KeyPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    FieldLengthContext *fieldLength();
    DirectionContext *direction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyPartContext* keyPart();

  class  KeyListWithExpressionContext : public antlr4::ParserRuleContext {
  public:
    KeyListWithExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<KeyPartOrExpressionContext *> keyPartOrExpression();
    KeyPartOrExpressionContext* keyPartOrExpression(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyListWithExpressionContext* keyListWithExpression();

  class  KeyPartOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    KeyPartOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeyPartContext *keyPart();
    ExprWithParenthesesContext *exprWithParentheses();
    DirectionContext *direction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyPartOrExpressionContext* keyPartOrExpression();

  class  IndexTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *algorithm = nullptr;
    IndexTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BTREE_SYMBOL();
    antlr4::tree::TerminalNode *RTREE_SYMBOL();
    antlr4::tree::TerminalNode *HASH_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexTypeContext* indexType();

  class  IndexOptionContext : public antlr4::ParserRuleContext {
  public:
    IndexOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommonIndexOptionContext *commonIndexOption();
    IndexTypeClauseContext *indexTypeClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexOptionContext* indexOption();

  class  CommonIndexOptionContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommonIndexOptionContext* commonIndexOption();

  class  VisibilityContext : public antlr4::ParserRuleContext {
  public:
    VisibilityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VISIBLE_SYMBOL();
    antlr4::tree::TerminalNode *INVISIBLE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VisibilityContext* visibility();

  class  IndexTypeClauseContext : public antlr4::ParserRuleContext {
  public:
    IndexTypeClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndexTypeContext *indexType();
    antlr4::tree::TerminalNode *USING_SYMBOL();
    antlr4::tree::TerminalNode *TYPE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexTypeClauseContext* indexTypeClause();

  class  FulltextIndexOptionContext : public antlr4::ParserRuleContext {
  public:
    FulltextIndexOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommonIndexOptionContext *commonIndexOption();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *PARSER_SYMBOL();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FulltextIndexOptionContext* fulltextIndexOption();

  class  SpatialIndexOptionContext : public antlr4::ParserRuleContext {
  public:
    SpatialIndexOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommonIndexOptionContext *commonIndexOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SpatialIndexOptionContext* spatialIndexOption();

  class  DataTypeDefinitionContext : public antlr4::ParserRuleContext {
  public:
    DataTypeDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataTypeDefinitionContext* dataTypeDefinition();

  class  DataTypeContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataTypeContext* dataType();

  class  NcharContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    NcharContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NCHAR_SYMBOL();
    antlr4::tree::TerminalNode *CHAR_SYMBOL();
    antlr4::tree::TerminalNode *NATIONAL_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NcharContext* nchar();

  class  RealTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    RealTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REAL_SYMBOL();
    antlr4::tree::TerminalNode *DOUBLE_SYMBOL();
    antlr4::tree::TerminalNode *PRECISION_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RealTypeContext* realType();

  class  FieldLengthContext : public antlr4::ParserRuleContext {
  public:
    FieldLengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    Real_ulonglong_numberContext *real_ulonglong_number();
    antlr4::tree::TerminalNode *DECIMAL_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldLengthContext* fieldLength();

  class  FieldOptionsContext : public antlr4::ParserRuleContext {
  public:
    FieldOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SIGNED_SYMBOL();
    antlr4::tree::TerminalNode* SIGNED_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNSIGNED_SYMBOL();
    antlr4::tree::TerminalNode* UNSIGNED_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ZEROFILL_SYMBOL();
    antlr4::tree::TerminalNode* ZEROFILL_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldOptionsContext* fieldOptions();

  class  CharsetWithOptBinaryContext : public antlr4::ParserRuleContext {
  public:
    CharsetWithOptBinaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AsciiContext *ascii();
    UnicodeContext *unicode();
    antlr4::tree::TerminalNode *BYTE_SYMBOL();
    CharsetContext *charset();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharsetWithOptBinaryContext* charsetWithOptBinary();

  class  AsciiContext : public antlr4::ParserRuleContext {
  public:
    AsciiContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASCII_SYMBOL();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AsciiContext* ascii();

  class  UnicodeContext : public antlr4::ParserRuleContext {
  public:
    UnicodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNICODE_SYMBOL();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnicodeContext* unicode();

  class  WsNumCodepointsContext : public antlr4::ParserRuleContext {
  public:
    WsNumCodepointsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    Real_ulong_numberContext *real_ulong_number();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WsNumCodepointsContext* wsNumCodepoints();

  class  TypeDatetimePrecisionContext : public antlr4::ParserRuleContext {
  public:
    TypeDatetimePrecisionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *INT_NUMBER();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDatetimePrecisionContext* typeDatetimePrecision();

  class  FunctionDatetimePrecisionContext : public antlr4::ParserRuleContext {
  public:
    FunctionDatetimePrecisionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParenthesesContext *parentheses();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *INT_NUMBER();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDatetimePrecisionContext* functionDatetimePrecision();

  class  CharsetNameContext : public antlr4::ParserRuleContext {
  public:
    CharsetNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharsetNameContext* charsetName();

  class  CollationNameContext : public antlr4::ParserRuleContext {
  public:
    CollationNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CollationNameContext* collationName();

  class  CreateTableOptionsContext : public antlr4::ParserRuleContext {
  public:
    CreateTableOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CreateTableOptionContext *> createTableOption();
    CreateTableOptionContext* createTableOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTableOptionsContext* createTableOptions();

  class  CreateTableOptionsEtcContext : public antlr4::ParserRuleContext {
  public:
    CreateTableOptionsEtcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CreateTableOptionsContext *createTableOptions();
    CreatePartitioningEtcContext *createPartitioningEtc();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTableOptionsEtcContext* createTableOptionsEtc();

  class  CreatePartitioningEtcContext : public antlr4::ParserRuleContext {
  public:
    CreatePartitioningEtcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PartitionClauseContext *partitionClause();
    DuplicateAsQeContext *duplicateAsQe();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreatePartitioningEtcContext* createPartitioningEtc();

  class  CreateTableOptionsSpaceSeparatedContext : public antlr4::ParserRuleContext {
  public:
    CreateTableOptionsSpaceSeparatedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CreateTableOptionContext *> createTableOption();
    CreateTableOptionContext* createTableOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTableOptionsSpaceSeparatedContext* createTableOptionsSpaceSeparated();

  class  CreateTableOptionContext : public antlr4::ParserRuleContext {
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
    UlonglongNumberContext *ulonglongNumber();
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTableOptionContext* createTableOption();

  class  TernaryOptionContext : public antlr4::ParserRuleContext {
  public:
    TernaryOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ulong_numberContext *ulong_number();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TernaryOptionContext* ternaryOption();

  class  DefaultCollationContext : public antlr4::ParserRuleContext {
  public:
    DefaultCollationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLLATE_SYMBOL();
    CollationNameContext *collationName();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultCollationContext* defaultCollation();

  class  DefaultEncryptionContext : public antlr4::ParserRuleContext {
  public:
    DefaultEncryptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENCRYPTION_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultEncryptionContext* defaultEncryption();

  class  DefaultCharsetContext : public antlr4::ParserRuleContext {
  public:
    DefaultCharsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CharsetContext *charset();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultCharsetContext* defaultCharset();

  class  PartitionClauseContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionClauseContext* partitionClause();

  class  PartitionTypeDefContext : public antlr4::ParserRuleContext {
  public:
    PartitionTypeDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PartitionTypeDefContext() = default;
    void copyFrom(PartitionTypeDefContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PartitionDefRangeListContext : public PartitionTypeDefContext {
  public:
    PartitionDefRangeListContext(PartitionTypeDefContext *ctx);

    antlr4::tree::TerminalNode *RANGE_SYMBOL();
    antlr4::tree::TerminalNode *LIST_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    BitExprContext *bitExpr();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *COLUMNS_SYMBOL();
    IdentifierListContext *identifierList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PartitionDefKeyContext : public PartitionTypeDefContext {
  public:
    PartitionDefKeyContext(PartitionTypeDefContext *ctx);

    antlr4::tree::TerminalNode *KEY_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *LINEAR_SYMBOL();
    PartitionKeyAlgorithmContext *partitionKeyAlgorithm();
    IdentifierListContext *identifierList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PartitionDefHashContext : public PartitionTypeDefContext {
  public:
    PartitionDefHashContext(PartitionTypeDefContext *ctx);

    antlr4::tree::TerminalNode *HASH_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    BitExprContext *bitExpr();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *LINEAR_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PartitionTypeDefContext* partitionTypeDef();

  class  SubPartitionsContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubPartitionsContext* subPartitions();

  class  PartitionKeyAlgorithmContext : public antlr4::ParserRuleContext {
  public:
    PartitionKeyAlgorithmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALGORITHM_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    Real_ulong_numberContext *real_ulong_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionKeyAlgorithmContext* partitionKeyAlgorithm();

  class  PartitionDefinitionsContext : public antlr4::ParserRuleContext {
  public:
    PartitionDefinitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<PartitionDefinitionContext *> partitionDefinition();
    PartitionDefinitionContext* partitionDefinition(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionDefinitionsContext* partitionDefinitions();

  class  PartitionDefinitionContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionDefinitionContext* partitionDefinition();

  class  PartitionValuesInContext : public antlr4::ParserRuleContext {
  public:
    PartitionValuesInContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PartitionValueItemListParenContext *> partitionValueItemListParen();
    PartitionValueItemListParenContext* partitionValueItemListParen(size_t i);
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionValuesInContext* partitionValuesIn();

  class  PartitionOptionContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionOptionContext* partitionOption();

  class  SubpartitionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    SubpartitionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBPARTITION_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    std::vector<PartitionOptionContext *> partitionOption();
    PartitionOptionContext* partitionOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubpartitionDefinitionContext* subpartitionDefinition();

  class  PartitionValueItemListParenContext : public antlr4::ParserRuleContext {
  public:
    PartitionValueItemListParenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<PartitionValueItemContext *> partitionValueItem();
    PartitionValueItemContext* partitionValueItem(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionValueItemListParenContext* partitionValueItemListParen();

  class  PartitionValueItemContext : public antlr4::ParserRuleContext {
  public:
    PartitionValueItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BitExprContext *bitExpr();
    antlr4::tree::TerminalNode *MAXVALUE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionValueItemContext* partitionValueItem();

  class  DefinerClauseContext : public antlr4::ParserRuleContext {
  public:
    DefinerClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFINER_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    UserContext *user();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinerClauseContext* definerClause();

  class  IfExistsContext : public antlr4::ParserRuleContext {
  public:
    IfExistsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF_SYMBOL();
    antlr4::tree::TerminalNode *EXISTS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfExistsContext* ifExists();

  class  IfExistsIdentifierContext : public antlr4::ParserRuleContext {
  public:
    IfExistsIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfExistsContext *ifExists();
    PersistedVariableIdentifierContext *persistedVariableIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfExistsIdentifierContext* ifExistsIdentifier();

  class  PersistedVariableIdentifierContext : public antlr4::ParserRuleContext {
  public:
    PersistedVariableIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    QualifiedIdentifierContext *qualifiedIdentifier();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    DotIdentifierContext *dotIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PersistedVariableIdentifierContext* persistedVariableIdentifier();

  class  IfNotExistsContext : public antlr4::ParserRuleContext {
  public:
    IfNotExistsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF_SYMBOL();
    NotRuleContext *notRule();
    antlr4::tree::TerminalNode *EXISTS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfNotExistsContext* ifNotExists();

  class  IgnoreUnknownUserContext : public antlr4::ParserRuleContext {
  public:
    IgnoreUnknownUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();
    antlr4::tree::TerminalNode *UNKNOWN_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IgnoreUnknownUserContext* ignoreUnknownUser();

  class  ProcedureParameterContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    ProcedureParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionParameterContext *functionParameter();
    antlr4::tree::TerminalNode *IN_SYMBOL();
    antlr4::tree::TerminalNode *OUT_SYMBOL();
    antlr4::tree::TerminalNode *INOUT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcedureParameterContext* procedureParameter();

  class  FunctionParameterContext : public antlr4::ParserRuleContext {
  public:
    FunctionParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterNameContext *parameterName();
    TypeWithOptCollateContext *typeWithOptCollate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionParameterContext* functionParameter();

  class  CollateContext : public antlr4::ParserRuleContext {
  public:
    CollateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLLATE_SYMBOL();
    CollationNameContext *collationName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CollateContext* collate();

  class  TypeWithOptCollateContext : public antlr4::ParserRuleContext {
  public:
    TypeWithOptCollateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    CollateContext *collate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeWithOptCollateContext* typeWithOptCollate();

  class  SchemaIdentifierPairContext : public antlr4::ParserRuleContext {
  public:
    SchemaIdentifierPairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<SchemaRefContext *> schemaRef();
    SchemaRefContext* schemaRef(size_t i);
    antlr4::tree::TerminalNode *COMMA_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SchemaIdentifierPairContext* schemaIdentifierPair();

  class  ViewRefListContext : public antlr4::ParserRuleContext {
  public:
    ViewRefListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ViewRefContext *> viewRef();
    ViewRefContext* viewRef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewRefListContext* viewRefList();

  class  UpdateListContext : public antlr4::ParserRuleContext {
  public:
    UpdateListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UpdateElementContext *> updateElement();
    UpdateElementContext* updateElement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UpdateListContext* updateList();

  class  UpdateElementContext : public antlr4::ParserRuleContext {
  public:
    UpdateElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnRefContext *columnRef();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    ExprContext *expr();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UpdateElementContext* updateElement();

  class  CharsetClauseContext : public antlr4::ParserRuleContext {
  public:
    CharsetClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CharsetContext *charset();
    CharsetNameContext *charsetName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharsetClauseContext* charsetClause();

  class  FieldsClauseContext : public antlr4::ParserRuleContext {
  public:
    FieldsClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLUMNS_SYMBOL();
    std::vector<FieldTermContext *> fieldTerm();
    FieldTermContext* fieldTerm(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldsClauseContext* fieldsClause();

  class  FieldTermContext : public antlr4::ParserRuleContext {
  public:
    FieldTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TERMINATED_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    TextStringContext *textString();
    antlr4::tree::TerminalNode *ENCLOSED_SYMBOL();
    antlr4::tree::TerminalNode *OPTIONALLY_SYMBOL();
    antlr4::tree::TerminalNode *ESCAPED_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldTermContext* fieldTerm();

  class  LinesClauseContext : public antlr4::ParserRuleContext {
  public:
    LinesClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LINES_SYMBOL();
    std::vector<LineTermContext *> lineTerm();
    LineTermContext* lineTerm(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LinesClauseContext* linesClause();

  class  LineTermContext : public antlr4::ParserRuleContext {
  public:
    LineTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BY_SYMBOL();
    TextStringContext *textString();
    antlr4::tree::TerminalNode *TERMINATED_SYMBOL();
    antlr4::tree::TerminalNode *STARTING_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LineTermContext* lineTerm();

  class  UserListContext : public antlr4::ParserRuleContext {
  public:
    UserListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UserContext *> user();
    UserContext* user(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserListContext* userList();

  class  CreateUserListContext : public antlr4::ParserRuleContext {
  public:
    CreateUserListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CreateUserContext *> createUser();
    CreateUserContext* createUser(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateUserListContext* createUserList();

  class  CreateUserContext : public antlr4::ParserRuleContext {
  public:
    CreateUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserContext *user();
    IdentificationContext *identification();
    IdentifiedWithPluginContext *identifiedWithPlugin();
    CreateUserWithMfaContext *createUserWithMfa();
    InitialAuthContext *initialAuth();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateUserContext* createUser();

  class  CreateUserWithMfaContext : public antlr4::ParserRuleContext {
  public:
    CreateUserWithMfaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> AND_SYMBOL();
    antlr4::tree::TerminalNode* AND_SYMBOL(size_t i);
    std::vector<IdentificationContext *> identification();
    IdentificationContext* identification(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateUserWithMfaContext* createUserWithMfa();

  class  IdentificationContext : public antlr4::ParserRuleContext {
  public:
    IdentificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifiedByPasswordContext *identifiedByPassword();
    IdentifiedByRandomPasswordContext *identifiedByRandomPassword();
    IdentifiedWithPluginContext *identifiedWithPlugin();
    IdentifiedWithPluginAsAuthContext *identifiedWithPluginAsAuth();
    IdentifiedWithPluginByPasswordContext *identifiedWithPluginByPassword();
    IdentifiedWithPluginByRandomPasswordContext *identifiedWithPluginByRandomPassword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentificationContext* identification();

  class  IdentifiedByPasswordContext : public antlr4::ParserRuleContext {
  public:
    IdentifiedByPasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    TextStringLiteralContext *textStringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifiedByPasswordContext* identifiedByPassword();

  class  IdentifiedByRandomPasswordContext : public antlr4::ParserRuleContext {
  public:
    IdentifiedByRandomPasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    antlr4::tree::TerminalNode *RANDOM_SYMBOL();
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifiedByRandomPasswordContext* identifiedByRandomPassword();

  class  IdentifiedWithPluginContext : public antlr4::ParserRuleContext {
  public:
    IdentifiedWithPluginContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifiedWithPluginContext* identifiedWithPlugin();

  class  IdentifiedWithPluginAsAuthContext : public antlr4::ParserRuleContext {
  public:
    IdentifiedWithPluginAsAuthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *AS_SYMBOL();
    TextStringHashContext *textStringHash();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifiedWithPluginAsAuthContext* identifiedWithPluginAsAuth();

  class  IdentifiedWithPluginByPasswordContext : public antlr4::ParserRuleContext {
  public:
    IdentifiedWithPluginByPasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    TextStringLiteralContext *textStringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifiedWithPluginByPasswordContext* identifiedWithPluginByPassword();

  class  IdentifiedWithPluginByRandomPasswordContext : public antlr4::ParserRuleContext {
  public:
    IdentifiedWithPluginByRandomPasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    antlr4::tree::TerminalNode *RANDOM_SYMBOL();
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifiedWithPluginByRandomPasswordContext* identifiedWithPluginByRandomPassword();

  class  InitialAuthContext : public antlr4::ParserRuleContext {
  public:
    InitialAuthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INITIAL_SYMBOL();
    antlr4::tree::TerminalNode *AUTHENTICATION_SYMBOL();
    IdentifiedByRandomPasswordContext *identifiedByRandomPassword();
    IdentifiedWithPluginAsAuthContext *identifiedWithPluginAsAuth();
    IdentifiedByPasswordContext *identifiedByPassword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitialAuthContext* initialAuth();

  class  RetainCurrentPasswordContext : public antlr4::ParserRuleContext {
  public:
    RetainCurrentPasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETAIN_SYMBOL();
    antlr4::tree::TerminalNode *CURRENT_SYMBOL();
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RetainCurrentPasswordContext* retainCurrentPassword();

  class  DiscardOldPasswordContext : public antlr4::ParserRuleContext {
  public:
    DiscardOldPasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISCARD_SYMBOL();
    antlr4::tree::TerminalNode *OLD_SYMBOL();
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DiscardOldPasswordContext* discardOldPassword();

  class  UserRegistrationContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserRegistrationContext* userRegistration();

  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumLiteralContext *numLiteral();
    antlr4::tree::TerminalNode *FACTOR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FactorContext* factor();

  class  ReplacePasswordContext : public antlr4::ParserRuleContext {
  public:
    ReplacePasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPLACE_SYMBOL();
    TextStringContext *textString();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReplacePasswordContext* replacePassword();

  class  UserIdentifierOrTextContext : public antlr4::ParserRuleContext {
  public:
    UserIdentifierOrTextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();
    UserVariableContext *userVariable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserIdentifierOrTextContext* userIdentifierOrText();

  class  UserContext : public antlr4::ParserRuleContext {
  public:
    UserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserIdentifierOrTextContext *userIdentifierOrText();
    antlr4::tree::TerminalNode *CURRENT_USER_SYMBOL();
    ParenthesesContext *parentheses();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserContext* user();

  class  LikeClauseContext : public antlr4::ParserRuleContext {
  public:
    LikeClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIKE_SYMBOL();
    TextStringLiteralContext *textStringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LikeClauseContext* likeClause();

  class  LikeOrWhereContext : public antlr4::ParserRuleContext {
  public:
    LikeOrWhereContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LikeClauseContext *likeClause();
    WhereClauseContext *whereClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LikeOrWhereContext* likeOrWhere();

  class  OnlineOptionContext : public antlr4::ParserRuleContext {
  public:
    OnlineOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ONLINE_SYMBOL();
    antlr4::tree::TerminalNode *OFFLINE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OnlineOptionContext* onlineOption();

  class  NoWriteToBinLogContext : public antlr4::ParserRuleContext {
  public:
    NoWriteToBinLogContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    antlr4::tree::TerminalNode *NO_WRITE_TO_BINLOG_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoWriteToBinLogContext* noWriteToBinLog();

  class  UsePartitionContext : public antlr4::ParserRuleContext {
  public:
    UsePartitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION_SYMBOL();
    IdentifierListWithParenthesesContext *identifierListWithParentheses();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UsePartitionContext* usePartition();

  class  FieldIdentifierContext : public antlr4::ParserRuleContext {
  public:
    FieldIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DotIdentifierContext *dotIdentifier();
    QualifiedIdentifierContext *qualifiedIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldIdentifierContext* fieldIdentifier();

  class  ColumnNameContext : public antlr4::ParserRuleContext {
  public:
    ColumnNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnNameContext* columnName();

  class  ColumnInternalRefContext : public antlr4::ParserRuleContext {
  public:
    ColumnInternalRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnInternalRefContext* columnInternalRef();

  class  ColumnInternalRefListContext : public antlr4::ParserRuleContext {
  public:
    ColumnInternalRefListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<ColumnInternalRefContext *> columnInternalRef();
    ColumnInternalRefContext* columnInternalRef(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnInternalRefListContext* columnInternalRefList();

  class  ColumnRefContext : public antlr4::ParserRuleContext {
  public:
    ColumnRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FieldIdentifierContext *fieldIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnRefContext* columnRef();

  class  InsertIdentifierContext : public antlr4::ParserRuleContext {
  public:
    InsertIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnRefContext *columnRef();
    TableWildContext *tableWild();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertIdentifierContext* insertIdentifier();

  class  IndexNameContext : public antlr4::ParserRuleContext {
  public:
    IndexNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexNameContext* indexName();

  class  IndexRefContext : public antlr4::ParserRuleContext {
  public:
    IndexRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FieldIdentifierContext *fieldIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexRefContext* indexRef();

  class  TableWildContext : public antlr4::ParserRuleContext {
  public:
    TableWildContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT_SYMBOL();
    antlr4::tree::TerminalNode* DOT_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *MULT_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableWildContext* tableWild();

  class  SchemaNameContext : public antlr4::ParserRuleContext {
  public:
    SchemaNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SchemaNameContext* schemaName();

  class  SchemaRefContext : public antlr4::ParserRuleContext {
  public:
    SchemaRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SchemaRefContext* schemaRef();

  class  ProcedureNameContext : public antlr4::ParserRuleContext {
  public:
    ProcedureNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcedureNameContext* procedureName();

  class  ProcedureRefContext : public antlr4::ParserRuleContext {
  public:
    ProcedureRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcedureRefContext* procedureRef();

  class  FunctionNameContext : public antlr4::ParserRuleContext {
  public:
    FunctionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionNameContext* functionName();

  class  FunctionRefContext : public antlr4::ParserRuleContext {
  public:
    FunctionRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionRefContext* functionRef();

  class  TriggerNameContext : public antlr4::ParserRuleContext {
  public:
    TriggerNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TriggerNameContext* triggerName();

  class  TriggerRefContext : public antlr4::ParserRuleContext {
  public:
    TriggerRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TriggerRefContext* triggerRef();

  class  ViewNameContext : public antlr4::ParserRuleContext {
  public:
    ViewNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();
    DotIdentifierContext *dotIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewNameContext* viewName();

  class  ViewRefContext : public antlr4::ParserRuleContext {
  public:
    ViewRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();
    DotIdentifierContext *dotIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewRefContext* viewRef();

  class  TablespaceNameContext : public antlr4::ParserRuleContext {
  public:
    TablespaceNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablespaceNameContext* tablespaceName();

  class  TablespaceRefContext : public antlr4::ParserRuleContext {
  public:
    TablespaceRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablespaceRefContext* tablespaceRef();

  class  LogfileGroupNameContext : public antlr4::ParserRuleContext {
  public:
    LogfileGroupNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogfileGroupNameContext* logfileGroupName();

  class  LogfileGroupRefContext : public antlr4::ParserRuleContext {
  public:
    LogfileGroupRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogfileGroupRefContext* logfileGroupRef();

  class  EventNameContext : public antlr4::ParserRuleContext {
  public:
    EventNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EventNameContext* eventName();

  class  EventRefContext : public antlr4::ParserRuleContext {
  public:
    EventRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EventRefContext* eventRef();

  class  UdfNameContext : public antlr4::ParserRuleContext {
  public:
    UdfNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UdfNameContext* udfName();

  class  ServerNameContext : public antlr4::ParserRuleContext {
  public:
    ServerNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ServerNameContext* serverName();

  class  ServerRefContext : public antlr4::ParserRuleContext {
  public:
    ServerRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ServerRefContext* serverRef();

  class  EngineRefContext : public antlr4::ParserRuleContext {
  public:
    EngineRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EngineRefContext* engineRef();

  class  TableNameContext : public antlr4::ParserRuleContext {
  public:
    TableNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();
    DotIdentifierContext *dotIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableNameContext* tableName();

  class  FilterTableRefContext : public antlr4::ParserRuleContext {
  public:
    FilterTableRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SchemaRefContext *schemaRef();
    DotIdentifierContext *dotIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FilterTableRefContext* filterTableRef();

  class  TableRefWithWildcardContext : public antlr4::ParserRuleContext {
  public:
    TableRefWithWildcardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DOT_SYMBOL();
    antlr4::tree::TerminalNode *MULT_OPERATOR();
    DotIdentifierContext *dotIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableRefWithWildcardContext* tableRefWithWildcard();

  class  TableRefContext : public antlr4::ParserRuleContext {
  public:
    TableRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();
    DotIdentifierContext *dotIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableRefContext* tableRef();

  class  TableRefListContext : public antlr4::ParserRuleContext {
  public:
    TableRefListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableRefContext *> tableRef();
    TableRefContext* tableRef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableRefListContext* tableRefList();

  class  TableAliasRefListContext : public antlr4::ParserRuleContext {
  public:
    TableAliasRefListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableRefWithWildcardContext *> tableRefWithWildcard();
    TableRefWithWildcardContext* tableRefWithWildcard(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableAliasRefListContext* tableAliasRefList();

  class  ParameterNameContext : public antlr4::ParserRuleContext {
  public:
    ParameterNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterNameContext* parameterName();

  class  LabelIdentifierContext : public antlr4::ParserRuleContext {
  public:
    LabelIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PureIdentifierContext *pureIdentifier();
    LabelKeywordContext *labelKeyword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelIdentifierContext* labelIdentifier();

  class  LabelRefContext : public antlr4::ParserRuleContext {
  public:
    LabelRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabelIdentifierContext *labelIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelRefContext* labelRef();

  class  RoleIdentifierContext : public antlr4::ParserRuleContext {
  public:
    RoleIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PureIdentifierContext *pureIdentifier();
    RoleKeywordContext *roleKeyword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoleIdentifierContext* roleIdentifier();

  class  PluginRefContext : public antlr4::ParserRuleContext {
  public:
    PluginRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PluginRefContext* pluginRef();

  class  ComponentRefContext : public antlr4::ParserRuleContext {
  public:
    ComponentRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextStringLiteralContext *textStringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComponentRefContext* componentRef();

  class  ResourceGroupRefContext : public antlr4::ParserRuleContext {
  public:
    ResourceGroupRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceGroupRefContext* resourceGroupRef();

  class  WindowNameContext : public antlr4::ParserRuleContext {
  public:
    WindowNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowNameContext* windowName();

  class  PureIdentifierContext : public antlr4::ParserRuleContext {
  public:
    PureIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *BACK_TICK_QUOTED_ID();
    antlr4::tree::TerminalNode *DOUBLE_QUOTED_TEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PureIdentifierContext* pureIdentifier();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PureIdentifierContext *pureIdentifier();
    IdentifierKeywordContext *identifierKeyword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  IdentifierListContext : public antlr4::ParserRuleContext {
  public:
    IdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierListContext* identifierList();

  class  IdentifierListWithParenthesesContext : public antlr4::ParserRuleContext {
  public:
    IdentifierListWithParenthesesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierListWithParenthesesContext* identifierListWithParentheses();

  class  QualifiedIdentifierContext : public antlr4::ParserRuleContext {
  public:
    QualifiedIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    DotIdentifierContext *dotIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedIdentifierContext* qualifiedIdentifier();

  class  SimpleIdentifierContext : public antlr4::ParserRuleContext {
  public:
    SimpleIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<DotIdentifierContext *> dotIdentifier();
    DotIdentifierContext* dotIdentifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleIdentifierContext* simpleIdentifier();

  class  DotIdentifierContext : public antlr4::ParserRuleContext {
  public:
    DotIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT_SYMBOL();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DotIdentifierContext* dotIdentifier();

  class  Ulong_numberContext : public antlr4::ParserRuleContext {
  public:
    Ulong_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_NUMBER();
    antlr4::tree::TerminalNode *HEX_NUMBER();
    antlr4::tree::TerminalNode *LONG_NUMBER();
    antlr4::tree::TerminalNode *ULONGLONG_NUMBER();
    antlr4::tree::TerminalNode *DECIMAL_NUMBER();
    antlr4::tree::TerminalNode *FLOAT_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ulong_numberContext* ulong_number();

  class  Real_ulong_numberContext : public antlr4::ParserRuleContext {
  public:
    Real_ulong_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_NUMBER();
    antlr4::tree::TerminalNode *HEX_NUMBER();
    antlr4::tree::TerminalNode *LONG_NUMBER();
    antlr4::tree::TerminalNode *ULONGLONG_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Real_ulong_numberContext* real_ulong_number();

  class  UlonglongNumberContext : public antlr4::ParserRuleContext {
  public:
    UlonglongNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_NUMBER();
    antlr4::tree::TerminalNode *LONG_NUMBER();
    antlr4::tree::TerminalNode *ULONGLONG_NUMBER();
    antlr4::tree::TerminalNode *DECIMAL_NUMBER();
    antlr4::tree::TerminalNode *FLOAT_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UlonglongNumberContext* ulonglongNumber();

  class  Real_ulonglong_numberContext : public antlr4::ParserRuleContext {
  public:
    Real_ulonglong_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_NUMBER();
    antlr4::tree::TerminalNode *HEX_NUMBER();
    antlr4::tree::TerminalNode *ULONGLONG_NUMBER();
    antlr4::tree::TerminalNode *LONG_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Real_ulonglong_numberContext* real_ulonglong_number();

  class  SignedLiteralContext : public antlr4::ParserRuleContext {
  public:
    SignedLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    antlr4::tree::TerminalNode *PLUS_OPERATOR();
    Ulong_numberContext *ulong_number();
    antlr4::tree::TerminalNode *MINUS_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignedLiteralContext* signedLiteral();

  class  SignedLiteralOrNullContext : public antlr4::ParserRuleContext {
  public:
    SignedLiteralOrNullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SignedLiteralContext *signedLiteral();
    NullAsLiteralContext *nullAsLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignedLiteralOrNullContext* signedLiteralOrNull();

  class  LiteralContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  LiteralOrNullContext : public antlr4::ParserRuleContext {
  public:
    LiteralOrNullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    NullAsLiteralContext *nullAsLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralOrNullContext* literalOrNull();

  class  NullAsLiteralContext : public antlr4::ParserRuleContext {
  public:
    NullAsLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NullAsLiteralContext* nullAsLiteral();

  class  StringListContext : public antlr4::ParserRuleContext {
  public:
    StringListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<TextStringContext *> textString();
    TextStringContext* textString(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringListContext* stringList();

  class  TextStringLiteralContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *value = nullptr;
    TextStringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SINGLE_QUOTED_TEXT();
    antlr4::tree::TerminalNode *DOUBLE_QUOTED_TEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TextStringLiteralContext* textStringLiteral();

  class  TextStringContext : public antlr4::ParserRuleContext {
  public:
    TextStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *HEX_NUMBER();
    antlr4::tree::TerminalNode *BIN_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TextStringContext* textString();

  class  TextStringHashContext : public antlr4::ParserRuleContext {
  public:
    TextStringHashContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *HEX_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TextStringHashContext* textStringHash();

  class  TextLiteralContext : public antlr4::ParserRuleContext {
  public:
    TextLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TextStringLiteralContext *> textStringLiteral();
    TextStringLiteralContext* textStringLiteral(size_t i);
    antlr4::tree::TerminalNode *NCHAR_TEXT();
    antlr4::tree::TerminalNode *UNDERSCORE_CHARSET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TextLiteralContext* textLiteral();

  class  TextStringNoLinebreakContext : public antlr4::ParserRuleContext {
  public:
    TextStringNoLinebreakContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextStringLiteralContext *textStringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TextStringNoLinebreakContext* textStringNoLinebreak();

  class  TextStringLiteralListContext : public antlr4::ParserRuleContext {
  public:
    TextStringLiteralListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TextStringLiteralContext *> textStringLiteral();
    TextStringLiteralContext* textStringLiteral(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TextStringLiteralListContext* textStringLiteralList();

  class  NumLiteralContext : public antlr4::ParserRuleContext {
  public:
    NumLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Int64LiteralContext *int64Literal();
    antlr4::tree::TerminalNode *DECIMAL_NUMBER();
    antlr4::tree::TerminalNode *FLOAT_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumLiteralContext* numLiteral();

  class  BoolLiteralContext : public antlr4::ParserRuleContext {
  public:
    BoolLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE_SYMBOL();
    antlr4::tree::TerminalNode *FALSE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BoolLiteralContext* boolLiteral();

  class  NullLiteralContext : public antlr4::ParserRuleContext {
  public:
    NullLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_SYMBOL();
    antlr4::tree::TerminalNode *NULL2_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NullLiteralContext* nullLiteral();

  class  Int64LiteralContext : public antlr4::ParserRuleContext {
  public:
    Int64LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_NUMBER();
    antlr4::tree::TerminalNode *LONG_NUMBER();
    antlr4::tree::TerminalNode *ULONGLONG_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Int64LiteralContext* int64Literal();

  class  TemporalLiteralContext : public antlr4::ParserRuleContext {
  public:
    TemporalLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATE_SYMBOL();
    antlr4::tree::TerminalNode *SINGLE_QUOTED_TEXT();
    antlr4::tree::TerminalNode *TIME_SYMBOL();
    antlr4::tree::TerminalNode *TIMESTAMP_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemporalLiteralContext* temporalLiteral();

  class  FloatOptionsContext : public antlr4::ParserRuleContext {
  public:
    FloatOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FieldLengthContext *fieldLength();
    PrecisionContext *precision();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FloatOptionsContext* floatOptions();

  class  StandardFloatOptionsContext : public antlr4::ParserRuleContext {
  public:
    StandardFloatOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrecisionContext *precision();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StandardFloatOptionsContext* standardFloatOptions();

  class  PrecisionContext : public antlr4::ParserRuleContext {
  public:
    PrecisionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> INT_NUMBER();
    antlr4::tree::TerminalNode* INT_NUMBER(size_t i);
    antlr4::tree::TerminalNode *COMMA_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecisionContext* precision();

  class  TextOrIdentifierContext : public antlr4::ParserRuleContext {
  public:
    TextOrIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    TextStringLiteralContext *textStringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TextOrIdentifierContext* textOrIdentifier();

  class  LValueIdentifierContext : public antlr4::ParserRuleContext {
  public:
    LValueIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PureIdentifierContext *pureIdentifier();
    LValueKeywordContext *lValueKeyword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LValueIdentifierContext* lValueIdentifier();

  class  RoleIdentifierOrTextContext : public antlr4::ParserRuleContext {
  public:
    RoleIdentifierOrTextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RoleIdentifierContext *roleIdentifier();
    TextStringLiteralContext *textStringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoleIdentifierOrTextContext* roleIdentifierOrText();

  class  SizeNumberContext : public antlr4::ParserRuleContext {
  public:
    SizeNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Real_ulonglong_numberContext *real_ulonglong_number();
    PureIdentifierContext *pureIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SizeNumberContext* sizeNumber();

  class  ParenthesesContext : public antlr4::ParserRuleContext {
  public:
    ParenthesesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParenthesesContext* parentheses();

  class  EqualContext : public antlr4::ParserRuleContext {
  public:
    EqualContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *ASSIGN_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EqualContext* equal();

  class  OptionTypeContext : public antlr4::ParserRuleContext {
  public:
    OptionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PERSIST_SYMBOL();
    antlr4::tree::TerminalNode *PERSIST_ONLY_SYMBOL();
    antlr4::tree::TerminalNode *GLOBAL_SYMBOL();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    antlr4::tree::TerminalNode *SESSION_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionTypeContext* optionType();

  class  RvalueSystemVariableTypeContext : public antlr4::ParserRuleContext {
  public:
    RvalueSystemVariableTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GLOBAL_SYMBOL();
    antlr4::tree::TerminalNode *DOT_SYMBOL();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    antlr4::tree::TerminalNode *SESSION_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RvalueSystemVariableTypeContext* rvalueSystemVariableType();

  class  SetVarIdentTypeContext : public antlr4::ParserRuleContext {
  public:
    SetVarIdentTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT_SYMBOL();
    antlr4::tree::TerminalNode *PERSIST_SYMBOL();
    antlr4::tree::TerminalNode *PERSIST_ONLY_SYMBOL();
    antlr4::tree::TerminalNode *GLOBAL_SYMBOL();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    antlr4::tree::TerminalNode *SESSION_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetVarIdentTypeContext* setVarIdentType();

  class  JsonAttributeContext : public antlr4::ParserRuleContext {
  public:
    JsonAttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextStringLiteralContext *textStringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JsonAttributeContext* jsonAttribute();

  class  IdentifierKeywordContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierKeywordContext* identifierKeyword();

  class  IdentifierKeywordsAmbiguous1RolesAndLabelsContext : public antlr4::ParserRuleContext {
  public:
    IdentifierKeywordsAmbiguous1RolesAndLabelsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXECUTE_SYMBOL();
    antlr4::tree::TerminalNode *RESTART_SYMBOL();
    antlr4::tree::TerminalNode *SHUTDOWN_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierKeywordsAmbiguous1RolesAndLabelsContext* identifierKeywordsAmbiguous1RolesAndLabels();

  class  IdentifierKeywordsAmbiguous2LabelsContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierKeywordsAmbiguous2LabelsContext* identifierKeywordsAmbiguous2Labels();

  class  LabelKeywordContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelKeywordContext* labelKeyword();

  class  IdentifierKeywordsAmbiguous3RolesContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierKeywordsAmbiguous3RolesContext* identifierKeywordsAmbiguous3Roles();

  class  IdentifierKeywordsUnambiguousContext : public antlr4::ParserRuleContext {
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
    antlr4::tree::TerminalNode *BULK_SYMBOL();
    antlr4::tree::TerminalNode *GENERATE_SYMBOL();
    antlr4::tree::TerminalNode *GTIDS_SYMBOL();
    antlr4::tree::TerminalNode *LOG_SYMBOL();
    antlr4::tree::TerminalNode *PARSE_TREE_SYMBOL();
    antlr4::tree::TerminalNode *S3_SYMBOL();
    antlr4::tree::TerminalNode *BENROULLI_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierKeywordsUnambiguousContext* identifierKeywordsUnambiguous();

  class  RoleKeywordContext : public antlr4::ParserRuleContext {
  public:
    RoleKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RoleOrLabelKeywordContext *roleOrLabelKeyword();
    RoleOrIdentifierKeywordContext *roleOrIdentifierKeyword();
    IdentifierKeywordsUnambiguousContext *identifierKeywordsUnambiguous();
    IdentifierKeywordsAmbiguous2LabelsContext *identifierKeywordsAmbiguous2Labels();
    IdentifierKeywordsAmbiguous4SystemVariablesContext *identifierKeywordsAmbiguous4SystemVariables();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoleKeywordContext* roleKeyword();

  class  LValueKeywordContext : public antlr4::ParserRuleContext {
  public:
    LValueKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierKeywordsUnambiguousContext *identifierKeywordsUnambiguous();
    IdentifierKeywordsAmbiguous1RolesAndLabelsContext *identifierKeywordsAmbiguous1RolesAndLabels();
    IdentifierKeywordsAmbiguous2LabelsContext *identifierKeywordsAmbiguous2Labels();
    IdentifierKeywordsAmbiguous3RolesContext *identifierKeywordsAmbiguous3Roles();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LValueKeywordContext* lValueKeyword();

  class  IdentifierKeywordsAmbiguous4SystemVariablesContext : public antlr4::ParserRuleContext {
  public:
    IdentifierKeywordsAmbiguous4SystemVariablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GLOBAL_SYMBOL();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    antlr4::tree::TerminalNode *PERSIST_SYMBOL();
    antlr4::tree::TerminalNode *PERSIST_ONLY_SYMBOL();
    antlr4::tree::TerminalNode *SESSION_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierKeywordsAmbiguous4SystemVariablesContext* identifierKeywordsAmbiguous4SystemVariables();

  class  RoleOrIdentifierKeywordContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoleOrIdentifierKeywordContext* roleOrIdentifierKeyword();

  class  RoleOrLabelKeywordContext : public antlr4::ParserRuleContext {
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
  bool routineOptionSempred(RoutineOptionContext *_localctx, size_t predicateIndex);
  bool tsDataFileNameSempred(TsDataFileNameContext *_localctx, size_t predicateIndex);
  bool tablespaceOptionSempred(TablespaceOptionContext *_localctx, size_t predicateIndex);
  bool dropStatementSempred(DropStatementContext *_localctx, size_t predicateIndex);
  bool deleteStatementSempred(DeleteStatementContext *_localctx, size_t predicateIndex);
  bool valuesReferenceSempred(ValuesReferenceContext *_localctx, size_t predicateIndex);
  bool loadFromSempred(LoadFromContext *_localctx, size_t predicateIndex);
  bool loadSourceTypeSempred(LoadSourceTypeContext *_localctx, size_t predicateIndex);
  bool sourceCountSempred(SourceCountContext *_localctx, size_t predicateIndex);
  bool sourceOrderSempred(SourceOrderContext *_localctx, size_t predicateIndex);
  bool loadAlgorithmSempred(LoadAlgorithmContext *_localctx, size_t predicateIndex);
  bool loadParallelSempred(LoadParallelContext *_localctx, size_t predicateIndex);
  bool loadMemorySempred(LoadMemoryContext *_localctx, size_t predicateIndex);
  bool selectStatementWithIntoSempred(SelectStatementWithIntoContext *_localctx, size_t predicateIndex);
  bool queryExpressionBodySempred(QueryExpressionBodyContext *_localctx, size_t predicateIndex);
  bool queryPrimarySempred(QueryPrimaryContext *_localctx, size_t predicateIndex);
  bool qualifyClauseSempred(QualifyClauseContext *_localctx, size_t predicateIndex);
  bool groupByClauseSempred(GroupByClauseContext *_localctx, size_t predicateIndex);
  bool lockingClauseListSempred(LockingClauseListContext *_localctx, size_t predicateIndex);
  bool tableReferenceSempred(TableReferenceContext *_localctx, size_t predicateIndex);
  bool tableFactorSempred(TableFactorContext *_localctx, size_t predicateIndex);
  bool derivedTableSempred(DerivedTableContext *_localctx, size_t predicateIndex);
  bool jtColumnSempred(JtColumnContext *_localctx, size_t predicateIndex);
  bool tableAliasSempred(TableAliasContext *_localctx, size_t predicateIndex);
  bool masterOrBinaryLogsAndGtidsSempred(MasterOrBinaryLogsAndGtidsContext *_localctx, size_t predicateIndex);
  bool changeReplicationSourceSempred(ChangeReplicationSourceContext *_localctx, size_t predicateIndex);
  bool sourceDefinitionSempred(SourceDefinitionContext *_localctx, size_t predicateIndex);
  bool cloneStatementSempred(CloneStatementContext *_localctx, size_t predicateIndex);
  bool alterUserStatementSempred(AlterUserStatementContext *_localctx, size_t predicateIndex);
  bool alterUserSempred(AlterUserContext *_localctx, size_t predicateIndex);
  bool createUserTailSempred(CreateUserTailContext *_localctx, size_t predicateIndex);
  bool accountLockPasswordExpireOptionsSempred(AccountLockPasswordExpireOptionsContext *_localctx, size_t predicateIndex);
  bool grantTargetListSempred(GrantTargetListContext *_localctx, size_t predicateIndex);
  bool versionedRequireClauseSempred(VersionedRequireClauseContext *_localctx, size_t predicateIndex);
  bool revokeStatementSempred(RevokeStatementContext *_localctx, size_t predicateIndex);
  bool grantIdentifierSempred(GrantIdentifierContext *_localctx, size_t predicateIndex);
  bool grantOptionSempred(GrantOptionContext *_localctx, size_t predicateIndex);
  bool histogramAutoUpdateSempred(HistogramAutoUpdateContext *_localctx, size_t predicateIndex);
  bool histogramUpdateParamSempred(HistogramUpdateParamContext *_localctx, size_t predicateIndex);
  bool histogramNumBucketsSempred(HistogramNumBucketsContext *_localctx, size_t predicateIndex);
  bool installSetValueListSempred(InstallSetValueListContext *_localctx, size_t predicateIndex);
  bool startOptionValueListSempred(StartOptionValueListContext *_localctx, size_t predicateIndex);
  bool optionValueNoOptionTypeSempred(OptionValueNoOptionTypeContext *_localctx, size_t predicateIndex);
  bool showParseTreeStatementSempred(ShowParseTreeStatementContext *_localctx, size_t predicateIndex);
  bool utilityStatementSempred(UtilityStatementContext *_localctx, size_t predicateIndex);
  bool explainStatementSempred(ExplainStatementContext *_localctx, size_t predicateIndex);
  bool explainOptionsSempred(ExplainOptionsContext *_localctx, size_t predicateIndex);
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);
  bool boolPriSempred(BoolPriContext *_localctx, size_t predicateIndex);
  bool predicateSempred(PredicateContext *_localctx, size_t predicateIndex);
  bool bitExprSempred(BitExprContext *_localctx, size_t predicateIndex);
  bool simpleExprSempred(SimpleExprContext *_localctx, size_t predicateIndex);
  bool arrayCastSempred(ArrayCastContext *_localctx, size_t predicateIndex);
  bool windowFunctionCallSempred(WindowFunctionCallContext *_localctx, size_t predicateIndex);
  bool tablesampleClauseSempred(TablesampleClauseContext *_localctx, size_t predicateIndex);
  bool leadLagInfoSempred(LeadLagInfoContext *_localctx, size_t predicateIndex);
  bool runtimeFunctionCallSempred(RuntimeFunctionCallContext *_localctx, size_t predicateIndex);
  bool lvalueVariableSempred(LvalueVariableContext *_localctx, size_t predicateIndex);
  bool castTypeSempred(CastTypeContext *_localctx, size_t predicateIndex);
  bool checkOrReferencesSempred(CheckOrReferencesContext *_localctx, size_t predicateIndex);
  bool constraintEnforcementSempred(ConstraintEnforcementContext *_localctx, size_t predicateIndex);
  bool columnAttributeSempred(ColumnAttributeContext *_localctx, size_t predicateIndex);
  bool keyPartOrExpressionSempred(KeyPartOrExpressionContext *_localctx, size_t predicateIndex);
  bool commonIndexOptionSempred(CommonIndexOptionContext *_localctx, size_t predicateIndex);
  bool charsetNameSempred(CharsetNameContext *_localctx, size_t predicateIndex);
  bool collationNameSempred(CollationNameContext *_localctx, size_t predicateIndex);
  bool createTableOptionSempred(CreateTableOptionContext *_localctx, size_t predicateIndex);
  bool persistedVariableIdentifierSempred(PersistedVariableIdentifierContext *_localctx, size_t predicateIndex);
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

}  // namespace parsers
