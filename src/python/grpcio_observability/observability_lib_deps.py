# Copyright 2023 gRPC authors.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# AUTO-GENERATED BY make_grpcio_observability.py!
CC_FILES = [
    "grpc_root/src/core/lib/config/config_vars.cc",
    "grpc_root/src/core/lib/config/config_vars_non_generated.cc",
    "grpc_root/src/core/lib/config/load_config.cc",
    "grpc_root/src/core/lib/debug/trace.cc",
    "grpc_root/src/core/lib/event_engine/thread_local.cc",
    "grpc_root/src/core/lib/gpr/alloc.cc",
    "grpc_root/src/core/lib/gpr/android/log.cc",
    "grpc_root/src/core/lib/gpr/atm.cc",
    "grpc_root/src/core/lib/gpr/iphone/cpu.cc",
    "grpc_root/src/core/lib/gpr/linux/cpu.cc",
    "grpc_root/src/core/lib/gpr/linux/log.cc",
    "grpc_root/src/core/lib/gpr/log.cc",
    "grpc_root/src/core/lib/gpr/msys/tmpfile.cc",
    "grpc_root/src/core/lib/gpr/posix/cpu.cc",
    "grpc_root/src/core/lib/gpr/posix/log.cc",
    "grpc_root/src/core/lib/gpr/posix/string.cc",
    "grpc_root/src/core/lib/gpr/posix/sync.cc",
    "grpc_root/src/core/lib/gpr/posix/time.cc",
    "grpc_root/src/core/lib/gpr/posix/tmpfile.cc",
    "grpc_root/src/core/lib/gpr/string.cc",
    "grpc_root/src/core/lib/gpr/sync.cc",
    "grpc_root/src/core/lib/gpr/sync_abseil.cc",
    "grpc_root/src/core/lib/gpr/time.cc",
    "grpc_root/src/core/lib/gpr/time_precise.cc",
    "grpc_root/src/core/lib/gpr/windows/cpu.cc",
    "grpc_root/src/core/lib/gpr/windows/log.cc",
    "grpc_root/src/core/lib/gpr/windows/string.cc",
    "grpc_root/src/core/lib/gpr/windows/string_util.cc",
    "grpc_root/src/core/lib/gpr/windows/sync.cc",
    "grpc_root/src/core/lib/gpr/windows/time.cc",
    "grpc_root/src/core/lib/gpr/windows/tmpfile.cc",
    "grpc_root/src/core/lib/gpr/wrap_memcpy.cc",
    "grpc_root/src/core/lib/gprpp/crash.cc",
    "grpc_root/src/core/lib/gprpp/examine_stack.cc",
    "grpc_root/src/core/lib/gprpp/fork.cc",
    "grpc_root/src/core/lib/gprpp/host_port.cc",
    "grpc_root/src/core/lib/gprpp/linux/env.cc",
    "grpc_root/src/core/lib/gprpp/mpscq.cc",
    "grpc_root/src/core/lib/gprpp/posix/env.cc",
    "grpc_root/src/core/lib/gprpp/posix/stat.cc",
    "grpc_root/src/core/lib/gprpp/posix/thd.cc",
    "grpc_root/src/core/lib/gprpp/strerror.cc",
    "grpc_root/src/core/lib/gprpp/tchar.cc",
    "grpc_root/src/core/lib/gprpp/time_util.cc",
    "grpc_root/src/core/lib/gprpp/windows/env.cc",
    "grpc_root/src/core/lib/gprpp/windows/stat.cc",
    "grpc_root/src/core/lib/gprpp/windows/thd.cc",
    "grpc_root/src/core/lib/slice/slice.cc",
    "grpc_root/src/core/lib/slice/slice_refcount.cc",
    "grpc_root/src/core/lib/slice/slice_string_helpers.cc",
    "third_party/abseil-cpp/absl/base/internal/cycleclock.cc",
    "third_party/abseil-cpp/absl/base/internal/low_level_alloc.cc",
    "third_party/abseil-cpp/absl/base/internal/raw_logging.cc",
    "third_party/abseil-cpp/absl/base/internal/spinlock.cc",
    "third_party/abseil-cpp/absl/base/internal/spinlock_wait.cc",
    "third_party/abseil-cpp/absl/base/internal/strerror.cc",
    "third_party/abseil-cpp/absl/base/internal/sysinfo.cc",
    "third_party/abseil-cpp/absl/base/internal/thread_identity.cc",
    "third_party/abseil-cpp/absl/base/internal/throw_delegate.cc",
    "third_party/abseil-cpp/absl/base/internal/unscaledcycleclock.cc",
    "third_party/abseil-cpp/absl/base/log_severity.cc",
    "third_party/abseil-cpp/absl/container/internal/hashtablez_sampler.cc",
    "third_party/abseil-cpp/absl/container/internal/hashtablez_sampler_force_weak_definition.cc",
    "third_party/abseil-cpp/absl/container/internal/raw_hash_set.cc",
    "third_party/abseil-cpp/absl/crc/crc32c.cc",
    "third_party/abseil-cpp/absl/crc/internal/cpu_detect.cc",
    "third_party/abseil-cpp/absl/crc/internal/crc.cc",
    "third_party/abseil-cpp/absl/crc/internal/crc_cord_state.cc",
    "third_party/abseil-cpp/absl/crc/internal/crc_memcpy_fallback.cc",
    "third_party/abseil-cpp/absl/crc/internal/crc_memcpy_x86_arm_combined.cc",
    "third_party/abseil-cpp/absl/crc/internal/crc_non_temporal_memcpy.cc",
    "third_party/abseil-cpp/absl/crc/internal/crc_x86_arm_combined.cc",
    "third_party/abseil-cpp/absl/debugging/internal/address_is_readable.cc",
    "third_party/abseil-cpp/absl/debugging/internal/demangle.cc",
    "third_party/abseil-cpp/absl/debugging/internal/elf_mem_image.cc",
    "third_party/abseil-cpp/absl/debugging/internal/vdso_support.cc",
    "third_party/abseil-cpp/absl/debugging/stacktrace.cc",
    "third_party/abseil-cpp/absl/debugging/symbolize.cc",
    "third_party/abseil-cpp/absl/flags/commandlineflag.cc",
    "third_party/abseil-cpp/absl/flags/internal/commandlineflag.cc",
    "third_party/abseil-cpp/absl/flags/internal/flag.cc",
    "third_party/abseil-cpp/absl/flags/internal/private_handle_accessor.cc",
    "third_party/abseil-cpp/absl/flags/internal/program_name.cc",
    "third_party/abseil-cpp/absl/flags/marshalling.cc",
    "third_party/abseil-cpp/absl/flags/reflection.cc",
    "third_party/abseil-cpp/absl/flags/usage_config.cc",
    "third_party/abseil-cpp/absl/hash/internal/city.cc",
    "third_party/abseil-cpp/absl/hash/internal/hash.cc",
    "third_party/abseil-cpp/absl/hash/internal/low_level_hash.cc",
    "third_party/abseil-cpp/absl/numeric/int128.cc",
    "third_party/abseil-cpp/absl/profiling/internal/exponential_biased.cc",
    "third_party/abseil-cpp/absl/random/discrete_distribution.cc",
    "third_party/abseil-cpp/absl/random/gaussian_distribution.cc",
    "third_party/abseil-cpp/absl/random/internal/pool_urbg.cc",
    "third_party/abseil-cpp/absl/random/internal/randen.cc",
    "third_party/abseil-cpp/absl/random/internal/randen_detect.cc",
    "third_party/abseil-cpp/absl/random/internal/randen_hwaes.cc",
    "third_party/abseil-cpp/absl/random/internal/randen_round_keys.cc",
    "third_party/abseil-cpp/absl/random/internal/randen_slow.cc",
    "third_party/abseil-cpp/absl/random/internal/seed_material.cc",
    "third_party/abseil-cpp/absl/random/seed_gen_exception.cc",
    "third_party/abseil-cpp/absl/random/seed_sequences.cc",
    "third_party/abseil-cpp/absl/status/internal/status_internal.cc",
    "third_party/abseil-cpp/absl/status/status.cc",
    "third_party/abseil-cpp/absl/status/status_payload_printer.cc",
    "third_party/abseil-cpp/absl/status/statusor.cc",
    "third_party/abseil-cpp/absl/strings/ascii.cc",
    "third_party/abseil-cpp/absl/strings/charconv.cc",
    "third_party/abseil-cpp/absl/strings/cord.cc",
    "third_party/abseil-cpp/absl/strings/cord_analysis.cc",
    "third_party/abseil-cpp/absl/strings/cord_buffer.cc",
    "third_party/abseil-cpp/absl/strings/escaping.cc",
    "third_party/abseil-cpp/absl/strings/internal/charconv_bigint.cc",
    "third_party/abseil-cpp/absl/strings/internal/charconv_parse.cc",
    "third_party/abseil-cpp/absl/strings/internal/cord_internal.cc",
    "third_party/abseil-cpp/absl/strings/internal/cord_rep_btree.cc",
    "third_party/abseil-cpp/absl/strings/internal/cord_rep_btree_navigator.cc",
    "third_party/abseil-cpp/absl/strings/internal/cord_rep_btree_reader.cc",
    "third_party/abseil-cpp/absl/strings/internal/cord_rep_consume.cc",
    "third_party/abseil-cpp/absl/strings/internal/cord_rep_crc.cc",
    "third_party/abseil-cpp/absl/strings/internal/cordz_functions.cc",
    "third_party/abseil-cpp/absl/strings/internal/cordz_handle.cc",
    "third_party/abseil-cpp/absl/strings/internal/cordz_info.cc",
    "third_party/abseil-cpp/absl/strings/internal/damerau_levenshtein_distance.cc",
    "third_party/abseil-cpp/absl/strings/internal/escaping.cc",
    "third_party/abseil-cpp/absl/strings/internal/memutil.cc",
    "third_party/abseil-cpp/absl/strings/internal/ostringstream.cc",
    "third_party/abseil-cpp/absl/strings/internal/str_format/arg.cc",
    "third_party/abseil-cpp/absl/strings/internal/str_format/bind.cc",
    "third_party/abseil-cpp/absl/strings/internal/str_format/extension.cc",
    "third_party/abseil-cpp/absl/strings/internal/str_format/float_conversion.cc",
    "third_party/abseil-cpp/absl/strings/internal/str_format/output.cc",
    "third_party/abseil-cpp/absl/strings/internal/str_format/parser.cc",
    "third_party/abseil-cpp/absl/strings/internal/stringify_sink.cc",
    "third_party/abseil-cpp/absl/strings/internal/utf8.cc",
    "third_party/abseil-cpp/absl/strings/match.cc",
    "third_party/abseil-cpp/absl/strings/numbers.cc",
    "third_party/abseil-cpp/absl/strings/str_cat.cc",
    "third_party/abseil-cpp/absl/strings/str_replace.cc",
    "third_party/abseil-cpp/absl/strings/str_split.cc",
    "third_party/abseil-cpp/absl/strings/string_view.cc",
    "third_party/abseil-cpp/absl/strings/substitute.cc",
    "third_party/abseil-cpp/absl/synchronization/barrier.cc",
    "third_party/abseil-cpp/absl/synchronization/blocking_counter.cc",
    "third_party/abseil-cpp/absl/synchronization/internal/create_thread_identity.cc",
    "third_party/abseil-cpp/absl/synchronization/internal/futex_waiter.cc",
    "third_party/abseil-cpp/absl/synchronization/internal/graphcycles.cc",
    "third_party/abseil-cpp/absl/synchronization/internal/kernel_timeout.cc",
    "third_party/abseil-cpp/absl/synchronization/internal/per_thread_sem.cc",
    "third_party/abseil-cpp/absl/synchronization/internal/pthread_waiter.cc",
    "third_party/abseil-cpp/absl/synchronization/internal/sem_waiter.cc",
    "third_party/abseil-cpp/absl/synchronization/internal/stdcpp_waiter.cc",
    "third_party/abseil-cpp/absl/synchronization/internal/waiter_base.cc",
    "third_party/abseil-cpp/absl/synchronization/internal/win32_waiter.cc",
    "third_party/abseil-cpp/absl/synchronization/mutex.cc",
    "third_party/abseil-cpp/absl/synchronization/notification.cc",
    "third_party/abseil-cpp/absl/time/civil_time.cc",
    "third_party/abseil-cpp/absl/time/clock.cc",
    "third_party/abseil-cpp/absl/time/duration.cc",
    "third_party/abseil-cpp/absl/time/format.cc",
    "third_party/abseil-cpp/absl/time/internal/cctz/src/civil_time_detail.cc",
    "third_party/abseil-cpp/absl/time/internal/cctz/src/time_zone_fixed.cc",
    "third_party/abseil-cpp/absl/time/internal/cctz/src/time_zone_format.cc",
    "third_party/abseil-cpp/absl/time/internal/cctz/src/time_zone_if.cc",
    "third_party/abseil-cpp/absl/time/internal/cctz/src/time_zone_impl.cc",
    "third_party/abseil-cpp/absl/time/internal/cctz/src/time_zone_info.cc",
    "third_party/abseil-cpp/absl/time/internal/cctz/src/time_zone_libc.cc",
    "third_party/abseil-cpp/absl/time/internal/cctz/src/time_zone_lookup.cc",
    "third_party/abseil-cpp/absl/time/internal/cctz/src/time_zone_posix.cc",
    "third_party/abseil-cpp/absl/time/internal/cctz/src/zone_info_source.cc",
    "third_party/abseil-cpp/absl/time/time.cc",
    "third_party/abseil-cpp/absl/types/bad_optional_access.cc",
    "third_party/abseil-cpp/absl/types/bad_variant_access.cc",
]

CC_INCLUDES = ["third_party/abseil-cpp"]
