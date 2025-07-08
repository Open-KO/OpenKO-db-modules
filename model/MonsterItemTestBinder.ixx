module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module FullModel:MonsterItemTestBinder;

import :MonsterItemTest;

namespace model
{
	/// \brief generated column binder for the MonsterItemTest model, using nanodbc
	export class MonsterItemTestBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(MonsterItemTest& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &MonsterItemTestBinder::BindIndex},
				{"iItem01", &MonsterItemTestBinder::BindItem1},
				{"sPersent01", &MonsterItemTestBinder::BindPercent1},
				{"iItem02", &MonsterItemTestBinder::BindItem2},
				{"sPersent02", &MonsterItemTestBinder::BindPercent2},
				{"iItem03", &MonsterItemTestBinder::BindItem3},
				{"sPersent03", &MonsterItemTestBinder::BindPercent3},
				{"iItem04", &MonsterItemTestBinder::BindItem4},
				{"sPersent04", &MonsterItemTestBinder::BindPercent4},
				{"iItem05", &MonsterItemTestBinder::BindItem5},
				{"sPersent05", &MonsterItemTestBinder::BindPercent5}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to Item1
		static void BindItem1(MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			m.Item1 = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to Percent1
		static void BindPercent1(MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			m.Percent1 = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to Item2
		static void BindItem2(MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			m.Item2 = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to Percent2
		static void BindPercent2(MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			m.Percent2 = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to Item3
		static void BindItem3(MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			m.Item3 = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to Percent3
		static void BindPercent3(MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			m.Percent3 = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to Item4
		static void BindItem4(MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			m.Item4 = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to Percent4
		static void BindPercent4(MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			m.Percent4 = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to Item5
		static void BindItem5(MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			m.Item5 = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to Percent5
		static void BindPercent5(MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			m.Percent5 = result.get<int16_t>(colIndex);
		}

	};
}
