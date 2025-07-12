module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullBinder:MonsterItemTest;

import FullModel;
import BinderUtil;

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::MonsterItemTest
	export class MonsterItemTest
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &MonsterItemTest::BindIndex},
				{"iItem01", &MonsterItemTest::BindItem1},
				{"sPersent01", &MonsterItemTest::BindPercent1},
				{"iItem02", &MonsterItemTest::BindItem2},
				{"sPersent02", &MonsterItemTest::BindPercent2},
				{"iItem03", &MonsterItemTest::BindItem3},
				{"sPersent03", &MonsterItemTest::BindPercent3},
				{"iItem04", &MonsterItemTest::BindItem4},
				{"sPersent04", &MonsterItemTest::BindPercent4},
				{"iItem05", &MonsterItemTest::BindItem5},
				{"sPersent05", &MonsterItemTest::BindPercent5}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to Item1
		static void BindItem1(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Item1.reset();
			}
			else
			{
				m.Item1 = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to Percent1
		static void BindPercent1(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Percent1.reset();
			}
			else
			{
				m.Percent1 = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to Item2
		static void BindItem2(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Item2.reset();
			}
			else
			{
				m.Item2 = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to Percent2
		static void BindPercent2(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Percent2.reset();
			}
			else
			{
				m.Percent2 = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to Item3
		static void BindItem3(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Item3.reset();
			}
			else
			{
				m.Item3 = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to Percent3
		static void BindPercent3(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Percent3.reset();
			}
			else
			{
				m.Percent3 = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to Item4
		static void BindItem4(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Item4.reset();
			}
			else
			{
				m.Item4 = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to Percent4
		static void BindPercent4(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Percent4.reset();
			}
			else
			{
				m.Percent4 = result.get<int16_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to Item5
		static void BindItem5(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Item5.reset();
			}
			else
			{
				m.Item5 = result.get<int32_t>(colIndex);
			}
		}

		/// \brief Binds a result's column to Percent5
		static void BindPercent5(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			if (result.is_null(colIndex))
			{
				m.Percent5.reset();
			}
			else
			{
				m.Percent5 = result.get<int16_t>(colIndex);
			}
		}

	};
}
